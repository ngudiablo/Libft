/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngualtie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 15:33:52 by ngualtie          #+#    #+#             */
/*   Updated: 2025/06/26 15:33:53 by ngualtie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	count_words(const char *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*word_dup(const char *s, size_t len)
{
	char	*word;
	size_t	a;

	word = malloc(len + 1);
	a = 0;
	if (!word)
		return (NULL);
	while (a < len)
	{
		word[a] = s[a];
		a++;
	}
	word[a] = '\0';
	return (word);
}

static size_t	fill_words(char **tab, const char *s, char c, size_t words)
{
	size_t	a;
	size_t	start;
	size_t	end;

	a = 0;
	start = 0;
	end = 0;
	while (s[end] && a < words)
	{
		while (s[end] == c)
			end++;
		start = end;
		while (s[end] && s[end] != c)
			end++;
		if (end > start)
			tab[a++] = word_dup(s + start, end - start);
	}
	return (a);
}

char	**ft_split(const char *s, char c)
{
	char		**tab;
	size_t		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	tab = malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	fill_words(tab, s, c, words);
	tab[words] = NULL;
	return (tab);
}
