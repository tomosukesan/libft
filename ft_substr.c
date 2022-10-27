/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:05:23 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/27 18:26:20 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	s_len;

	if (s == NULL)
		s_len = 0;
	else
		s_len = ft_strlen(s);
	if (start >= s_len || len == 0)
	{
		result = calloc(1, sizeof(char));
		return (result);
	}
	if (s_len < len)
		len = s_len;
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, &(s[start]), len + 1);
	return (result);
}
