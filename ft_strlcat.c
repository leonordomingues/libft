#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	a;

	a = ft_strlen(dst);
	while (*src && (a + 1) < dstsize)
		dst[++a] = *src++;
	dst[a] = '\0';
	if (a < dstsize)
		return (a);
	return (dstsize + ft_strlen((char *)src));
}
