/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:22:48 by fheld             #+#    #+#             */
/*   Updated: 2022/12/06 19:40:32 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft_copy/libft.h"
#include "test_libft.h"

static int	sample(const char *str, unsigned int start, size_t len)
{
	char	*p;

	p = ft_substr(str, start, len);
	if (p != 0)
		printf("%s\n", p);
	free(p);
}


int	test_ft_substr(void)
{
	sample(NULL, 10, 10);
	sample("abcdefghijklmnopqrstuvwxyz", 0, 1);
	sample("abcdefghijklmnopqrstuvwxyz", 10, 10);
	sample("abcdefghijklmnopqrstuvwxyz", 10, 100);
	sample("abcdefghijklmnopqrstuvwxyz", 0, 10);
	sample("abcdefghijklmnopqrstuvwxyz", 0, 0);
	return (0);
}