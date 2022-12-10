/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  fheld < fheld@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:12:00 by fheld             #+#    #+#             */
/*   Updated: 2022/12/02 18:05:24 by  fheld           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>
#include <stdlib.h>
#include "Libft_copy/libft.h"
#include "test_libft.h"
#define SEED 669051575

int	sample(char *d1, char *d2, char *src, size_t size)
{
	if (strlcpy(d1, src, size) != ft_strlcpy(d2, src, size))
		printf("disagreement return \
			strlcpy: %s, %s, %s, %ld\n", d1, d2, src, size);
	if (strcmp(d1, d2) != 0)
		printf("disagreement strlcpy: %s, %s, %s, %ld\n", d1, d2, src, size);
	return(1);
}

int	test_ft_strlcpy(void)
{
	char	*s;
	char	*d1;
	char	*d2;
	size_t	size;
	int		i;
	int		n;

	i = 0;
	srand(SEED);
	while (i < 1000)
	{
		size = rand() % 100;
		s = ft_randanstr(NULL, rand() % 100);
		d1 = ft_randanstr(NULL, 100 + rand() % 100);
		d2 = strdup(d1);
		sample(d1, d2, s, size);
		free(s);
		free(d1);
		free(d2);
		i++;
	}
	printf("---END testing strlcpy\n");
	return (1);
}