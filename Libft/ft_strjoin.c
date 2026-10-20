/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohael-h <mohael-h@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 20:30:06 by mohael-h          #+#    #+#             */
/*   Updated: 2026/10/18 22:04:34 by mohael-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*alm;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	alm = malloc(len1 + len2 + 1);
	if (alm == NULL)
		return (NULL);
	ft_memcpy(alm, s1, len1);
	ft_memcpy(alm + len1, s2, len2);
	alm[len1 + len2] = '\0';
	return (alm);
}
