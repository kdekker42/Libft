/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_hex.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kpereira <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/28 09:47:46 by kpereira      #+#    #+#                 */
/*   Updated: 2019/03/03 14:30:57 by kpereira      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_write(unsigned int nb)
{
	char	*hex;
	char	c;

	c = 0;
	hex = "0123456789abcdef";
	if (nb != 0)
	{
		ft_write(nb / 16);
		c = hex[nb % 16];
		write(1, &c, 1);
	}

}

int		ft_puthex(unsigned int nb)
{
	if (nb == 0)
		write(1, "0", 1);
	else
		ft_write(nb);
	return (0);
}
