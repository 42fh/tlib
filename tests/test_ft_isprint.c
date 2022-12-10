/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:01:52 by fheld             #+#    #+#             */
/*   Updated: 2022/12/06 13:29:17 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Libft_copy/libft.h"
#include "test_libft.h"

int	test_ft_isprint(void)
{
	printf("isprint: \n");
	int v;

	v = -1;
	while (v < 255)
	{
		if ((isprint(v) == 0 && ft_isprint(v) != 0) || \
			(isprint(v) != 0 && ft_isprint(v) == 0))
		{
			printf("%s %d\n", "disagreement isprint: ", v);
			return (0);
		}
		else
			test_ok();
		v++;
	}
	printf("\n\n");
	return (1);
}