/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ponsumri <chocodeveloper020@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 16:08:27 by ponsumri          #+#    #+#             */
/*   Updated: 2026/08/27 17:10:36 by ponsumri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strrchr(const char *s, int c){
    char cc = c;
    const char *end = s;
        
    while (*end != '\0'){
        end++;
    }    

    
    while (end >= s){
        if (*end == cc){
            return (char *)end;
        }
        end--;
    }
    if (cc == '\0'){
        return (char *)s;
    }

    return NULL;
}

int main(){
    char str[] = "helflo";

    char *ptr = ft_strrchr(str,'f');

    printf("%s",ptr);
}