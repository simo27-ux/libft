/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohael-h <mohael-h@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 18:11:20 by mohael-h          #+#    #+#             */
/*   Updated: 2026/10/19 15:12:02 by mohael-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ld;
	size_t	ls;
	size_t	i;

	i = 0;
	ld = 0;
	ls = 0;
	while (src[ls])
		ls++;
	while (ld < size && dst[ld])
		ld++;
	if (size == 0)
		return (ls);
	if (size == ld)
		return (size + ls);
	while (src[i] && ld + i < size - 1)
	{
		dst[ld + i] = src[i];
		i++;
	}
	dst[ld + i] = '\0';
	return (ld + ls);
}
