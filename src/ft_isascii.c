/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmigl <hmigl@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:23:48 by hmigl             #+#    #+#             */
/*   Updated: 2021/12/14 14:23:49 by hmigl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* Checks whether c is a 7-bit unsigned
* char value that fits into the ASCII table
*/
int	ft_isascii(int c)
{
	return (c >= 0 && c < 128);
}
