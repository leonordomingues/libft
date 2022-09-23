#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	if (n == 0)
		return (h);
	
	while (i < len || h[i] != '\0' || n[a] != '\0')
	{
		if (n[a] ==
