/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.ja>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:06:16 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/20 23:34:53 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lstlast;

	lstlast = lst;
	if (lst == NULL)
		return (NULL);
	while (lstlast->next != NULL)
		lstlast = lstlast->next;
	return (lstlast);
}
