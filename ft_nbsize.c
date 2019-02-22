/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_nbsize.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kpereira <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/26 15:47:40 by kpereira      #+#    #+#                 */
/*   Updated: 2019/01/26 15:47:40 by kpereira      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nb_size(int nb)
{
	int		size;

	size = 0;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		size++;
	while (nb != 0)
	{
		size++;
		nb /= 10;
	}
	return (size);
}
