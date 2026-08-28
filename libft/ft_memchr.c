/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ponsumri <chocodeveloper020@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 15:25:16 by ponsumri          #+#    #+#             */
/*   Updated: 2026/08/28 15:39:15 by ponsumri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void *ft_memchr(const void *ptr, int ch, size_t count) {
    const unsigned char *p = (const unsigned char *)ptr;
    unsigned char tar = (unsigned char)ch;
    size_t i = 0;
    while (i < count) {
        if (p[i] == tar){
            return (void *)(p + i);
        }
        i++;
    }
    return NULL;
}