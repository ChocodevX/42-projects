/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ponsumri <chocodeveloper020@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 23:00:52 by ponsumri          #+#    #+#             */
/*   Updated: 2026/08/30 11:37:26 by ponsumri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*sr;
	unsigned char		*dst;

	i = 0;
	sr = src;
	dst = dest;
	while (i < n)
	{
		dst[i] = sr[i];
		i++;
	}
	return (dest);
}
