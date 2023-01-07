/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:10:59 by lda-cunh          #+#    #+#             */
/*   Updated: 2023/01/07 20:08:45 by lda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;
	int		i;

	i = 0;
	if (!s)
		return (0);
	if ((unsigned int)ft_strlen((char *)s) < start)
		return (ft_strdup(""));
	if ((size_t)ft_strlen((char *)s + start) < len)
		substr = (char *)malloc(ft_strlen((char *)s + start) + 1);
	else
		substr = (char *)malloc(sizeof(char) * len + 1);
	if (!substr)
		return (NULL);
	while (len-- && s[start] != '\0')
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}
/*int	main()
{
	char s[] = "henrique";
	char *substr = ft_substr(s, 3, 9);
	printf("%s\n", substr);
}*/
