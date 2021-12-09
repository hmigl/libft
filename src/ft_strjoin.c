#include "../libft.h"

/*
 * Allocates (w/ MALLOC()) and returns a new string,
 * which is the result of concatenation of the params
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	char	*newstr;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	new = (char *)malloc(len + 1 * sizeof(char));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	newstr = new;
	while (*s1)
		*new++ = *s1++;
	while (*s2)
		*new++ = *s2++;
	*new = '\0';
	return (newstr);
}