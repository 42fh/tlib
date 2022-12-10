/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putendl_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:09:06 by fheld             #+#    #+#             */
/*   Updated: 2022/12/06 17:59:56 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft_copy/libft.h"
#include "test_libft.h"

int	test_ft_putendl_fd(void)
{
	printf("putendl:\n");
	ft_putendl_fd("a new line here:", 1);
	ft_putendl_fd("", 1);
	printf("\n\n");
	return (1);
}