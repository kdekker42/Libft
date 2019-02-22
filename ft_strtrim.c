/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kpereira <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/15 20:41:27 by kpereira      #+#    #+#                 */
/*   Updated: 2019/01/15 20:41:27 by kpereira      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		j;
	int		x;

	i = 0;
	j = 0;
	x = 0;
	str = 0;
	if (s)
	{
		j = ft_strlen(s) - 1;
		while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i] != 0)
			i++;
		if (i > j)
			return (ft_strnew(0));
		while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
			j--;
		if (!(str = (char *)malloc((sizeof(char) * (j - i) + 1))))
			return (0);
		while (i <= j)
			str[x++] = (char)s[i++];
		str[x] = 0;
	}
	return (str);
}
