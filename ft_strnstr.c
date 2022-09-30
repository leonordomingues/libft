//#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	if (n == 0)
		return ((char*) h);
	if (len == 0)
		return (0);
	while (i < len && h[i] != '\0' && n[a] != '\0')
	{
		a = 0;
		while (n[a] == h[i])
		{	
			if (n[a] == '\0')
				return ((char *) h + i);
			a++;
			i++;
		}	
		i++;
	}
	return (0);
}

int	main()
{
	char str1[] = "bla bra ba";
	char str2[] = "bra";
	printf("%s\n", ft_strnstr(str1, str2, 9));
	printf("%s\n", strnstr(str1, str2, 9));
}
