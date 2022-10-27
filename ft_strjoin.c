#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*s3;
	int	i;
	
	i = 0;
	if (!s1 || !s2)
		return (NULL);
	s3 = (char *)malloc(sizeof(char) * (ft_strlen((char *)s1) + ft_strlen((char *)s2)) + 1);
	if (!s3)
		return (NULL);
	while (*s1 != '\0')
		s3[i++] = *s1++;
	while (*s2 != '\0')
		s3[i++] = *s2++;
	s3[i] = '\0';
	return (s3);
}

/*int	main()
{
	char s1[] = "string ";
	char s2[] = "feita";
	char *s3 = ft_strjoin(s1, s2);
	printf("%s\n", s3);
}*/
