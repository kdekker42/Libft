/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kpereira <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/12 12:37:12 by kpereira      #+#    #+#                 */
/*   Updated: 2019/01/12 12:37:13 by kpereira      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	int		len;

	j = 0;
	i = 0;
	len = ft_strlen(needle);
	if (len == 0)
		return ((char *)haystack);
	while (haystack[i] != 0)
	{
		if (j != 0 && needle[j] != haystack[i])
		{
			i = i - j;
			j = 0;
		}
		else if (needle[j] == haystack[i])
		{
			j++;
			if (j == len)
				return ((char *)&haystack[i - len + 1]);
		}
		i++;
	}
	return (0);
}
