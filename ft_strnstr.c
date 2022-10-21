/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttachi <ttachi@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 08:58:10 by ttachi            #+#    #+#             */
/*   Updated: 2022/10/21 21:16:45 by ttachi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	count;
	size_t	haystack_len;
	size_t	needle_len;
	size_t	i;

	if (len == 0 && haystack == NULL)
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	count = 0;
	haystack_len = ft_strlen(haystack);
	needle_len = ft_strlen(needle);
	while (count < haystack_len && count < len)
	{
		i = 0;
		while (haystack[count + i] == needle[i])
		{
			i++;
			if (i == needle_len && count + i <= len)
				return ((char *)&haystack[count]);
		}
		count++;
	}
	return (NULL);
}
