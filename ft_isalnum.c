#include "libft.h"

/*
 * Checks for an alphanumeric character
 */
int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
