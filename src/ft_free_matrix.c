#include "../libft.h"

void	ft_free_matrix(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i] != NULL)
	{
		free(matrix[i]);
		++i;
	}
	free(matrix);
	return ;
}
