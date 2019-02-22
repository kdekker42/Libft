/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kpereira <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/16 16:36:36 by kpereira      #+#    #+#                 */
/*   Updated: 2019/01/22 15:38:04 by kpereira      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	if (s != 0)
	{
		ft_putstr(s);
		ft_putchar('\n');
	}
}
