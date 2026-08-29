/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ponsumri <chocodeveloper020@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 21:32:47 by ponsumri          #+#    #+#             */
/*   Updated: 2026/08/29 16:51:24 by ponsumri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr){
    int i = 0;
    int neg = 1;
    int j = 0;

    while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
        i++;
    if (nptr[i] == '+' || nptr[i] == '-') {
        if (nptr[i] == '-')
            neg = -1;
        i++;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9') {
        j = j * 10 + (nptr[i] - '0');
        i++;
    }
    return j * neg;
}