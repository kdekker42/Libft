/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: kpereira <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/17 16:29:50 by kpereira      #+#    #+#                 */
/*   Updated: 2019/01/17 16:29:51 by kpereira      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int		i;

	i = 0;
	if (fd != -1 && s)
	{
		while (s[i] != 0)
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
	}
}
