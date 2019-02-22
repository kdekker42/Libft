/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kpereira <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 15:03:48 by kpereira      #+#    #+#                 */
/*   Updated: 2019/01/11 15:03:50 by kpereira      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (src[i] != 0 && len > i)
	{
		dst[i] = src[i];
		i++;
	}
	while (len > i)
	{
		dst[i] = 0;
		i++;
	}
	return (dst);
}
