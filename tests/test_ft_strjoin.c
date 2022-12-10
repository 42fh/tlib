/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:23:34 by fheld             #+#    #+#             */
/*   Updated: 2022/12/06 19:01:18 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft_copy/libft.h"
#include "test_libft.h"

static void	sample(char *s1, char *s2)
{
	char	*p;

	p = ft_strjoin(s1, s2);
	if (p != NULL)
		printf("%s\n", p);
	free(p);
}

int	test_ft_strjoin(void)
{
	sample("", "");
	printf("abc =?= ");
	sample("abc", "");
	printf("123 =?= ");
	sample("", "123");
	printf("abc123 =?= ");
	sample("abc", "123");
	sample(NULL, NULL);
	return (1);
}