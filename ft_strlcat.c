#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int	a;

	i = ft_strlen(src);
	a = ft_strlen(dst);
	while (dstsize--)
		dst[++a] = *src++;
	if (a < dstsize)
		dst[a] = '\0';
	return (a + i);
}
