/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ponsumri <chocodeveloper020@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 19:14:29 by ponsumri          #+#    #+#             */
/*   Updated: 2026/08/29 19:21:06 by ponsumri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *)){
    if (!lst)
        return;

    t_list *next;
    while(*lst) {
        next = (*lst)->next;
        del((*lst)->content);
        free((*lst));
        *lst = next;
    }
}

void del (void *content){
    free(content);
}

int main (){
    
}