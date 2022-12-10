/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:50:47 by fheld             #+#    #+#             */
/*   Updated: 2022/12/06 19:33:05 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>
#include "Libft_copy/libft.h"
#include "test_libft.h"

static int	sample(const char *big, const char *little, size_t n)
{
	if (strnstr(big, little, n) != ft_strnstr(big, little, n))
	{
		printf("disagreement strnstr\n");
		printf("%s, %s, %ld\n", big, little, n);
		printf("%p, %p\n", strnstr(big, little, n), ft_strnstr(big, little, n));
		return (0);
	}
	else
		test_ok();
	return (1);
}

int	test_ft_strnstr(void)
{
	printf("strnstr:\n");
	int	i;
	sample("abcdefg", "bc", 2);
	sample("", "", 0);
	sample("", "abc", 0);
	sample("", "", 10);
	sample("abcdefgh", "", 10);
	sample("abcdefgh", "def", 10);
	sample("abcdefgh", "defX", 10);
	sample("abcdefgh", "XYZ", 10);
	sample("abcdefgh", "fhg", 10);
	sample("abcdabch", "fhg", 10);

	i = 0;
	while (i < 30)
	{
		sample("abcdefghijklmnopqrstuvwxyz", "ghijklm", i);
		i++;
	}
	printf("\n\n");
	return (0);
}