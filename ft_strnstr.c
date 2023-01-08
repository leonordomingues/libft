/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:03:13 by lda-cunh          #+#    #+#             */
/*   Updated: 2023/01/08 19:31:56 by lda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		a;
	int		h;

	i = -1;
	if (!ft_strlen((char *)needle))
		return ((char *)haystack);
	while (++i < len && haystack[i] != '\0')
	{
		a = 0;
		if (needle[a] == haystack[i])
		{
			h = i;
			while (needle[a] == haystack[i] && i < len)
			{
				a++;
				i++;
				if (needle[a] == '\0')
					return ((char *)(haystack + h));
			}
			i = h;
		}
	}
	return (NULL);
}

/*int	main()
{
	char str1[] = "MZIRIBMZIRIBMZE123";
	char str2[] = "MZIRIBMZE";
	int a = ft_strlen(str2);
	printf("%s\n", ft_strnstr(str1, str2, a));
	printf("%s\n", strnstr(str1, str2, a));
}*/
