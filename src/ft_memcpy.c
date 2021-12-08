#include "libft.h"

/*
 * Copies n bytes from memory
 * area src to memory area dest.
 * Memory must not overlap (L -> R)
 */
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
