/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohael-h <mohael-h@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:51:52 by mohael-h          #+#    #+#             */
/*   Updated: 2026/10/28 17:40:05 by mohael-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	wc;

	i = 0;
	wc = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			wc++;
		i++;
	}
	return (wc);
}

static char	*make_word(char const *s, size_t len)
{
	char	*word;
	size_t	i;

	word = malloc(len + 1);
	if (word == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_words(char **warr, size_t j)
{
	while (j > 0)
		free(warr[--j]);
	free(warr);
}

static char	*split_word(char const *s, char c, size_t *i)
{
	size_t	start;
	size_t	len;

	while (s[*i] && s[*i] == c)
		(*i)++;
	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	len = *i - start;
	return (make_word(s + start, len));
}

char	**ft_split(char const *s, char c)
{
	char	**warr;
	size_t	i;
	size_t	j;
	size_t	cw;

	if (s == NULL)
		return (NULL);
	cw = count_words(s, c);
	warr = malloc((cw + 1) * sizeof(char *));
	if (warr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (j < cw)
	{
		warr[j] = split_word(s, c, &i);
		if (warr[j] == NULL)
		{
			free_words(warr, j);
			return (NULL);
		}
		j++;
	}
	warr[j] = NULL;
	return (warr);
}
