#include "../libft.h"

/*
 * Returns a pointer to the last
 * occurence of the char c in the string s
 */
char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	ch;
	size_t	n;

	n = ft_strlen(s);
	str = (char *)s + n;
	ch = (char)c;
	while (n--)
	{
		if (*str == ch)
			return (str);
		str--;
	}
	if (*str == ch)
		return (str);
	return (NULL);
}
