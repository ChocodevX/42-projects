/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ponsumri <chocodeveloper020@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 15:25:16 by ponsumri          #+#    #+#             */
/*   Updated: 2026/08/30 11:37:21 by ponsumri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int ch, size_t count)
{
	const unsigned char	*p;
	unsigned char		tar;
	size_t				i;

	p = (const unsigned char *)ptr;
	tar = (unsigned char)ch;
	i = 0;
	while (i < count)
	{
		if (p[i] == tar)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}
