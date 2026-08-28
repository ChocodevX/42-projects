/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ponsumri <chocodeveloper020@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 18:45:42 by ponsumri          #+#    #+#             */
/*   Updated: 2026/08/28 18:51:46 by ponsumri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


char *ft_strdup(const char *s){
    if (s == NULL){
        return NULL;
    }
    int i = 0;
    while(s[i] != '\0'){
        i++;
    }

    char *dest = malloc(i + 1);
    if (s == NULL){
        return NULL;
    }
    
    int i = 0;
    while (s[i] != '\0'){
        dest[i] = s[i];
        i++;
    }

    dest[i] =  '\0';

    return dest;
}