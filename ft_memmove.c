#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*dd;
	const char	*s;
	const char	*ss;

	d = dst;
	s = src;

	if (!dst && !src)
		return (NULL);
	if (d < s)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		ss = (char *)s + (len - 1);
		dd = d + (len - 1);
		while (len--)
			*dd-- = *ss--;
	}
	return (dst);
}
