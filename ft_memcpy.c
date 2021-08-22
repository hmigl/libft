#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest_new;
	const char	*src_new;

	if (!dest && !src)
		return (dest);
	dest_new = dest;
	src_new = src;
	while (n--)
		*dest_new++ = *src_new++;
	return (dest);
}
