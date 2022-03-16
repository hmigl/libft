/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:44:41 by hmigl             #+#    #+#             */
/*   Updated: 2022/02/04 11:04:08 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

long long int	ft_atol(const char *nptr)
{
	long long int	res;
	int				sign;
	int				i;

	res = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(*nptr))
		++nptr;
	if (nptr[i] == '-' && ++i)
		sign = -1;
	else if (nptr[i] == '+')
		++i;
	while (ft_isdigit(nptr[i]))
		res = (res * 10) + (nptr[i++] - '0');
	return (res * sign);
}
