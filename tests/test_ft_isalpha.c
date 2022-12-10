/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:01:27 by fheld             #+#    #+#             */
/*   Updated: 2022/12/06 16:18:31 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Libft_copy/libft.h"
#include "test_libft.h"

int	test_ft_isalpha(void)
{
	printf("isalpha:\n");
	int v;

	v = -1;
	while (v < 255)
	{
		if ((isalpha(v) == 0 && ft_isalpha(v) != 0) || \
			(isalpha(v) != 0 && ft_isalpha(v) == 0))		
		{
			printf("%s %d\n", "disagreement isalpha: ", v);
			return (0);
		}
		else
			test_ok();
		v++;
	}
	printf("\n\n");
	return (1);
}