/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ponsumri <chocodeveloper020@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 14:11:17 by ponsumri          #+#    #+#             */
/*   Updated: 2026/08/29 14:43:58 by ponsumri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*s;

	s = malloc(sizeof(t_list));
	if (!s)
		return (NULL);
	s->content = content;
	s->next = NULL;
	return (s);
}
