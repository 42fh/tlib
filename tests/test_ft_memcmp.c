/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:18:15 by fheld             #+#    #+#             */
/*   Updated: 2022/12/06 16:51:34 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Libft_copy/libft.h"
#include "test_libft.h"

static int	min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

static char	*strarr[] = 
{
	"",
	"bcdefghijk",
	"bcdefghijk",
	"bcdefghijX",
	"abcdefg",
	"cdefghij",
};

static int	instance(char *s1, char *s2, int n)
{
	if (memcmp(s1, s2, n) < 0 && ft_memcmp(s1, s2, n) >= 0 || \
		memcmp(s1, s2, n) == 0 && ft_memcmp(s1, s2, n) != 0 || \
		memcmp(s1, s2, n) > 0 && ft_memcmp(s1, s2, n) <= 0)
	{
		printf("disagreement memcmp(%s, %s, %d)\n", s1, s2, n);
		printf("memcmp: %d\n", memcmp(s1, s2, n));
		printf("ft_memcmp: %d\n", ft_memcmp(s1, s2, n));
		return (0);
	}
	else
		test_ok();
	return (1);
}

int	test_ft_memcmp(void)
{
	char	m1[5];
	char	m2[5];
	char	m3[100];
	int		i;
	int		j;
	int		n;

	printf("memcmp:\n");
	i = 0;
	j = 0;
	while (i < 6)
	{
		while (j < 6)
		{
			n = 0;
			while (n < min(strlen(strarr[i]), strlen(strarr[j])) + 1)
			{
				instance(strarr[i], strarr[j], n);
				n++;
			}
			j++;
		}
		j = 0;
		i++;
	}
	n = 0;
	while (n < 100)
	{
		ft_memrset(m1, NULL, 5);
		ft_memrset(m2, NULL, 5);
		instance(m1, m2, 5);
		n++;
	}
	n = 0;
	while (n < 100)
	{
		ft_memrset(m3, NULL, 100);
		instance(m1, m2, 100);
		n++;
	}
	printf("\n\n");
	return (0);
}