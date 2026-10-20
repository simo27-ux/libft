/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohael-h <mohael-h@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 12:51:40 by mohael-h          #+#    #+#             */
/*   Updated: 2026/10/19 15:14:33 by mohael-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *ltl, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (ltl[0] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		while (ltl[n] && i + n < len
			&& big[i + n] == ltl[n])
			n++;
		if (ltl[n] == '\0')
			return ((char *)big + i);
		n = 0;
		i++;
	}
	return (0);
}
