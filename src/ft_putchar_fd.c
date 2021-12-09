#include "../libft.h"

/*
 * Outputs the char 'c'
 * to the given fd
 */
void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
