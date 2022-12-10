/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:31:23 by fheld             #+#    #+#             */
/*   Updated: 2022/12/06 19:36:19 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "Libft_copy/libft.h"
#include "test_libft.h"

static int sample(char *str, int c)
{
	if (strchr(str, c) != ft_strchr(str, c))
	{
		printf("strchr disagreement\n");
		printf("%s %c\n", str, c);
		printf("%p, %p\n", strchr(str, c), ft_strchr(str, c));
		return (0);
	}
	else
		test_ok();
	return (1);
}

int	test_ft_strchr(void)
{
	printf("strchr\n");
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