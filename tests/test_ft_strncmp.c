/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:33:26 by fheld             #+#    #+#             */
/*   Updated: 2022/12/06 19:13:33 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "Libft_copy/libft.h"
#include "test_libft.h"
#define SEED 824718840

static int	sample(char *str1, char *str2, int n)
{
	if (strncmp(str1, str2, n) != ft_strncmp(str1, str2, n))
	{
		printf("\ndisagreement strncmp for: %s, %s, %d\n", str1, str2, n);
		printf("strncmp %d ft_strncmp %d\n", \
			strncmp(str1, str2, n), ft_strncmp(str1, str2, n));
		return(0);
	}
	else
		test_ok();
	return (1);
}

int	test_ft_strncmp(void)
{
	printf("strncmp:\n");
	int		i;
	char	*p1;
	char	*p2;

	i = 0;
	srand(SEED);
	while (i < 100)
	{
		p1 = ft_randanstr(NULL, rand() % 70);
		p2 = ft_randanstr(NULL, rand() % 70);
		sample(p1, p2, rand() % 140);
		sample(p1, p1, rand() % 140);
		free(p1);
		free(p2);
		i++;
	}
	sample("", "", 0);
	sample("", "", 10);
	sample("abfdse", "", 10);
	sample("A\x00", "A\xff", 10);
	sample("B\xff", "B\x00", 10);
	sample("ddddddddddddd", "ddddddddddddddddde", INT_MAX);
	sample("abc", "abc", INT_MAX);
	printf("\n\n");
}
