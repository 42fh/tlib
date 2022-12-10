/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:35:23 by fheld             #+#    #+#             */
/*   Updated: 2022/12/06 19:35:20 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "Libft_copy/libft.h"
#include "test_libft.h"

static int sample(char *str, int c)
{
	if (strrchr(str, c) != ft_strrchr(str, c))
	{
		printf("strrchr disagreement\n");
		printf("%s %c\n", str, c);
		printf("%p, %p\n", strrchr(str, c), ft_strrchr(str, c));
		return (0);
	}
	else
		test_ok();
	return (1);
}

int	test_ft_strrchr(void)
{
	printf("strrchr\n");
	sample("abcdefg", 'e');
	sample("abcdefg", 'g');
	sample("abcdefg", 'a');
	sample("abcdefg", 'X');
	sample("abcdefg", '\0');
	sample("", 'X');
	sample("abcdebg", 'b');
	sample("\xff abcdebg", -128);
	printf("\n\n");
	return (0);
}