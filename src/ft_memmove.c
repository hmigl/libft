#include "libft.h"

/*
 * Copies n bytes from memory area src to memory area dst.
 * The two strings may overlap. The copy is always done
 * in a non-destructive manner
 */
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*to;
	char	*from;

	if (!dst && !src)
		return (NULL);
	to = (char *) dst;
	from = (char *) src;
	if (src < dst)
	{
		while (n--)
			to[n] = from[n];
		return (dst);
	}
	ft_memcpy(to, from, n);
	return (dst);
}
