/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 21:23:06 by fheld             #+#    #+#             */
/*   Updated: 2022/12/06 13:44:55 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft_copy/libft.h"
#include "test_libft.h"

static int sample(int n)
{
	char	*p1;
	char	p2[12];

	p1 = ft_itoa(n);
	sprintf(p2, "%d", n);
	if (strcmp(p1, p2) == 0)
		test_ok();
	else
		printf("disagreement itoa, n = %d\n", n);
	free(p1);
	return (1);
}

int	test_ft_itoa(void)
{
	printf("itoa:\n");
	int	i;

	i = 0;
	sample(8);
	sample(27);
	sample(642);
	sample(0);
	sample(1);
	sample(-1);
	sample(10);
	sample(-10);
	sample(2147483647);
	sample(-2147483648);
	sample(9);
	sample(1234567890);
	sample(1029384756);
	while (i < 200)
	{
		sample((int)random());
		i++;
	}
	printf("\n\n");
	return (1);
}