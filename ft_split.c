/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:11:56 by lda-cunh          #+#    #+#             */
/*   Updated: 2022/10/27 17:49:17 by lda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strcount(char *s, char c)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			a++;
			while (s[i] != c && s[i] != '\0')
				i++;
			if(s[i] == '\0')
				return (a);
		}
		i++;
	}
	return (a);
}

static void	ft_strncpy(char *s, char *str, char c, int flag)
{
	int	i;

	i = 0;
	while (s[flag] != '\0' && s[flag] == c)
		flag++;
	while (s[flag + i] != c && s[flag + i] != '\0')
	{
		str[i] = s[flag + i];
		i++;
	}
	str[i] = '\0';
}
	
static char	*stralloc(char *s, char c, int *flag)
{
	char	*str;
	int		i;

	str = NULL;
	while (s[*flag] != '\0')
	{
		if (s[*flag] != c)
		{
			i = *flag;
			while (s[*flag] != c && s[*flag] != '\0')
				(*flag)++;
			str = (char *)malloc(sizeof(char) * (*flag) + 1);
			if (!str)
				return (NULL);
			break ;
		}
		(*flag)++;
	}
	ft_strncpy(s, str, c, i);
	return (str);
}

void	freestr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		free(str);
		i++;
	}
	free(str);
}

char	**ft_split(const char *s, char c)
{
	char	**array;
	int		len;
	int		a;
	int		i;

	if (!s || s == NULL)
		return (NULL);
	len = strcount((char *)s, c);
	a = 0;
	i = 0;
	array = (char **)malloc(sizeof(char *) * len + 1);
	if (!array)
		return (NULL);
	array[len] = NULL;
	while (a < len)
	{
		array[a] = stralloc((char *)s, c, &i);
		if (array[a] == NULL)
			freestr(array[a]);
		a++;
	}
	//array[a] = NULL;
	return (array);
}

int	main()
{
	char	s[] = "este split  ";
	char c = ' ';
	char	**split = ft_split(s, ' ');
	int	index = 0;
	while (split[index])
	{
		printf("%s\n", split[index]);
		index++;
	}
}
