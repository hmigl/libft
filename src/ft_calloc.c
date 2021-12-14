/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:23:25 by hmigl             #+#    #+#             */
/*   Updated: 2021/12/14 14:23:27 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
 * Allocates memory for an array of
 * nmemb elements of size bytes each
 * and returns a ponter to the allocated memory.
 * The memory is set to zero. If (nmemb == 0 || size == 0)
 * or if nmeb * size > INT_MAX CALLOC() returns NULL
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	nof_bytes;
	void	*ptr;

	nof_bytes = nmemb * size;
	ptr = malloc(nof_bytes);
	if (!ptr || nof_bytes > INT_MAX)
		return (NULL);
	ft_bzero(ptr, nof_bytes);
	return (ptr);
}
