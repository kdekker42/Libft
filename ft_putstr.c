/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kpereira <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/16 16:35:04 by kpereira      #+#    #+#                 */
/*   Updated: 2019/01/16 16:35:04 by kpereira      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	int		i;

	i = 0;
	if (s)
	{
		while (s[i] != 0)
		{
			ft_putchar(s[i]);
			i++;
		}
	}
}
