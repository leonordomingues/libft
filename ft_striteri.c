#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s);

	if (s != NULL && f != NULL)
	{
		while (i < len)
		{
			(*f) (i, s);
			s++;
			i++;
		}
	}
}
