/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:26:59 by hmigl             #+#    #+#             */
/*   Updated: 2022/01/06 11:23:37 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		lit_size;

	lit_size = ft_strlen(little);
	if (!*little)
		return ((char *) big);
	while (lit_size <= len-- && *big)
	{
		if (!ft_strncmp(big, little, lit_size))
			return ((char *) big);
		big++;
	}
	return (NULL);
}
