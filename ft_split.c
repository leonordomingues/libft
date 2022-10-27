#include "libft.h"

static int	strcount(char *s, char c)
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

static char	*stralloc(char *s, char c, int *flag)
{
	char	*str;
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != c)
				i++;
			str = (char *)malloc(sizeof(char *) * i + 1);
			break;
		}
		i++;
		flag += i;
	}
	if (!str)
		return (NULL);
	return (str);
}

void	freestr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		free(str);
		i++;
	}
	free(str);
}

char	**ft_split(const char *s, char c)
{
	char	**array;
	int	len;
	int	a;
	int	i;

	len = strcount((char *)s, c);
	a = 0;
	i = 0;
	array = (char **)malloc(sizeof(char *) * len + 1);
	if (!array)
		return (NULL);
	while (a < len)
	{
		array[a] = stralloc((char *)s, c, &i);
		ft_strlcpy(array[a], s, ft_strlen(array[a]));
		if (array[a] == NULL)
			freestr(array[a]);
		a++;
	}
	array[a] = NULL;
	return (array);
}

/*int	main()
{
	char	s[] = "odeio o split";
	char c = ' ';
	while (
		printf("%s\n", ft_split(s, c));
}*/
