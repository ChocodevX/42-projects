/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ponsumri <chocodeveloper020@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 17:39:14 by ponsumri          #+#    #+#             */
/*   Updated: 2026/08/30 11:38:12 by ponsumri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *lhs, const char *rhs, size_t count)
{
	if (count == 0)
		return (0);
	while (count > 0 && *lhs && (*lhs == *rhs))
	{
		lhs++;
		rhs++;
		count--;
	}
	return (*(unsigned char *)lhs - *(unsigned char *)rhs);
}
