#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(dst);
	i = len;
	if (len >= size)
		return (size + ft_strlen(src));
	while (src[i - len] && i + 1 < size)
	{
		dst[i] = src[i - len];
		i++;
	}
	dst[i] = '\0';
	return (len + ft_strlen(src));
}
