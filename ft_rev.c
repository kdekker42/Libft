/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: kpereira <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/26 15:22:13 by kpereira      #+#    #+#                 */
/*   Updated: 2019/01/26 15:22:13 by kpereira      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_rev(char *str)
{
	size_t		ln;
	size_t		i;
	char		c;

	if (!str)
		return (0);
	ln = ft_strlen(str) - 1;
	i = 0;
	c = 0;
	while (i < ln)
	{
		c = str[i];
		str[i] = str[ln];
		str[ln] = c;
		i++;
		ln--;
	}
	return (str);
}
