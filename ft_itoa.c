#include "libft.h"

char	*ft_itoa(int n)
{
	int	i;
	char	*str;

	i = 0;
	if (n < 0)
		str[i] = '-';

