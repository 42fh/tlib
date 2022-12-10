/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:22:48 by fheld             #+#    #+#             */
/*   Updated: 2022/12/06 18:12:13 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Libft_copy/libft.h"
#include "test_libft.h"

static int	sample(char *str)
{
	char	*p1;

	p1 = strdup(str);
	if (strcmp(p1, str) != 0)
		printf("disagreement strdup %s, %s\n", p1, str);
	else
		test_ok();
	free(p1);
	return (1);
}

int	test_ft_strdup(void)
{
	printf("strdup:\n");
	sample("");
	sample("f");
	sample("asdgar");
	sample("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabc\xff\x00");
	printf("\n\n");
	return (1);
}