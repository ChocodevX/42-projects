#include "get_next_line.h"

char *get_next_line(int fd){
    FILE *fp = fopen("file.txt", "rb");
    char buffer[8192];

    if (fd < 0 || BUFFER_SIZE <= 0){
        return NULL;
    }

    static char *leftover[MAX_FD];
    char *dst = malloc(sizeof(char) * (BUFFER_SIZE + 1));

    while (buffer){
        ssize_t reading_value = read(fd,dst,BUFFER_SIZE);

        if (reading_value == 0)
            break;

        if (reading_value < 0)
            return NULL
    }

}

int main (){

}