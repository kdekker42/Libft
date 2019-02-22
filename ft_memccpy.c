/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kpereira <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 20:40:06 by kpereira      #+#    #+#                 */
/*   Updated: 2019/01/14 20:40:09 by kpereira      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n > i)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
			return (&dst[i + 1]);
		i++;
	}
	return (0);
}
