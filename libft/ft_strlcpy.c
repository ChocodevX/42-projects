/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ponsumri <chocodeveloper020@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 18:54:55 by ponsumri          #+#    #+#             */
/*   Updated: 2026/08/26 18:54:55 by ponsumri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <libft.h>
#include <stdio.h>
#include <stdlib.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i = 0;
    size_t j = 0;

    while (src[i] != '\0')
    {
        i++;
    }
    j = i;

    if (size == 0)
    {
        return (j);
    }

    i = 0;

    while (src[i] != '\0' && i < size - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';

    return j;
}