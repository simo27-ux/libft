/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohael-h <mohael-h@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 17:57:05 by mohael-h          #+#    #+#             */
/*   Updated: 2026/10/18 20:35:44 by mohael-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*alm;
	size_t	o_len;
	size_t	al_len;

	o_len = ft_strlen(s);
	if (s[0] == '\0' || len == 0 || start >= o_len)
	{
		alm = malloc(1);
		if (alm == NULL)
			return (NULL);
		alm[0] = '\0';
		return (alm);
	}
	if (o_len - start >= len)
		al_len = len;
	else
		al_len = o_len - start;
	alm = malloc(al_len + 1);
	if (alm == NULL)
		return (NULL);
	ft_memcpy(alm, s + start, al_len);
	alm[al_len] = '\0';
	return ((char *)alm);
}
