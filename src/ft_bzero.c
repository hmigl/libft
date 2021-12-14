/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:23:17 by hmigl             #+#    #+#             */
/*   Updated: 2021/12/14 14:23:22 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
 * Erases the data in the n bytes
 * of the memory starting at the location
 * pointed to by s, by writing zeros
 * to that area
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
