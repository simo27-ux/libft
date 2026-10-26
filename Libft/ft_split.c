/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohael-h <mohael-h@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:51:52 by mohael-h          #+#    #+#             */
/*   Updated: 2026/10/26 14:22:11 by mohael-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	cow(char const *s, char c)
{
	size_t	i;
	size_t	wc;

	i = 0;
	wc = 0;
	while (s[i])
	{
		if ((s[i] != c)
			&& (i == 0 || s[i - 1] == c))
			wc++;
		i++;
	}
	return (wc);
}

static size_t	wlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*make_word(char const *s, size_t len)
{
	char	*word;
	size_t	i;

	word = malloc((len + 1) * sizeof(char));
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

char	**ft_split(char const *s, char c)
{
	char	**warr;
	size_t	i;
	size_t	j;
	size_t	cw;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	cw = cow(s, c);
	warr = malloc((cw + 1) * sizeof(char *));
	if (warr == NULL)
		return (NULL);
	while (s[i] == c)
		i++;
	while (j < cw)
	{
		if (split_word(s, c, warr, &i) == 0)
			return (free_words(warr, j), NULL);
		j++;
	}
	warr[j] = NULL;
	return (warr);
}