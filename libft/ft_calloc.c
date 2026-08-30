/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ponsumri <chocodeveloper020@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 18:35:12 by ponsumri          #+#    #+#             */
/*   Updated: 2026/08/30 11:37:01 by ponsumri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;
	size_t	byte;

	if (num && size > (size_t)-1 / num)
		return (NULL);
	byte = num * size;
	ptr = malloc(byte);
	if (ptr != NULL)
		ft_memset(ptr, 0, byte);
	return (ptr);
}
