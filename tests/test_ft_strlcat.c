/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  fheld < fheld@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:12:28 by fheld             #+#    #+#             */
/*   Updated: 2022/12/02 18:28:19 by  fheld           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft_copy/libft.h"
#include "test_libft.h"
#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>
#define SEED 824718840

static int	sample(char *d1, char *d2, char *s, int	size)
{
	if (strlcat(d1, s, size) != ft_strlcat(d2, s, size))
		printf("return disagreement %s, %s, %s, %d\n", d1, d2, s, size);
	if (strcmp(d1, d2) != 0)
		printf("disagreement comparing %s, %s, %s, %d\n", d1, d2, s, size);
	return (1);
}


//incomplete tests: doesn't check situation where size ensures that string fits
int	test_ft_strlcat(void)
{
	int		i;
	int		h;
	char	*d1;
	char	*d2;
	char	*s;
	int		n;

	srand(SEED);
	h = 0;
	while (h < 100)
	{
		i = 0;
		while (i < 50)
		{
			n = rand() % 100;
			d1 = ft_randanstr(NULL, n + 67);
			d2 = strdup(d1);
			d1[n] = '\0';
			d2[n] = '\0';
			s = ft_randanstr(NULL, 30);
			sample(d1, d2, s, h);
			free(d1);
			free(d2);
			free(s);
			i++;
		}
		h++;
	}
	printf("---END testing strlcat\n");
	return (1);
}