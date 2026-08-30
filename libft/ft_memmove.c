/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ponsumri <chocodeveloper020@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 11:36:27 by ponsumri          #+#    #+#             */
/*   Updated: 2026/08/30 11:37:28 by ponsumri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		*d;

	if (dest == src || n == 0)
		return (dest);
	s = src;
	d = dest;
	i = 0;
	while (i < n)
	{
		if (dest < src)
			d[i] = s[i];
		else
			d[n - 1 - i] = s[n - 1 - i];
		i++;
	}
	return (dest);
}
