/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putstr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:06:43 by fheld             #+#    #+#             */
/*   Updated: 2022/12/06 17:58:25 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft_copy/libft.h"
#include "test_libft.h"

int	test_ft_putstr_fd(void)
{
	printf("putstr: \n");
	ft_putstr_fd("printed by putstr\n", 1);
	ft_putstr_fd("", 1);
	printf("\n\n");
	return (1);
}