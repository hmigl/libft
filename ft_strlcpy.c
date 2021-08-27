#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	if (!src || !dst)
		return (0);
	len = ft_strlen(src);
	i = 0;
	if (size)
	{
		while (src[i] && i < size - 1)
			i++;
		ft_memcpy(dst, src, i);
		dst[i] = '\0';
	}
	return (len);
}
