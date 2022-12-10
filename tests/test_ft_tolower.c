/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 19:06:42 by fheld             #+#    #+#             */
/*   Updated: 2022/11/30 19:25:51 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "Libft_copy/libft.h"

int	test_ft_tolower(void)
{
	int	v;

	v = -1;
	while (v < 256)
	{
		if (ft_tolower(v) != tolower(v))
			printf("tolower disagreement for v = %d\n", v);
		v++;
	}
	printf("done running tolower tests\n");
}
