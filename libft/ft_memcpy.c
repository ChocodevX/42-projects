/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ponsumri <chocodeveloper020@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 23:00:52 by ponsumri          #+#    #+#             */
/*   Updated: 2026/08/26 23:00:52 by ponsumri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i = 0;
    const unsigned char *sr = src;
    unsigned char *dst = dest;

    while (i < n)
    {
        dst[i] = sr[i];
        i++;
    }
    return dest;
}