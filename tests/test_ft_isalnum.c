/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:00:42 by fheld             #+#    #+#             */
/*   Updated: 2022/12/06 13:24:18 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Libft_copy/libft.h"
#include "test_libft.h"

int	test_ft_isalnum(void)
{
	printf("isalnum: \n");
	int v;

	v = -1;
	while (v < 255)
	{
		if ((isalnum(v) == 0 && ft_isalnum(v) != 0) || \
			(isalnum(v) != 0 && ft_isalnum(v) == 0))
		{
			printf("%s %d\n", "disagreement isalnum: ", v);
			printf("%s %d\n", "isalnum = ", isalnum(v));
			printf("%s %d\n", "ft_isalnum = ", ft_isalnum(v));
			return (0);
		}
		else
			test_ok();
		v++;
	}
	printf("\n\n");
	return (1);
}