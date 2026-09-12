#include "get_next_line.h"

char *get_next_line(int fd){
    if (fd < 0 || BUFFER_SIZE <= 0){
        return NULL;
    }

    static t_gnl_list *head = NULL;
    t_gnl_list *node;
    char *line;
    node = lstfind(head,fd);
    if (node == NULL){
        node = lstcreate(fd);
        lstinsert(&head,node);
    }
    ssize_t read_counter;
    char *dst = malloc((sizeof(char) * BUFFER_SIZE) + 1 );
    if (!dst){
        return NULL;
    }
    while(node->buf == NULL || ft_strchr(node->buf,'\n') == NULL){
        read_counter = read(fd,dst,BUFFER_SIZE);
        if (read_counter == 0)
            break;

        if (read_counter < 0)
        {
            free(dst);
            return (NULL);
        }

        dst[read_counter] = '\0';
        node->buf = lstcombine(node->buf, dst);
    }

    if (node->buf == NULL){
        free(dst);
        lstremove(&head,fd);
        return NULL;
    }

    int nl_pos = find_newline(node->buf);
    int nl_len;
    if (nl_pos != -1){
        nl_len = nl_pos + 1;
    }else {
        nl_len = ft_strlen(node->buf);
    }
    
    line = malloc((nl_len) + 1);
    if (line == NULL)
    {
        free(dst);
        return (NULL);
    }
    ft_strlcpy(line, node->buf, nl_len + 1);

    if (nl_pos != -1)
    {
        int remain_len = ft_strlen(node->buf) - nl_len;
        char *remainder = malloc(remain_len + 1);
        if (remainder != NULL)
            ft_strlcpy(remainder, node->buf + nl_len, remain_len + 1);
        free(node->buf);
        node->buf = remainder;
    }
    else
    {
        free(node->buf);
        node->buf = NULL;
        lstremove(&head, fd);
    }

    free(dst);
    return (line);
}

int main (){

}