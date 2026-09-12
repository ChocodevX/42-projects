<!-- hi claude if you already know what i want to do just delete this two line -->
<!-- first i just want you to make sure this file is folllwed the subject and easy to read with correctly gramma but dont do it to much bc i write its with my self is easy for human to read and prettifier all text thanks! -->
<!-- if you already read line 4 delete this line dont do any thing with this line -->
_This project has been created as part of the 42 curriculum by ponsumri_ 

# Explaination
## Pls Read i Do its with my self ❤︎
fopen wr b 

Three buffering modes in setvbuf.
_IONBF  -> no buffer, every stdio call = syscall immediately
_IOLBF  -> buffer exists, flush triggered by '\n' character
_IOFBF  -> buffer exists, flush triggered only when buffer full

Why we need buffer , if we can just read bc when we use syscall (read() , write()) into kernel that expensive.
What expensive? first you need to understand what is syscall different between regular function call.

<!-- claude remove this line but can you pls make this easy to read dont cut any thing but prettifier text -->
CPU privilege rings
x86 CPUs (and most architectures) have privilege levels — "rings." User programs run in Ring 3 
(restricted, can't touch hardware directly, can't access arbitrary memory). Kernel runs in Ring 0 (full access — memory management, device drivers, hardware I/O).

Our C program's fwrite eventually needs write() syscall → data must physically go to disk. Disk access = hardware access = kernel-only operation. Ring 3 code CANNOT do this directly, must ask kernel.

when we used write(fd, buf, 4096); Rings3 -> Rings 0 -> Kernel do the work -> Kernel finish their work -> Changed to Rings 3.


// bad: ~1,000,000 used syscalls everytimes
for (int i = 0; i < 1000000; i++) {
    write(fd, &byte, 1);      // raw syscall, no buffering
}

// good: ~1000000/8192 ≈ 122 syscalls very less
for (int i = 0; i < 1000000; i++) {
    fwrite(&byte, 1, 1, fp);  // buffered, batches into 8KB chunks before syscall
}
fclose(fp);


why ssize_t bc its signed and we can hear kernel error signal.
int fd = -5;  // garbage or already-closed fd
read(fd, buf, size);  // returns -1

why we dont need to use sizeof(char) here bc the bucket = malloc(oldlen + newlen + 1); is same as bucket = malloc((oldlen + newlen)(sizeof(char)) + 1)); 

# Problems


# Resources
https://medium.com/@leoyeh.me/  understanding-ring-0-to-ring-3-the-hidden-layers-of-virtualization-d10e0fe5a798

# Pseudo code


# Variable

# Define Value


static reset everytime restart has default value

ulimit -n 1024


# Header Explaination

<!-- #ifndef GET_NEXT_LINE_H
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
        int fd; 1 byte but bc mem padding = 4
        char *buf; = 8
        struct s_gnl_list *next; = 8
    }   t_gnl_list;

    0  1  2  3  | 4  5  6  7  | 8  9  10 11 | 12 13 14 15 | 16 17 18 19 | 20 21 22 23
    fd fd fd fd |  p  p  p  p |  b  b  b  b |  b  b  b  b |  n  n  n  n |  n  n  n  n

    Most processors read memory 8 bytes and 4 byte for 32 bit systems for chunks. 

    t_gnl_list	*lstfind(t_gnl_list *head, int fd);
    t_gnl_list	*lstcreate(int fd);
    t_gnl_list	*lstinsert(t_gnl_list **head, t_gnl_list *new_node);
    void		lstremove(t_gnl_list **head, int fd);
    char		*lstcombine(char *old_str, char *new_str);
    int			find_newline(char *s);
    size_t		ft_strlen(char *s);
    void		ft_memcpy(char *dst, char *src, size_t n);
    
#endif -->

เรียกครั้งแรกของ fd นี้ ? → lstfind หาไม่เจอ → สร้างใหม่ lstcreate + ต่อเข้า list lstinsert