/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 21:51:07 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/20 12:48:45 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	printf("%s, %d\n", __FILE__, __LINE__);
	int		lstsize;

	lstsize = 1;
	// while ((lst->next) != NULL)
	printf("%s, %d\n", __FILE__, __LINE__);
	while (lst)
	{
		lstsize++;
		lst = lst->next;
		printf("%s, %d\n", __FILE__, __LINE__);
	}
	printf("%s, %d\n", __FILE__, __LINE__);
	return (lstsize);
}
