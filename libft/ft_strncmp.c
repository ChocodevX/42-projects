/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ponsumri <chocodeveloper020@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 17:39:14 by ponsumri          #+#    #+#             */
/*   Updated: 2026/08/28 12:04:25 by ponsumri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int strncmp( const char* lhs, const char* rhs, size_t count ){
    if (count == 0) {
        return 0;
    }
    
    while (count > 0 && *lhs && (*lhs == *rhs)){
        lhs++;
        rhs++;
        count--;
    }

    return *(unsigned char*)lhs - *(unsigned char*)rhs;
}

int main(){
    char str1[] = "ApplePie";
    char str2[] = "AppleJuice";

    // Compare only the first 5 characters ("Apple")
    int result1 = strncmp(str1, str2, 5);
    printf("First 5 chars comparison result: %d (They match!)\n", result1);

    // Compare the first 6 characters ("AppleP" vs "AppleJ")
    int result2 = strncmp(str1, str2, 6);
    printf("First 6 chars comparison result: %d (P > J)\n", result2);

    return 0;
}