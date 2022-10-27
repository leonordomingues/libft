/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:11:43 by lda-cunh          #+#    #+#             */
/*   Updated: 2022/10/27 17:46:56 by lda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(long num)
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
	long	i;
	int		count;
	char	*str;

	i = n;
	count = intlen(i);
	str = (char *)malloc(sizeof(char) * count + 1);
	if (!str)
		return (NULL);
	if (i < 0)
	{
		str[0] = '-';
		i *= -1;
	}
	else if (i == 0)
		str[0] = '0';
	str[count] = '\0';
	while (i > 0)
	{
		str[--count] = i % 10 + '0';
		i /= 10;
	}
	return (str);
}

/*int	main()
{
	int	n = 0;
	char	*str = ft_itoa(n);
	printf("%s\n", str);
}*/
