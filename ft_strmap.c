/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kpereira <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/15 19:14:36 by kpereira      #+#    #+#                 */
/*   Updated: 2019/01/22 15:43:11 by kpereira      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t		i;
	char		*str;

	i = 0;
	if (s && f)
	{
		str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (str == 0)
			return (0);
		while (i < ft_strlen(s))
		{
			str[i] = f(s[i]);
			i++;
		}
		str[i] = 0;
		return (str);
	}
	return (0);
}
