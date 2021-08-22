#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*to;
	char	*from;

	if (!dest && !src)
		return (dest);
	to = (char *) dest;
	from = (char *) src;
	while (n--)
		*to++ = *from++;
	return (dest);
}
