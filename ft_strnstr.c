#include "libft.h"

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
	return (0);
}
