#ifndef GET_NEXT_LINE_H
    # define GET_NEXT_LINE_H
    # include <stdio.h>
    # include <stdlib.h>
    # include <unistd.h>
    # ifndef BUFFER_SIZE
        # define BUFFER_SIZE 42
    # endif
    # define MAX_FD 1024

    typedef struct s_gnl_list
    {
        int fd;
        char *buf;
        struct s_gnl_list *next;
    }   t_gnl_list;

    t_gnl_list	*lstfind(t_gnl_list *head, int fd);
    t_gnl_list	*lstcreate(int fd);
    t_gnl_list	*lstinsert(t_gnl_list **head, t_gnl_list *new_node);
    void		lstremove(t_gnl_list **head, int fd);
    char		*lstcombine(char *old_str, char *new_str);
    int			find_newline(char *s);
    size_t		ft_strlen(char *s);
    void		ft_memcpy(char *dst, char *src, size_t n);
    
#endif