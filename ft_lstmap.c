/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kpereira <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/25 18:39:51 by kpereira      #+#    #+#                 */
/*   Updated: 2019/01/25 18:39:52 by kpereira      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;

	tmp = f(lst);
	if (lst->next)
		tmp->next = ft_lstmap(lst->next, f);
	else
		tmp->next = 0;
	return (tmp);
}
