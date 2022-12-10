/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:18:18 by fheld             #+#    #+#             */
/*   Updated: 2022/12/08 14:37:11 by fheld            ###   ########.fr       */
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
	"bcdefg000000000000000hijk",
	"bcdefghijX",
	"abcdefg",
	"cdefghij",
};

static int	instance(char *s, int n)
{
	int		r;
	char	d1[31] = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
	char	d2[31] = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
	char	*p;

	r = 1;
	p = ft_memcpy(d1, s, n);
	memcpy(d2, s, n);

	if (p != d1)
	{
		printf("\nft_memcpy return mismatch: %p %p\n", p, d1);
		r = 0;
	}
	if (memcmp(d1,d2, 31) != 0)
	{
		printf("\nd1 = %s, d2 = %s", d1, d2);
		r = 0;
	}
	if (r == 1)
		test_ok();
	return (1);
}

int	test_ft_memcpy(void)
{
	printf("memcpy:\n");
	int		i;
	int		n;
	char	s[31];

	i = 0;
	while (i < 6)
	{
		n = 0;
		while (n < strlen(strarr[i]))
		{
			instance(strarr[i], n);
			n++;
		}
		i++;
	}
	i = 0;
	while (i < 180)
	{
		ft_memrset(s, NULL, 31);
		n = random() % 31;
		if (n < 0)
			n = n + 31;
		instance(s, n);
		i++;
	}
	if (ft_memcpy(s, NULL, 0) != memcpy(s, NULL, 0))
		printf("disagreement (%p, NULL, 0)\n", s);
	if (ft_memcpy(NULL, NULL, 0) != memcpy(NULL, NULL, 0))
		printf("disagreement (NULL, NULL, 0)\n");
	if (ft_memcpy(NULL, s, 0) != memcpy(NULL, s, 0))
		printf("disagreement (NULL, %p, 0)\n", s);
	printf("\n\n");
	return (0);
}