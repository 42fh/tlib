/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:01:37 by fheld             #+#    #+#             */
/*   Updated: 2022/12/06 13:29:51 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Libft_copy/libft.h"
#include "test_libft.h"

int	test_ft_isascii(void)
{
	printf("isascii: \n");
	int v;

	v = -1;
	while (v < 255)
	{
		if ((isascii(v) == 0 && ft_isascii(v) != 0) || \
			(isascii(v) != 0 && ft_isascii(v) == 0))
		{
			printf("%s %d\n", "disagreement isascii: ", v);
			return (0);
		}
		else
			test_ok();
		v++;
	}
	printf("\n\n");
	return (1);
}