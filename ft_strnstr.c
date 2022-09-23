#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	int	i;

	i = 0;
	if (n == 0)
		return (h);
	
	while (h[i] != '\0' 
