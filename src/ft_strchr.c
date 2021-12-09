#include "../libft.h"

/*
 * Returns a pointer to the first ocurrence
 * of char c in the string s
 */
char	*ft_strchr(const char *s, int c)
{
	if ((char) c == '\0')
		return ((char *) s + ft_strlen(s));
	while (*s)
	{
		if (*s == (char) c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
