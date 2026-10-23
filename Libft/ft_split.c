/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohael-h <mohael-h@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 13:51:52 by mohael-h          #+#    #+#             */
/*   Updated: 2026/10/22 20:22:36 by mohael-h         ###   ########.fr       */
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
		
}