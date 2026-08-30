/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ponsumri <chocodeveloper020@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 21:32:47 by ponsumri          #+#    #+#             */
/*   Updated: 2026/08/29 10:29:57 by ponsumri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_itoa(const char *nptr)
{
	int	i;
	int	j;
	int	neg;

	i = 0;
	j = 0;
	neg = 1;
	while (nptr[i] != '\0')
	{
		if ((nptr[i] >= 48 && nptr[i] <= 57) || nptr[i] == 45)
		{
			if (nptr[i] == 45 && neg == 1)
				neg = -1;
			else if (nptr[i] == 45 && neg == -1)
				neg = 1;
			else
				j = j * 10 + (nptr[i] - '0');
		}
		i++;
	}
	return (j * neg);
}
