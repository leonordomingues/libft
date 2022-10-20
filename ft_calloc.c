#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (!ptr)
		return(0);
	ft_zero(ptr, (count * size));
	return (ptr);
}
	
