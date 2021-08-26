#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	nof_bytes;
	void	*ptr;

	nof_bytes = nmemb * size;
	ptr = malloc(nof_bytes);
	if (!ptr || nof_bytes > INT_MAX)
		return (NULL);
	ft_bzero(ptr, nof_bytes);
	return (ptr);
}
