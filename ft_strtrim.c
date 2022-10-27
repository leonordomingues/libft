#include "libft.h"

static int	char_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}
char	*ft_strtrim(const char *s1, const char *set)
{
	char	*s2;
	int	i;
	int	start;
	int	end;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	start = 0;
	end = ft_strlen((char *)s1);
	while (s1[start] != '\0' && char_set(s1[start], set))
		start++;
	while (end > start && char_set(s1[end - 1], set))
	 	end--;
	s2 = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!s2)
		return (NULL);
	while (start < end)
		s2[i++] = s1[start++];
	s2[i] = '\0';
	return (s2);
}
/*int	main()
{
	char	s1[] = "ABcdAeBA";
	char	set[] = "AB";
	printf("%s\n", ft_strtrim(s1, set));
}*/
