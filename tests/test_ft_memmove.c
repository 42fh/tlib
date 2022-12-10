/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:18:22 by fheld             #+#    #+#             */
/*   Updated: 2022/12/06 17:38:27 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "Libft_copy/libft.h"
#include "test_libft.h"

static int	sample(int d, int s, int n)
{
	int		r;
	char	*p;
	char 	area1[27] = "abcdefghijklmnopqrstuvwxyz";
	char 	area2[27] = "abcdefghijklmnopqrstuvwxyz";

	r = 1;
	p = ft_memmove(area1 + d, area1 + s, n);
	memmove(area2 + d, area2 + s, n);
	if (p != area1 + d)
	{
		printf("ft_memmove return mismatch\n");
		r = 0;
	}
	if (memcmp(area1 + d, area2 + d, n) != 0)
	{
		printf("ft_memmove copied differently than memmove:\n");
		printf("d = %d, n = %d\n", d, n);
		printf("area1: %s\n", area1);
		printf("area2: %s\n", area2);
		r = 0;
	}
	if (r == 1)
		test_ok();
	return (r);
}

int	test_ft_memmove(void)
{
	printf("memmove:\n");
	int i;

	sample(0, 0, 0);
	sample(0, 0, 9);
	sample(0, 5, 9);
	sample(5, 0, 9);
	sample(5, 5, 9);
	sample(7, 3, 0);

	i = 0;
	while (i < 15)
	{
		sample(3, 7, i);
		i++;
	}

	i = 0;
	while (i < 15)
	{
		sample(7, 3, i);
		i++;
	}


	printf("\n\n");
	return (1);
}