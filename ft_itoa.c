#include "libft.h"

static int	intlen(int num)
{
	int	i;

	i = 0;
	if (num < 0)
	{
		num *= -1;
		i++;
	}
	else if (num == 0)
		return (1);
	while (num > 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int	i;
	int	count;
	char	*str;

	count = intlen(n);
	str = (char *)malloc(sizeof(char) * count + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	else if(n == 0)
		str[0] = '0';
	str[count] = '\0';
	while (n > 0)
	{
		str[--count] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}

/*int	main()
{
	int	n = 0;
	char	*str = ft_itoa(n);
	printf("%s\n", str);
}*/
