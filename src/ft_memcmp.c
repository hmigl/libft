#include "../libft.h"

/*
 * Compares the first n bytes (each interpreted as
 * unsigned char) of memory areas s1 and s2.
 * Return value: an integer less than, equal to, or
 * greater than zero
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*mem_ar1;
	unsigned char	*mem_ar2;

	mem_ar1 = (unsigned char *) s1;
	mem_ar2 = (unsigned char *) s2;
	while (n--)
	{
		if (*mem_ar1 != *mem_ar2)
			return (*mem_ar1 - *mem_ar2);
		mem_ar1++;
		mem_ar2++;
	}
	return (0);
}
