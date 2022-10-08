#ifndef _LIBFT_H_
# define _LIBFT_H_

#include <stdlib.h>
#include <unistd.h>

typedef	unsigned long	size_t;

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *str);
void 	*ft_memset(void *buf, int ch, size_t n);

#endif