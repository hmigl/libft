/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:26:45 by hmigl             #+#    #+#             */
/*   Updated: 2022/01/06 11:23:26 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	unsigned int	i;
	size_t			slen;
	char			*str;

	if (s && f)
	{
		i = -1;
		slen = ft_strlen(s);
		str = (char *)malloc(slen + 1 * sizeof(char));
		if (!str)
			return (NULL);
		while (++i < slen)
			str[i] = f(i, s[i]);
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
