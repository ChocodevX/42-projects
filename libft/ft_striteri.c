/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ponsumri <chocodeveloper020@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 11:56:25 by ponsumri          #+#    #+#             */
/*   Updated: 2026/08/29 12:00:02 by ponsumri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    size_t len;
    size_t i;

    if (!s || !f)
        return ;
    len = ft_strlen(s);
    i = 0;
    while (i < len)
    {
        f((unsigned int)i, &s[i]);
        i++;
    }
}

int main(){
    
}