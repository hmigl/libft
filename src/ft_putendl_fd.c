#include "../libft.h"

/*
 * Outputs the string 's'
 * to the given fd, followd by a '\n'
 */
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
