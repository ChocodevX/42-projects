/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ponsumri <chocodeveloper020@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 10:34:53 by ponsumri          #+#    #+#             */
/*   Updated: 2026/08/29 17:42:20 by ponsumri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)){
    size_t len;
    size_t i;
    char *ans;

    if (!s || !f)
        return (NULL);

    len = ft_strlen(s);
    ans = malloc(sizeof(char) * (len + 1));
    if (!ans)
        return (NULL);
    
    i = 0;
    while (i<len){
        ans[i] = f((unsigned int)i , s[i]);
        i++;
    } 

    ans[i] = '\0';
    return (ans);
}


// char	ft_tolower_char(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 'A' && c <= 'Z')
// 		return (c + 32);
// 	return (c);
// }


// int	main(void)
// {
// 	char	*result;

// 	result = ft_strmapi("HELLO WORLD", ft_tolower_char);
// 	printf("output: %s\n", result);
// 	free(result);
// 	return (0);
// }