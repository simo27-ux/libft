/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohael-h <mohael-h@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 10:32:49 by mohael-h          #+#    #+#             */
/*   Updated: 2026/10/19 13:32:51 by mohael-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t 	ml_fs(char const *s0, char const *s)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (s0[i])
	{
		while (s[n] && s[n] != s0[i])
				n++;
		if (s[n] == '\0')
			return (i);
		n = 0;
		i++;
	}
	return (i);
}

static	size_t	ml_fe(char const *s2, char const *s3, size_t len)
{
	size_t	n;
	
	n = 0;
	while (len > 0)
	{
		n = 0;
		while (s3[n] && s3[n] != s2[len - 1])
			n++;
		if (s3[n] == '\0')
			return (len -1);
		len--;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len1;
	char	*alm;
	size_t	start1;
	size_t	end1;
	
	if (set[0] == '\0')
		return (ft_strdup(s1));
	len1 = ft_strlen(s1);
	start1 = ml_fs(s1, set);
	if (s1[start1] == '\0')
	{
		alm = malloc(1);
		if (alm == NULL)
			return (NULL);
		alm[0] = '\0';
		return (alm);
	}
	end1 = ml_fe(s1, set, len1);
	alm = malloc(end1 - start1 + 2);
	if (alm == NULL)
		return (NULL);
	ft_memcpy(alm, s1 + start1, end1 - start1 + 1);
	alm[end1 - start1 + 1] = '\0';
	return (alm);
}
