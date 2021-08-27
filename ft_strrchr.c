#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = s + ft_strlen(s);
	if ((char) c == '\0')
		return ((char *) last);
	while (*last-- != *s)
		if ((char) c == *last)
			return ((char *) last);
	return (NULL);
}
