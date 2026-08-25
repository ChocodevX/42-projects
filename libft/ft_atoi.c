// #include <stdio.h>
// #include <stdlib.h>

int ft_atoi(const char *nptr){
    int i = 0;
    int j = 0;
    int neg = 1;

    while(nptr[i] != '\0'){
        if ((nptr[i] >= 48 && nptr[i] <= 57) || nptr[i] == 45) {
            if (nptr[i] == 45 && neg == 1){
                neg = -1;
            }else if (nptr[i] == 45 && neg == -1) {
                neg = 1;
            }else {
                j = j * 10 + (nptr[i] - '0');
            }
        }
        i++;
    }
    return j * neg;
}

// int main(){
//     printf("%i",ft_atoi("-123"));
// }