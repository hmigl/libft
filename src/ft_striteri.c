#include "../libft.h"

/*
 * Applies the function f to each char of the string
 * passed as an argument, and passing its index as first argument.
 * Each char is passed by address to f to be modified if necessary
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s && f)
	{
		i = -1;
		while (s[++i])
			f(i, &s[i]);
	}
	return ;
}