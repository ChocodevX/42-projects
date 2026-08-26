/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fl_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ponsumri <chocodeveloper020@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 22:05:39 by ponsumri          #+#    #+#             */
/*   Updated: 2026/08/26 22:05:39 by ponsumri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <libft.h>
#include <stdio.h>
#include <stdlib.h>

void *memset(void *s, int c, size_t n)
{
    size_t i = 0;
    unsigned char *ptr = s;

    while (i < n)
    {
        ptr[i] = c;
        i++;
    }
    return s;
}