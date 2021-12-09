#include "../libft.h"

/*
 * Copies up to 'size - 1' chars from the
 * NUL-terminated string src to dst, NUL-terminating
 * the result
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(src);
	i = 0;
	if (size)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}