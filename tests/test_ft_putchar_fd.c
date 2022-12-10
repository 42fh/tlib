/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putchar_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:56:18 by fheld             #+#    #+#             */
/*   Updated: 2022/12/06 17:59:31 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft_copy/libft.h"
#include "test_libft.h"

//extending: test other fd's than stdout
//eg. files or strerr
int	test_ft_putchar_fd(void)
{
	printf("putchar: \n");
	ft_putchar_fd('A', 1);
	ft_putchar_fd('B', 1);
	ft_putchar_fd('C', 1);
	ft_putchar_fd(-128, 1);
	ft_putchar_fd(127, 1);
	ft_putchar_fd('\n', 1);
	printf("\n\n");
	return (1);
}