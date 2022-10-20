/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.ja>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:37:30 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/20 10:37:57 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"

void	del(void *arg)
{
	free(arg);
}
 void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*del_node;
	del_node = (*lst)->next;
	while (del_node != NULL)
	{
		del((*lst)->content);
		del_node = (*lst)->next->next;
		free((*lst)->next);
	}

}

int main(void)
{
	t_list	*lst;
	ft_lstclear(&lst, del);
}