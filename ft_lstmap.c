/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.ja>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:57:10 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/20 23:47:18 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;

	new_lst = malloc(sizeof(t_list));
	if (new_lst == NULL)
		return (NULL);
	new_lst = lst;
	ft_lstiter(new_lst, (void *)f);
	ft_lstdelone(new_lst, (void *)del);
	return (new_lst);
}
