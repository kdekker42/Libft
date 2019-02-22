/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kpereira <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 12:00:26 by kpereira      #+#    #+#                 */
/*   Updated: 2019/01/14 12:00:26 by kpereira      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	s;
	size_t	d;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	i = 0;
	if (size < d)
		return (s + size);
	while (src[i] != 0 && (i + d) < size - 1)
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = 0;
	return (d + s);
}
