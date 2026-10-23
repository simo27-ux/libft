/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohael-h <mohael-h@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 17:19:01 by mohael-h          #+#    #+#             */
/*   Updated: 2026/10/23 23:58:04 by mohael-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nl;

	nl = malloc(sizeof(t_list));
	if (nl == NULL)
		return (NULL);
	nl->content = content;
	nl->next = NULL;
	return (nl);
}
