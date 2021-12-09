#include "../libft.h"

static int	ft_isspace(int c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

/*
 * Converts the initial portion of
 * the string pointed to by nptr
 * to int representation and returns
 * the int
 */
int	ft_atoi(const char *nptr)
{
	int	res;
	int	sig;

	res = 0;
	sig = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
		if (*nptr++ == '-')
			sig *= -1;
	while (ft_isdigit(*nptr))
		res = (*nptr++ - '0') + (res * 10);
	return (res * sig);
}
