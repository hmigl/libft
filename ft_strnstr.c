#include "libft.h"

/*
 * Locates the first occurrence of the null-terminated
 * string little in the string big, where not more than len
 * characters are searched. If little is an empty string, big
 * is returned. If little occurs nowhere, NULL is returned
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		lit_size;

	lit_size = ft_strlen(little);
	if (!*little)
		return ((char *) big);
	while (lit_size <= len-- && *big)
	{
		if (!ft_strncmp(big, little, lit_size))
			return ((char *) big);
		big++;
	}
	return (NULL);
}
