/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:01:43 by fheld             #+#    #+#             */
/*   Updated: 2022/12/06 16:18:48 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Libft_copy/libft.h"
#include "test_libft.h"

int	test_ft_isdigit(void)
{
	printf("isdigit:\n");
	int v;

	v = -1;
	while (v < 255)
	{
		if ((isdigit(v) == 0 && ft_isdigit(v) != 0) || \
			(isdigit(v) != 0 && ft_isdigit(v) == 0))
		{
			printf("%s %d\n", "disagreement isdigit: ", v);
			return (0);
		}
		else
			test_ok();
		v++;
	}
	printf("\n\n");
	return (1);
}