/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohael-h <mohael-h@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 16:07:08 by mohael-h          #+#    #+#             */
/*   Updated: 2026/10/22 13:37:32 by mohael-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_itoa_alloc(long ni, int si, int *mal)
{
	long	tmp;

	*mal = 0;
	tmp = ni;
	while (tmp > 0)
	{
		tmp /= 10;
		(*mal)++;
	}
	if (ni == 0)
		*mal = 1;
	if (si == -1)
		(*mal)++;
	return (malloc(*mal + 1));
}

static void	ft_itoa_fill(char *alm, long ni, int mal, int i)
{
	alm[mal] = '\0';
	while (mal > i)
	{
		alm[mal - 1] = (ni % 10) + '0';
		mal--;
		ni /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		i;
	long	ni;
	int		si;
	int		mal;
	char	*alm;

	i = 0;
	ni = n;
	si = 1;
	if (ni < 0)
	{
		si *= -1;
		ni *= -1;
	}
	alm = ft_itoa_alloc(ni, si, &mal);
	if (alm == NULL)
		return (NULL);
	if (si == -1)
		alm[i++] = '-';
	ft_itoa_fill(alm, ni, mal, i);
	return (alm);
}
