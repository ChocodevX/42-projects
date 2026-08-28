/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ponsumri <chocodeveloper020@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 18:35:12 by ponsumri          #+#    #+#             */
/*   Updated: 2026/08/28 18:43:21 by ponsumri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void* calloc(size_t num, size_t size){
    if (num && size > (size_t) -1 / num){
        return NULL;
    }
    size_t byte = num * size;
    void *ptr = malloc(byte);
    if (ptr != NULL){
        ft_memset(ptr,0,byte);
    }
    return ptr;
}