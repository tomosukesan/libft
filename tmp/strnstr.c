#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *str = "libft-test-tokyo";
	int	len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		printf("%s\n",strnstr(str, "libft-test-tokyo", i));
	}
	printf("%s\n",strnstr(str, "libft-test-tokyo", 18));
	// printf("ft_strnstr:  %s\n", strnstr(NULL, NULL, 0));//segmentation fault
	// printf("strnstr[1]:  %s\n", strnstr("42tokyo", "kyo", 7));
	// printf("strnstr[2]:  %s\n", strnstr("42tokyo", "kyo", 20));
	// printf("strnstr[3]:  %s\n", strnstr("42tokyo", "kyo", 3));
	// printf("strnstr[4]:  %s\n", strnstr("42tokyo", "kyo", 1));
	// printf("strnstr[5]:  %s\n", strnstr("42tokyo", "kyo", 0));
	// printf("strnstr[6]:  %s\n", strnstr("42tokyo", "", 5));
	// printf("strnstr[6*]: %s\n", strnstr("42tokyo", "", 10));
	// printf("strnstr[7]:  %s\n", strnstr("", "aaa", 5));
	// printf("strnstr[7*]: %s\n", strnstr("", "", 0));				// 空文字
	// printf("strnstr[8]:  %s\n", strnstr("abbbcdefg", "bbc", 20));
	// printf("strnstr[9]:  %s\n", strnstr(NULL, "is", 0));
	// printf("strnstr[10]: %s\n", strnstr(NULL, "", 0));
	// printf("strnstr[11]: %s\n", strnstr("aaabcabcd", "cd", 8));		// null
	// printf("strnstr[12]: %s\n", strnstr("aaabcabcd", "aaabc", 5));	// aaabcabcd
	// printf("strnstr[13]: %s\n", strnstr("fake", NULL, 3));	// segmentation fault
	// printf("ft_strnstr: %s\n", ft_strnstr("42tokyo", NULL, 5));//segmentation
	return (0);
}