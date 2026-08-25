// #include <stdio.h>
// #include <stdlib.h>

int ft_isprint(char* s){
    int i = 0;
    while(s[i] != '\0'){
        if ( (s[i] >= 0 && s[i]<= 32) || (s[i] == 127) ){
            return 0;
        }
        i++;
    }
    return 1;
}

// int main(){
//     printf("%i",ft_isprint("    "));
// }