#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int	len;

	len = ft_strlen((char *)s1) + 1;
	s2 = (char *)malloc(sizeof(char) * len);
	if (!s2)
		return (0);
	ft_strlcpy(s2, (char *)s1, len);
	return (s2);
}
