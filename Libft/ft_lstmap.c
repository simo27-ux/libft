/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohael-h <mohael-h@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 23:15:42 by mohael-h          #+#    #+#             */
/*   Updated: 2026/10/23 23:57:46 by mohael-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*hnl;
	t_list	*nn;
	void	*tmp;

	hnl = NULL;
	while (lst)
	{
		tmp = f(lst->content);
		nn = ft_lstnew(tmp);
		if (nn == NULL)
		{
			del(tmp);
			ft_lstclear(&hnl, del);
			return (NULL);
		}
		ft_lstadd_back(&hnl, nn);
		lst = lst->next;
	}
	return (hnl);
}
