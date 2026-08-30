/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ponsumri <chocodeveloper020@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 19:52:38 by ponsumri          #+#    #+#             */
/*   Updated: 2026/08/30 11:38:14 by ponsumri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_count;
	size_t	i;

	n_count = 0;
	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (needle[n_count] != '\0')
		n_count++;
	while (len >= n_count && *haystack != '\0')
	{
		i = 0;
		while (i < n_count && haystack[i] == needle[i])
			i++;
		if (i == n_count)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
