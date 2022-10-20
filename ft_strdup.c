#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = (char *)malloc(ft_strlen(s1) * sizeof(char));
	ft_strlcpy(s2, s1, ft_strlen(s1));
	if (!s2)
		return (0);
	return (s2);
}
