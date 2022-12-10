/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:22:48 by fheld             #+#    #+#             */
/*   Updated: 2022/12/06 13:20:38 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "Libft_copy/libft.h"

static int	sample(size_t n, size_t s)
{
	void	*p1;
	void	*p2;

	p1 = calloc(n, s);
	p2 = ft_calloc(n, s);
	if ((p1 == 0 && p2 != 0) || (p1 != 0 && p2 == 0))
	{
		printf("\ncalloc disagreement return val, %lu, %lu\n", n, s);
		printf("%p, ft_*: %p\n", p1, p2);
	}
	else
		test_ok();
	if (p1 && p2)
	{
		if (memcmp(p1, p2, n * s) != 0)
		{
			printf("\ncalloc disagreement in written memory, %lu, %lu\n", n, s);
			printf("%p, %p\n", p1, p2);
			printf("memcmp = %d\n", memcmp(p1, p2, n * s));
		}
	}
	else
		test_ok();
	free(p1);
	free(p2);
	return (1);
}

int	test_ft_calloc(void)
{
	printf("calloc: \n");
	sample(0, 0);
	sample(2345, 8);
	sample(2345, 0);
	sample(0, 8);
	//sample(268435455, 8); //take a long time to run
	//sample(268435456, 8); //take a long time to run
	sample(268435456, 268435456);
	printf("\n\n");
	return (1);
}
