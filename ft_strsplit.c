/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsplit.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: kpereira <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/16 18:56:01 by kpereira      #+#    #+#                 */
/*   Updated: 2019/01/16 18:56:02 by kpereira      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		write_array(char **split_str, char c, char *str, int words)
{
	int		i;
	int		y;
	char	word[1000];

	y = 0;
	while (y < words)
	{
		i = 0;
		while (*str == c)
			str++;
		while (str[0] != c && str[0] != 0)
		{
			word[i++] = *str;
			str++;
		}
		word[i] = 0;
		split_str[y] = (char *)malloc(sizeof(char) * (i + 1));
		i = -1;
		while (word[++i] != 0)
			split_str[y][i] = word[i];
		split_str[y][i] = 0;
		y++;
		while (*str == c)
			str++;
	}
}

char			**ft_strsplit(char const *s, char c)
{
	char	**split_str;
	char	*str;
	int		words;
	int		i;

	i = 0;
	if (s && c)
	{
		str = (char *)s;
		words = ft_count_words(str, c);
		if (!s || !c)
			return (0);
		if (!(split_str = (char **)malloc(sizeof(char *) * (words + 1))))
			return (0);
		split_str[words] = 0;
		write_array(split_str, c, str, words);
	}
	else
		split_str = 0;
	return (split_str);
}
