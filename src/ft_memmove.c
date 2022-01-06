/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:25:21 by hmigl             #+#    #+#             */
/*   Updated: 2022/01/06 11:21:32 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*to;
	char	*from;

	if (!dst && !src)
		return (NULL);
	to = (char *) dst;
	from = (char *) src;
	if (src < dst)
	{
		while (n--)
			to[n] = from[n];
		return (dst);
	}
	ft_memcpy(to, from, n);
	return (dst);
}
