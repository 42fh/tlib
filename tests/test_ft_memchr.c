/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:18:06 by fheld             #+#    #+#             */
/*   Updated: 2022/12/06 14:22:54 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "Libft_copy/libft.h"
#include "test_libft.h"

static int	instance(int c, int n)
{
	char str[11] = "aabbcdefga";

	if (ft_memchr(str, c, n) != memchr(str, c, n))
	{
		printf("disagreement memchr(%s,%d,%d)\n",str, c, n);
		printf("adr: %p\n", str);
		printf("ft: %p\n", ft_memchr(str, c, n));
		printf("sy: %p\n", memchr(str, c, n));
		return (0);
	}
	return (1);
}

static int	instance2(void)
{
	int c;
	int n;
	char str[100]; 

	c = (int)random();
	n = (int)random() % 100;
	if (n < 0)
		n = n + 100;
	ft_memrset(str, NULL, 100);

	if (ft_memchr(str, c, n) == memchr(str, c, n))
		test_ok();
	else
	{
		printf("disagreement memchr(%s,%d,%d)\n",str, c, n);
		printf("adr: %p\n", str);
		printf("ft: %p\n", ft_memchr(str, c, n));
		printf("sy: %p\n", memchr(str, c, n));
		return (0);
	}
	return (1);
}

int	test_ft_memchr(void)
{
	printf("memchr:\n");
	int	n;

	n = 0;
	while (n <= 11)
	{
		instance('a', n);
		n++;
	}
		n = 0;
	while (n <= 11)
	{
		instance('b', n);
		n++;
	}
	n = 0;
	while (n <= 11)
	{
		instance('\0', n);
		n++;
	}
	n = 0;
	while (n <= 11)
	{
		instance('X', n);
		n++;
	}
	n = 0;
	while (n < 200)
	{
		instance2();
		n++;
	}
	printf("\n\n");
}