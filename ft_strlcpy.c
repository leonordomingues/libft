#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{	
	int	i;
       
	i = ft_strlen(src);
	if (dstsize != 0)
	{
		while (dstsize-- > 1)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (i);
}

/*int	main()
{
	char src[] = "ola";
	char dst[] = "adeus";
	printf("%lu\n", ft_strlcpy(dst, src, 6));
	printf("%lu\n", strlcpy(dst, src, 6));
}*/
