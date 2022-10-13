#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	a;
	int	h;

	i = 0;
	if (needle[0] == '\0')
		return ((char*) haystack);
	while (i++ < len || haystack[i] != '\0')
	{
		a = 0;
		if(needle[a] == haystack[i])
		{	
			h = i;
			while(needle[a++] == haystack[h++])
			{	
				if(needle[a + 1] == '\0')
					return ((char *) haystack + i);
			}
		}
	}
	return (0);
}

/*int	main()
{
	char str1[] = "bla bra ba";
	char str2[] = "bra";
	printf("%s\n", ft_strnstr(str1, str2, 9));
	printf("%s\n", strnstr(str1, str2, 9));
}*/
