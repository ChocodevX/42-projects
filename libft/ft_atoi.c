/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ponsumri <chocodeveloper020@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 21:32:47 by ponsumri          #+#    #+#             */
/*   Updated: 2026/08/25 21:32:47 by ponsumri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr){
    int i = 0;
    int j = 0;
    int neg = 1;

    while(nptr[i] != '\0'){
        if ((nptr[i] >= 48 && nptr[i] <= 57) || nptr[i] == 45) {
            if (nptr[i] == 45 && neg == 1){
                neg = -1;
            }else if (nptr[i] == 45 && neg == -1) {
                neg = 1;
            }else {
                j = j * 10 + (nptr[i] - '0');
            }
        }
        i++;
    }
    return j * neg;
}