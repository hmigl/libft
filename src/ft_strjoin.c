/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:26:20 by hmigl             #+#    #+#             */
/*   Updated: 2022/01/06 11:22:57 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(char *s1, char const *s2)
{
	char	*new;
	size_t	j;
	size_t	i;

	new = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) + 1 * sizeof(char));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	i = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		++i;
	}
	j = 0;
	while (s2[j])
	{
		new[i + j] = s2[j];
		++j;
	}
	new[i + j] = '\0';
	free(s1);
	return (new);
}
