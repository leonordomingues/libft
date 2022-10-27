/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:07:26 by lda-cunh          #+#    #+#             */
/*   Updated: 2022/10/27 16:21:28 by lda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{	
	unsigned int	i;

	i = ft_strlen((char *)src);
	if (dstsize != 0)
	{
		while (dstsize-- > 1 && *src != '\0')
			*dst++ = *src++;
		*dst = '\0';
	}
	return (i);
}

/*int	main()
{
	char src[] = "ola";
	char dst[] = "adeus";
	printf("%lu\n", ft_strlcpy(dst, src, 6));
	printf("%lu\n", strlcpy(dst, src, 6));
}*/
