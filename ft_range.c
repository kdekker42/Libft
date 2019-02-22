/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: kpereira <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/09 17:24:46 by kpereira      #+#    #+#                 */
/*   Updated: 2019/01/10 15:35:54 by kpereira      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_range(int min, int max)
{
	int		x;
	int		*iarr;
	int		i;

	i = 0;
	x = max - min;
	if (x <= 0)
		return (0);
	iarr = malloc(sizeof(int) * x);
	while (min < max)
	{
		iarr[i] = min;
		i++;
		min++;
	}
	return (iarr);
}
