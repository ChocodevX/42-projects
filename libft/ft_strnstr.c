/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ponsumri <chocodeveloper020@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 19:52:38 by ponsumri          #+#    #+#             */
/*   Updated: 2026/08/27 20:43:28 by ponsumri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t n_count = 0;
    size_t i = 0;
    if (needle[0] == '\0')
    {
        return (char *)haystack;
    }

    while (needle[n_count] != '\0')
    {
        n_count++;
    }
    
    while (len >= n_count && *haystack != '\0')
    {
        while (i < n_count && haystack[i] == needle[i])
        {
            i++;
        }
        if (i == n_count)
        {
            return (char *)haystack;
        }

        haystack++;
        len--;
    }

    return NULL;
}

int main()
{
    const char *largestring = "Foo Bar Baz";
    const char *smallstring = "Bar";
    char *ptr;

    ptr = ft_strnstr(largestring, smallstring, 4);

    printf("%s", ptr);
}