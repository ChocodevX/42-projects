/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ponsumri <chocodeveloper020@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 22:21:05 by ponsumri          #+#    #+#             */
/*   Updated: 2026/08/25 22:21:05 by ponsumri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <libft.h>
#include <stdio.h>
#include <stdlib.h>

size_t ft_strlcat(char *dst, const char *src, size_t size){
    size_t i = 0;
    size_t j = 0;
    size_t srclen = 0;
    size_t dstlen = 0;
    size_t k = 0;


    while (src[i] != '\0') {
        i++;
    }

    srclen = i;

    while (dst[j] != '\0'){
        j++;
    }
    dstlen = j;
    
    if (size == 0){
        return (srclen + dstlen);
    }

    i = 0;
    k = dstlen;
    while(src[i] != '\0' && k < size - 1){
        dst[j] = src[i];
        i++;
        j++;
        k++;
    }

    if (k < size){
        dst[j] = '\0';
    }

    if (dstlen > size){
        return (size + srclen);
    }   
    return (srclen + dstlen);
}

int main(void)
{
	char	dst[20] = "hi";
	char	*src = "hello";
    size_t size = 7;

    // ft_strlcat(dst, src, sizeof(dst));
	printf("%zu\n", ft_strlcat(dst, src, size));
	printf("%s\n", dst);
}