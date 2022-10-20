#include "libft.h"

char	*ft_strmapi(const char *s, char (*f) (unsigned int, char))
{
	int	i;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * ft_strlen(s));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return (str);
}
