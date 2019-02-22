/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kpereira <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/15 18:21:10 by kpereira      #+#    #+#                 */
/*   Updated: 2019/01/22 15:45:48 by kpereira      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char		*str;
	size_t		i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == 0)
		return (0);
	while (i < size)
	{
		str[i] = 0;
		i++;
	}
	str[i] = 0;
	return (str);
}
