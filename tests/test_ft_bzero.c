/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:47:31 by fheld             #+#    #+#             */
/*   Updated: 2022/12/06 12:50:04 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "Libft_copy/libft.h"
#include "test_libft.h"

static int	instance(int n)
{
	char s1[59] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	char s2[59] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";

	ft_bzero(s1, n);
	bzero(s2, n);
	if (memcmp(s1, s2, 59) == 0)
		test_ok();
	else
	{
		printf("%s %d\n", "bzero doesn't match for n = ", n);
		return (0);
	}
	return (1);
}	

//assuming that bzero does segfault if given a NULL pointer
int	test_ft_bzero(void)
{
	printf("bzero:\n");
	int	n;

	n = 0;
	while (n <= 59)
	{
		if (instance(n) == 0)
			return (0);
		n++;
	}
	printf("\n\n");
	return (1);
}
