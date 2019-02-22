/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kpereira <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/14 13:37:17 by kpereira      #+#    #+#                 */
/*   Updated: 2019/01/14 13:37:19 by kpereira      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	while (*s != 0)
	{
		s++;
	}
	while (i >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
		i--;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}
