/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:25:06 by hmigl             #+#    #+#             */
/*   Updated: 2022/01/06 11:21:18 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*mem_ar1;
	unsigned char	*mem_ar2;

	mem_ar1 = (unsigned char *) s1;
	mem_ar2 = (unsigned char *) s2;
	while (n--)
	{
		if (*mem_ar1 != *mem_ar2)
			return (*mem_ar1 - *mem_ar2);
		mem_ar1++;
		mem_ar2++;
	}
	return (0);
}
