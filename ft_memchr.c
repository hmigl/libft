#include "libft.h"

/*
 * Scans the initialn bytes of the memory area
 * pointed to by s for the first instance of c
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *) s;
	while (n--)
	{
		if (*str == (unsigned char) c)
			return ((void *) str);
		str++;
	}
	return (NULL);
}
