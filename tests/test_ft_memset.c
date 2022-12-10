/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:18:26 by fheld             #+#    #+#             */
/*   Updated: 2022/12/06 17:52:11 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "Libft_copy/libft.h"
#include "test_libft.h"

static int	sample(char c, int n)
{
	int		r;
	char	*p;
	char	area1[27] = "abcdefghijklmnopqrstuvwxyz";
	char	area2[27] = "abcdefghijklmnopqrstuvwxyz";

	r = 1;
	p = ft_memset(area1 + 3, c, n);
	memset(area2 + 3, c, n);
	if (p != area1 + 3)
	{
		printf("ft_memset return diagreement\n");
		r = 0;
	}
	if (memcmp(area1, area2, 27) != 0)
	{
		printf("ft_memset area disagreement\n");
		printf("%s\n", area1);
		printf("%s\n", area2);
		r = 0;
	}
	if (r == 1)
		test_ok();
	return (r);
}

int	test_ft_memset(void)
{
	printf("memset:\n");
	ft_memset(NULL, 'c', 0);
	sample('P', 0);
	sample(0, 10);
	sample('-', 5);
	sample(127, 25);
	sample(-128, 25);
	printf("\n\n");
	return (1);
}