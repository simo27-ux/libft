/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohael-h <mohael-h@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:42:33 by mohael-h          #+#    #+#             */
/*   Updated: 2026/10/21 14:34:27 by mohael-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	const char	*p;

	i = 0;
	p = NULL;
	while (s[i])
	{
		if ((unsigned char)s[i]
			== (unsigned char)c)
			p = s + i;
		i++;
	}
	if (s[i] == '\0'
		&& (unsigned char)c == '\0')
		return ((char *)(s + i));
	return ((char *)p);
}
