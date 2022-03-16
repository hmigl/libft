/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:23:25 by hmigl             #+#    #+#             */
/*   Updated: 2022/01/11 08:32:11 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	nof_bytes;
	void	*ptr;

	nof_bytes = nmemb * size;
	ptr = malloc(nof_bytes);
	if (!ptr || nof_bytes > 2147483647)
		return (NULL);
	ft_bzero(ptr, nof_bytes);
	return (ptr);
}
