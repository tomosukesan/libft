/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 21:51:07 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/27 18:11:41 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	lstsize;

	if (lst == NULL)
		return (0);
	lstsize = 1;
	while (lst->next != NULL)
	{
		lstsize++;
		lst = lst->next;
	}
	return (lstsize);
}
