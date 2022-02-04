/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 09:36:08 by hmigl             #+#    #+#             */
/*   Updated: 2022/02/04 09:51:54 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_isnumber(char *number)
{
	int	num_size;
	int	i;

	num_size = ft_strlen(number);
	i = 1;
	if ((number[0] != '-' && number[0] != '+') && !ft_isdigit(number[0]))
		return (0);
	while (i < num_size)
	{
		if (!ft_isdigit(number[i]))
			return (0);
		++i;
	}
	return (1);
}
