#include "libft.h"

static	size_t	ft_minbtwo(size_t n1, size_t n2)
{
	if (n1 < n2)
		return (n1);
	return (n2);
}

/*
 * Allocates (MALLOC()) and returns a substring
 * from the string 's'. It begins at start
 * and its max size is len
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	else
		len = ft_minbtwo(len, ft_strlen(s + start));
	sub = (char *)malloc(len + 1 * sizeof(char));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
