/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:46:31 by fheld             #+#    #+#             */
/*   Updated: 2022/12/06 19:34:39 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"
#include "Libft_copy/libft.h"

static int	sample(char *str)
{
	if (strlen(str) != ft_strlen(str))
	{
		printf("disagreement strlen for: %s\n", str);
		return (0);
	}
	else
		test_ok();
	return (1);
}

int	test_ft_strlen(void)
{
	printf("strlen\n");
	sample("");
	sample("a");
	sample("abcd");
	sample("tttttttttttttttttttttt");
	sample("tttttttttt\0tttttttttttt");
	printf("\n\n");
	return (0);
}