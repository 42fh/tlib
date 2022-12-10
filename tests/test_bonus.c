/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lst_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 16:49:57 by fheld             #+#    #+#             */
/*   Updated: 2022/12/05 11:38:13 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft_copy_bonus/libft.h"
#include "test_libft.h"

//void	ft_lstdelone(t_list *lst, void (*del)(void *));

static void	del(void *p)
{
	printf("applying del on node: %s\n", (char *)p);
}

static void	del2(void *p)
{
	printf("applying del2 on node: %s\n", (char *)p);
	free(p);
}

static void	f(void *p)
{
	printf("%s\n", (char *)p);
}

static	void	*g(void *p)
{
	return(ft_strjoin((char *)p, "joined"));
}

int	test_ft_lst_bonus(void)
{
	t_list	*p;
	t_list	*q;

	p = ft_lstnew("Start");
	ft_lstadd_front(&p, ft_lstnew("Front"));
	ft_lstiter(p, &f);
	printf("End printing p\n");

	q = ft_lstmap(p, &g, &del);
	ft_lstiter(q, &f);
	printf("End printing q\n");

	ft_lstclear(&p, &del);
	ft_lstclear(&q, &del2);
}