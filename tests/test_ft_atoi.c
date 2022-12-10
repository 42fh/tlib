/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:07:49 by fheld             #+#    #+#             */
/*   Updated: 2022/12/06 12:41:46 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "Libft_copy/libft.h"
#include "test_libft.h"
#define SEED 188408247

static int	sample(char *str)
{
	if (ft_atoi(str) == atoi(str))
	{
		test_ok();
	}
	else
	{
		test_err();
		printf("\ndisagreement atoi: %s\n", str);
		printf("%d, %d\n", ft_atoi(str), atoi(str));
		return (0);
	}
	return (1);
}

int	test_ft_atoi(void)
{
	printf("atoi: \n");
	char	*p;
	int		i = 0;
	int		n = 15;
	char	*strs[] = {
		"",
		"1",
		"-1",
		"0",
		"1234",
		"4123",
		"10",
		"--777",
		"+8588",
		"  \n \f \v \t \r 	+8",
		"-0000000000000000000000000000006",
		"  -2147483648",
		"  2147483647",
		"21474836473636",
		"acuhar",
	};
	while (i < n)
	{
		sample(strs[i]);
		i++;
	}
	srand(SEED);
	i = 0;
	n = 1000;
	while(i < n)
	{
		p = ft_randanstr("+-0123456789  a", rand() % 30);
		if (p != 0)
			sample(p);
		free(p);
		i++;
	}
	printf("\n\n");
	return (1);
}