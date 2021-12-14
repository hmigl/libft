/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:25:40 by hmigl             #+#    #+#             */
/*   Updated: 2021/12/14 14:25:42 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
 * Fills the first n bytes of
 * the memory area pointed to by s
 * with the byte c
 */
void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;

	str = (char *) s;
	while (n--)
		*str++ = (char) c;
	return (s);
}
