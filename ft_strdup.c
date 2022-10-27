/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:02:52 by lda-cunh          #+#    #+#             */
/*   Updated: 2022/10/27 17:45:59 by lda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		len;

	len = ft_strlen((char *)s1) + 1;
	s2 = (char *)malloc(sizeof(char) * len);
	if (!s2)
		return (0);
	ft_strlcpy(s2, (char *)s1, len);
	return (s2);
}
