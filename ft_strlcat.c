#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	b;
	size_t	c;

	if (!dst && !dstsize)
		return (0);
	a = ft_strlen(dst);
	c = a;
	b = ft_strlen((char *)src);
	if (a >= dstsize)
		return (dstsize + b);
	while (*src != '\0' && (a + 1) < dstsize)
		dst[a++] = *src++;
	dst[a] = '\0';
	return (c + b);
}
