/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: kpereira <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 15:59:07 by kpereira      #+#    #+#                 */
/*   Updated: 2019/01/11 15:59:09 by kpereira      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		nb;
	int		is_neg;

	i = 0;
	is_neg = 1;
	nb = 0;
	while (str[i] == '\f' || str[i] == '\v' || str[i] == '\r'
		|| str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		i++;
		is_neg = -1;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	return (nb * is_neg);
}
