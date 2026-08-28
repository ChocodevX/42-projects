/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ponsumri <chocodeveloper020@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 11:36:27 by ponsumri          #+#    #+#             */
/*   Updated: 2026/08/28 13:36:06 by ponsumri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t  i;
    const unsigned char *s;
    unsigned char *d;

    if (dest == src || n == 0)
        return (dest);
        
    i = 0;
    s = src;
    d = dest;
    
    if (dest < src) { // dest before src
        // copy from front to back
        i = 0;
        while (i < n){
            d[i] = s[i];
            i++;
        }                                                                           
    }else {
        i = n - 1;
        while(i >= 0){
            d[i] = s[i];
            i--;
        }
    }

    return dest;
}
