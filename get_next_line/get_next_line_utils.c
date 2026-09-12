#include "get_next_line.h"

t_gnl_list *lstfind(t_gnl_list *head, int fd){
    t_gnl_list *node;

    node = head;
    while (node != NULL){
        if (node->fd == fd){
            return (node);
        }
        node = node->next;
    }
    return (NULL);
}

t_gnl_list *lstcreate (int fd){
    t_gnl_list *new_node;

    new_node = malloc(sizeof(t_gnl_list));
    if (new_node == NULL){
        return (NULL);
    }

    new_node->fd = fd;
    new_node->buf = NULL;
    new_node->next = NULL;
    return new_node;
}

t_gnl_list *lstinsert(t_gnl_list **head , t_gnl_list *new_node) {
    new_node->next = *head;
    *head = new_node;
    return (new_node);
}

void lstremove(t_gnl_list **head, int fd)
{
    t_gnl_list *node;
    t_gnl_list *prev;

    node = *head;
    prev = NULL;
    while (node != NULL)
    {
        if (node->fd == fd)
        {
            if (prev == NULL)
                *head = node->next;     
            else
                prev->next = node->next; 
            if (node->buf != NULL)
                free(node->buf);          
            free(node);                   
            return ;
        }
        prev = node;
        node = node->next;
    }
}

void del(t_gnl_list *head){
    free(head);
}

int find_newline(char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == '\n')
            return (i);
        i++;
    }
    return (-1);
}

char *lstcombine(char *old_str, char *new_str)
{
    size_t oldlen;
    size_t newlen;
    char *bucket;

    if (new_str == NULL)
        return NULL;

    oldlen = 0; 
    if (old_str != NULL)
        oldlen = ft_strlen(old_str);
    newlen = ft_strlen(new_str);

    bucket = malloc(oldlen + newlen + 1);
    if (!bucket)
        return NULL;

    if (old_str != NULL)
        ft_memcpy(bucket, old_str, oldlen);
    ft_memcpy(bucket + oldlen, new_str, newlen);

    bucket[oldlen + newlen] = '\0';

    if (old_str != NULL)
        free(old_str);

    return bucket;
}

size_t ft_strlen(char *s){
    size_t i;
    i = 0;
    while (s[i] != '\0'){
        i++;
    }

    return i;
}

void ft_memcpy(char *dst , char *src,size_t n){
    size_t i;
    i = 0;
    while (i < n){
        dst[i] = src[i];
        i++;
    }
}