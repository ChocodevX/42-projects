/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ponsumri <chocodeveloper020@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 08:15:53 by ponsumri          #+#    #+#             */
/*   Updated: 2026/09/02 14:40:00 by ponsumri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	in_word;

	i = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			i++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (i);
}

static char	*get_word(char const *s, size_t *j, char c)
{
	size_t	start;
	size_t	len;
	size_t	m;
	char	*word;

	while (s[*j] == c)
		(*j)++;
	start = *j;
	while (s[*j] != c && s[*j] != '\0')
		(*j)++;
	len = *j - start;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	m = 0;
	while (m < len)
	{
		word[m] = s[start + m];
		m++;
	}
	word[m] = '\0';
	return (word);
}

static void	free_all(char **ans, size_t k)
{
	size_t	m;

	m = 0;
	while (m < k)
	{
		free(ans[m]);
		m++;
	}
	free(ans);
}

char	**ft_split(char const *s, char c)
{
	char	**ans;
	size_t	j;
	size_t	k;
	int		words;

	if (s == NULL)
		return (NULL);
	words = count_words(s, c);
	ans = malloc((words + 1) * sizeof(char *));
	if (!ans)
		return (NULL);
	j = 0;
	k = 0;
	while (k < (size_t)words)
	{
		ans[k] = get_word(s, &j, c);
		if (!ans[k])
		{
			free_all(ans, k);
			return (NULL);
		}
		k++;
	}
	ans[k] = NULL;
	return (ans);
}
