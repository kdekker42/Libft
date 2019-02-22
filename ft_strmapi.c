/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kpereira <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/15 19:18:50 by kpereira      #+#    #+#                 */
/*   Updated: 2019/01/22 15:44:10 by kpereira      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
			str[i] = f(i, s[i]);
			i++;
		}
		str[i] = 0;
		return (str);
	}
	return (0);
}
