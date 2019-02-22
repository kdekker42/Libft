/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memalloc.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: kpereira <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 16:21:43 by kpereira      #+#    #+#                 */
/*   Updated: 2019/01/14 16:21:44 by kpereira      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*rt;
	size_t	i;
	char	*ptr;

	i = 0;
	rt = (char *)malloc(sizeof(char) * size);
	if (rt == 0)
		return (0);
	ptr = rt;
	while (i < size)
	{
		ptr[i] = 0;
		i++;
	}
	return (rt);
}
