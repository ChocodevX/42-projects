/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ponsumri <chocodeveloper020@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 14:48:32 by ponsumri          #+#    #+#             */
/*   Updated: 2026/08/27 19:37:35 by ponsumri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


char *ft_strchr(const char *s, int c){
    char cc = c;

    while (*s != '\0'){
        if (*s == c) 
            return (char *)s;
            
        s++;
    }

    if (cc == '\0'){
        return (char *)s;
    }

    return NULL;
}

int main(){
    char str[] = "helflo";

    char *ptr = ft_strchr(str,'f');

    printf("%s",ptr);
}