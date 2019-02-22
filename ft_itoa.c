/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: kpereira <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/17 16:39:27 by kpereira      #+#    #+#                 */
/*   Updated: 2019/01/17 16:39:27 by kpereira      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		ft_return_nbrs(int *nb)
{
	int		tmp;

	if (*nb >= 10)
	{
		tmp = *nb;
		*nb /= 10;
		return ((tmp % 10) + '0');
	}
	else
		return (*nb + '0');
}

static void		write_array(char *a, int *nb, int n, int ln)
{
	int		i;
	char	**str;

	i = ln - 1;
	str = &a;
	if (n > 0)
	{
		while (i >= 0)
		{
			str[0][i] = ft_return_nbrs(nb);
			i--;
		}
	}
	else
	{
		(*str)[0] = '-';
		*nb *= -1;
		while (i > 0)
		{
			str[0][i] = ft_return_nbrs(nb);
			i--;
		}
	}
	str[0][ln] = 0;
}

static void		min_int(char *a)
{
	a[0] = '-';
	a[1] = '2';
	a[2] = '1';
	a[3] = '4';
	a[4] = '7';
	a[5] = '4';
	a[6] = '8';
	a[7] = '3';
	a[8] = '6';
	a[9] = '4';
	a[10] = '8';
	a[11] = '\0';
}

char			*ft_itoa(int n)
{
	char	*a;
	int		ln;
	int		*nb;
	int		x;

	nb = &n;
	ln = ft_nb_size(n);
	x = 1;
	if (nb < 0)
		x = 2;
	a = (char *)malloc(sizeof(char) * (ln + x));
	if (a == 0)
		return (0);
	else if (n == -2147483648)
		min_int(a);
	else if (n == 0)
	{
		a[0] = '0';
		a[1] = 0;
	}
	else
		write_array(a, nb, n, ln);
	return (a);
}
