#include "../libft.h"

/*
 * Outputs the string 's' to the
 * given fd
 */
void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write (fd, s, ft_strlen(s));
	return ;
}
