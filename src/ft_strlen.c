#include "../libft.h"

/*
 * Calculates the lenght of
 * string s
 */
size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
