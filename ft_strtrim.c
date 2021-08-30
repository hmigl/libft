#include "libft.h"

/*
 * Allocates (MALLOC()) and returns a copy
 * of 's1' with the chars specified in 'set'
 * removed from the beginning and the end of the string
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[end]) && end)
		end--;
	str = ft_substr(s1, 0, end + 1);
	return (str);
}
