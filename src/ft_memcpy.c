/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:25:13 by hmigl             #+#    #+#             */
/*   Updated: 2022/01/06 11:21:26 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*to;
	char	*from;

	if (!dest && !src)
		return (dest);
	to = (char *) dest;
	from = (char *) src;
	while (n--)
		*to++ = *from++;
	return (dest);
}
