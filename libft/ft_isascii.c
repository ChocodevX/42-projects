// #include <stdio.h>
// #include <stdlib.h>

int ft_isascii(char* s){
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] >= 0 && s[i] <= 115) {
            
        }else {
            return 0;
        }
        i++;
    }
    return 1;
}


// int main(){
//     printf("%i",ft_isascii("sdasdasddadก"));
// }