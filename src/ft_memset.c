#include "../libft.h"

/*
 * Fills the first n bytes of
 * the memory area pointed to by s
 * with the byte c
 */
void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;

	str = (char *) s;
	while (n--)
		*str++ = (char) c;
	return (s);
}
