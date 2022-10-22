#include "libft.h"
static int	wordcount(char *s, char c)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			a++;
		i++;
	}
	return (a);
}
static int	wordlen(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c || s[i] != '\0')
		i++;
	return (i);
}
char	**ft_split(const char *s, char c)
{
	char	**array;
	int	len;
	int	a;
	int	i;

	len = wordcount((char *)s, c);
	a = 0;
	i = 0;
	array = (char **)malloc(size(char *) * len + 1);
	while (a < len)
		array[a++] = ft_strlcpy(array[a], s, wordlen(s, c));
	array[a] = '\0';
} 
