#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;
	int	i;

	i = 0;
	substr = (char *)malloc(sizeof(char) * ft_strlen((char *)s + start));
	if (!substr)
		return (NULL);
	while (start < len || s[start] != '\0')
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}
/*int	main()
{
	char s[] = "henrique";
	char *substr = ft_substr(s, 3, 9);
	printf("%s\n", substr);
}*/
