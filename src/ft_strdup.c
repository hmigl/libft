/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:26:11 by hmigl             #+#    #+#             */
/*   Updated: 2021/12/14 14:26:13 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
 * Returns a pointer to a new string which is a
 * duplicate of string s. Memory is obtained with MALLOC()
 * It returns NULL if insufficient memory was available
 */
char	*ft_strdup(const char *s)
{
	size_t	slen;
	char	*dup;

	slen = ft_strlen(s);
	dup = (char *)malloc((slen + 1) * sizeof(char));
	if (!dup)
	{
		free(dup);
		return (NULL);
	}
	ft_strlcpy(dup, s, slen + 1);
	return (dup);
}
