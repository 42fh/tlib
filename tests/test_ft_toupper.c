/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 19:06:35 by fheld             #+#    #+#             */
/*   Updated: 2022/11/30 19:27:13 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "Libft_copy/libft.h"

int	test_ft_toupper(void)
{
	int	v;

	v = -1;
	while (v < 256)
	{
		if (ft_toupper(v) != toupper(v))
		{
			printf("toupper disagreement for v = %d\n", v);
			printf("%d %d\n", ft_toupper(v), toupper(v));
		}
		v++;
	}
	printf("done running toupper tests\n");
}
