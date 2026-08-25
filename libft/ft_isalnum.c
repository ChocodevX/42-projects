// #include <stdio.h>
// #include <stdlib.h>

int ft_isalnum(char* s){
    int i = 0;
    while (s[i] != '\0') {
        if ((s[i] >= 48 && s[i] <= 57) || (s[i] >= 65 && s[i] <= 90 ) || (s[i] >= 97 && s[i] <= 122)) {

        }else {
            return 0;
        }
        i++;
    }
    return 1;
}


// int main(){
//     printf("%i",ft_isalnum("12345"));
// }