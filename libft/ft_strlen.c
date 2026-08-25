#include <stdlib.h>
#include <stdio.h>

int ft_strlen ( const char * str ){
    int i = 0;
    while (str[i] != '\0'){
        i++;
    }
    return i;
}

int main() {
    printf("%i",ft_strlen("hello"));
}