/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks_ext.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:23:30 by hmigl             #+#    #+#             */
/*   Updated: 2022/01/06 11:18:44 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_checks_ext(const char *str, const char *ext)
{
	size_t	str_size;
	size_t	ext_size;

	str_size = ft_strlen(str);
	ext_size = ft_strlen(ext);
	if (ext_size > str_size)
		return (0);
	while (str_size-- && ext_size--)
	{
		if (str[str_size] != ext[ext_size])
			return (0);
	}
	return (1);
}
