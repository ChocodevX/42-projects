/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ponsumri <chocodeveloper020@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 20:06:30 by ponsumri          #+#    #+#             */
/*   Updated: 2026/08/28 20:35:43 by ponsumri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_substr(const char *s, unsigned int start, size_t len)
{
    if (len == 0)
    {
        char *empty = malloc(1);
        if (!empty)
            return (NULL);
        empty[0] = '\0';
        return (empty);
    }
    size_t i = 0;
    while (i < start && s[i] != '\0')
    {
        i++;
    }
    size_t j = 0;
    size_t k = i;
    i = 0;
    char *d = malloc(ft_strlen(s) * (sizeof(char)) + 1);
    if (!d)
        return (NULL);

    while (j != len && s[k + i] != '\0')
    {
        d[j] = s[k + i];
        j++;
        i++;
    }

    d[i] = '\0';

    return d;
}

int main()
{
    printf("%s", ft_substr("Bonjour comment ca va?", 5, 8));
}