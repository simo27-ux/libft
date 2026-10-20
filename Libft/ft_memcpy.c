/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohael-h <mohael-h@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:47:23 by mohael-h          #+#    #+#             */
/*   Updated: 2026/10/18 20:28:47 by mohael-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*p;
	unsigned char		*p1;

	i = 0;
	p = (const unsigned char *)src;
	p1 = (unsigned char *)dest;
	while (i < n)
	{
		p1[i] = p[i];
		i++;
	}
	return (dest);
}
