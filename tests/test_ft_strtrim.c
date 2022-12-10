/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:32:34 by fheld             #+#    #+#             */
/*   Updated: 2022/12/03 22:01:54 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft_copy/libft.h"
#include "test_libft.h"

static void	sample(char *s1, char *s2)
{
	char	*p;

	p = ft_strtrim(s1, s2);
	printf("%s\n", p);
	free(p);
}

int	test_ft_strtrim(void)
{
	sample("abc12343ddd46efgd", "abcdefg");
	sample("aa1a", "a");
	sample("aaa", "a");
	sample("12343ddd46efgd", "abcdefg");
	sample("abc12343ddd46", "abcdefg");
	return (1);
}