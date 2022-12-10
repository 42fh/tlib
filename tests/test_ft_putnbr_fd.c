/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putnbr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:54:38 by fheld             #+#    #+#             */
/*   Updated: 2022/12/06 17:56:19 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft_copy/libft.h"
#include "test_libft.h"

static void	sample(int n)
{
	ft_putnbr_fd(n, 1);
	printf(" =?= %d\n", n);
	write(1, "\n", 1);
}

int	test_ft_putnbr_fd(void)
{
	printf("putnbr:\n");
	sample(8);
	sample(27);
	sample(642);
	sample(0);
	sample(1);
	sample(-1);
	sample(10);
	sample(-10);
	sample(1234567890);
	sample(2147483647);
	sample(-2147483648);
	printf("\n\n");
	return (1);
}