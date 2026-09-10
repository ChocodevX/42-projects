#include "get_next_line.h"

char *contains_newline(char *leftover){
    if (leftover == NULL){
        return NULL;
    }
    while (*leftover) {
        if (*leftover == '\n'){
            return leftover; // we also can return the index likes i or something but this could too easier than.
        }
        leftover++;
    }
    return NULL;
}

char *combine(char *old_str, char *new_str)
{
    size_t oldlen;
    size_t newlen;
    char *bucket;

    if (new_str == NULL)
        return NULL;

    oldlen = 0; 
    if (old_str != NULL)
        oldlen = strlen(old_str);
    newlen = strlen(new_str);

    bucket = malloc(oldlen + newlen + 1);
    if (!bucket)
        return NULL;

    if (old_str != NULL)
        memcpy(bucket, old_str, oldlen);
    memcpy(bucket + oldlen, new_str, newlen);

    bucket[oldlen + newlen] = '\0';

    if (old_str != NULL)
        free(old_str);

    return bucket;
}

char *get_next_line(int fd){
    FILE *fp = fopen("file.txt", "rb");
    char buffer[8192];

    if (fd < 0 || BUFFER_SIZE <= 0){
        return NULL;
    }

    static char *leftover[MAX_FD];
    char *dst = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if (!dst){
        return NULL;
    }
    ssize_t finish_reading_count;
    while (1){
        finish_reading_count = read(fd,dst,BUFFER_SIZE);
        if (finish_reading_count == 0)
            break;

        if (finish_reading_count < 0)
            return NULL;

        dst[finish_reading_count] = '\0';
        leftover[fd] = combine(leftover[fd],dst);

        if (contains_newline(leftover[fd])){
            break;
        }

        char *what_left = contains_newline(leftover[fd]);
    }
}

int main (){

}