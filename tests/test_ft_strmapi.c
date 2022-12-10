/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:28:56 by fheld             #+#    #+#             */
/*   Updated: 2022/12/06 19:10:10 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft_copy/libft.h"
#include "test_libft.h"

static char	shift(unsigned int i, char c)
{
	return (c + i);
}

int	test_ft_strmapi(void)
{
	printf("strmapi:\n");
	char	*m;

	m = ft_strmapi("aaaaaaaa", &shift);
	if (memcmp("abcdefgh", m, 9) != 0)
		printf("disagreement %s\n", m);
	else
		test_ok();
	free(m);

	m = ft_strmapi("", &shift);
	if (memcmp("", m, 1) != 0)
		printf("disagreement %s\n", m);
	else
		test_ok();
	free(m);

	m = ft_strmapi(NULL, NULL);
	test_ok();

	printf("\n\n");
	return (1);
}
