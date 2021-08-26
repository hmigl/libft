#include "libft.h"

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
