/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: kpereira <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/12 14:25:21 by kpereira      #+#    #+#                 */
/*   Updated: 2019/01/12 14:25:25 by kpereira      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;
	int		ln;

	j = 0;
	i = 0;
	ln = ft_strlen(needle);
	if (ln == 0)
		return ((char *)haystack);
	while (haystack[i] != 0 && len > i)
	{
		if (j != 0 && needle[j] != haystack[i])
		{
			i = i - j;
			j = 0;
		}
		else if (needle[j] == haystack[i])
		{
			j++;
			if (j == ln)
				return ((char *)&haystack[i - ln + 1]);
		}
		i++;
	}
	return (0);
}
