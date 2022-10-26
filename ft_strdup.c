#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = (char *)malloc(ft_strlen((char *)s1) * sizeof(char) + 1);
	if (!s2)
		return (0);
	ft_strlcpy(s2, s1, ft_strlen((char *)s1));
	return (s2);
}
