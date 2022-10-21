/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:05:23 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/21 21:25:27 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*t;
	size_t	s_len;

	if (s == NULL)
		s_len = 0;
	else
		s_len = ft_strlen(s);
	if (start >= s_len || len == 0)
	{
		t = malloc(sizeof(char));
		if (t == NULL)
			return (NULL);
		t[0] = '\0';
		return (t);
	}
	if (s_len < len)
		len = s_len;
	t = malloc(sizeof(char) * (len + 1));
	if (t == NULL || &(s[start]) == NULL)
		return (NULL);
	ft_strlcpy(t, &(s[start]), len + 1);
	return (t);
}
