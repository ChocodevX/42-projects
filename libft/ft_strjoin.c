/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fl_strjoin                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ponsumri <chocodeveloper020@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 22:14:34 by ponsumri          #+#    #+#             */
/*   Updated: 2026/08/28 22:32:25 by ponsumri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char *s3 = malloc((ft_strlen(s1) + ft_strlen(s2)) * (sizeof(char)) + 1);

    if (s3 == NULL)
        return NULL;

    int i = 0;
    int j = 0;
    while (s1[i] != '\0')
    {
        s3[j] = s1[i];
        i++;
        j++;
    }
    i = 0;

    while (s2[i] != '\0')
    {
        s3[j] = s2[i];
        i++;
        j++;
    }
    s3[j] = '\0';
    return *s3;
}

int main()
{
}