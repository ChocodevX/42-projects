/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ponsumri <chocodeveloper020@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 16:08:27 by ponsumri          #+#    #+#             */
/*   Updated: 2026/08/30 11:38:19 by ponsumri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		cc;
	const char	*end;

	cc = c;
	end = s;
	while (*end != '\0')
		end++;
	while (end >= s)
	{
		if (*end == cc)
			return ((char *)end);
		end--;
	}
	if (cc == '\0')
		return ((char *)s);
	return (NULL);
}
