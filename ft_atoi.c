#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	m;
	int	nb;

	i = 0;
	m = 1;
	nb = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			m = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb * m);
}

/*#include <stdio.h>
int	main()
{
	char str[] = "-6382ad23";
	printf("%d\n", ft_atoi(str));
}*/
