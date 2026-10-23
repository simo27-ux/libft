/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohael-h <mohael-h@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 18:14:17 by mohael-h          #+#    #+#             */
/*   Updated: 2026/10/22 13:12:11 by mohael-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*p;
	unsigned char		*p1;

	i = n;
	p = (const unsigned char *)src;
	p1 = (unsigned char *)dest;
	if (p1 > p)
	{
		while (i > 0)
		{
			p1[i - 1] = p[i - 1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			p1[i] = p[i];
			i++;
		}
	}
	return (dest);
}
