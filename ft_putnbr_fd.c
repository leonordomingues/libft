#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n >= INT_MIN && n <= INT_MAX)
	{
		if (n == INT_MIN)
		{
			ft_putchar_fd('-', fd);
			ft_putchar_fd(2, fd);
			ft_putnbr_fd(147483648, fd);
		}
		else if (n < 0)
		{
			ft_putchar_fd('-', fd);
			ft_putnbr-fd(-n, fd);
		}
		else if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
		else
			ft_putchar(nb + '0', fd);
	}
}
