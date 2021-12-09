#include "../libft.h"

/*
 * Applies the function 'f' to each char of the string 's'
 * to create a new string (whith MALLOC()) resulting
 * from successive applications of 'f'
 */
char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	unsigned int	i;
	size_t			slen;
	char			*str;

	if (s && f)
	{
		i = -1;
		slen = ft_strlen(s);
		str = (char *)malloc(slen + 1 * sizeof(char));
		if (!str)
			return (NULL);
		while (++i < slen)
			str[i] = f(i, s[i]);
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
