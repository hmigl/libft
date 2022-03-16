/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:26:02 by hmigl             #+#    #+#             */
/*   Updated: 2022/01/11 08:33:07 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wdscnt(char const *s, char c);
static size_t	ft_elsize(const char *s, char c);
static char		*ft_wdfactory(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	wds;
	size_t	i;

	if (!s || !*s)
		return (NULL);
	wds = ft_wdscnt(s, c);
	array = (char **)malloc((wds + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	i = -1;
	while (++i < wds)
	{
		while (*s && *s == c)
			s++;
		array[i] = ft_wdfactory(s, c);
		if (!array)
		{
			ft_free_matrix(array);
			return (NULL);
		}
		s += ft_elsize(s, c) + 1;
	}
	array[i] = NULL;
	return (array);
}

static size_t	ft_wdscnt(char const *s, char c)
{
	size_t	wc;
	size_t	iswd;

	wc = 0;
	iswd = 1;
	while (*s)
	{
		if (iswd && *s != c)
		{
			iswd = 0;
			wc++;
		}
		else if (*s == c)
			iswd = 1;
		++s;
	}
	return (wc);
}

static size_t	ft_elsize(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*ft_wdfactory(char const *s, char c)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = ft_elsize(s, c);
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	j = 0;
	while (i-- && s[j] != c)
	{
		str[j] = s[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
