// #include <stdio.h>
// #include <stdlib.h>

int ft_isdigit(char* s){
    int i = 0;
    while (s[i] != '\0'){
        if (s[i] >= 48 && s[i] <= 57){
        }else {
            return 0;
        }
        i++;
    }
    return 1;
}

// int main(){
//     printf("%i",ft_isdigit("dsdsad"));
// }