/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:29:14 by fheld             #+#    #+#             */
/*   Updated: 2022/12/06 18:55:26 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft_copy/libft.h"
#include "test_libft.h"

static void	shift(unsigned int i, char *c)
{
	*c = *c - i;
	return ;
}

int	test_ft_striteri(void)
{
	printf("iteri:\n");
	char	s[9] = "zzzzzzzz";
	char	t[] = "";
	ft_striteri(s, &shift);
	ft_striteri(s, NULL);
	ft_striteri(NULL, NULL);
	ft_striteri(NULL, &shift);
	ft_striteri(t, &shift);
	if (memcmp("zyxwvuts", s, 9) != 0)
		printf("striteri disagreement\n");
	else
		test_ok();
	printf("\n\n");
	return (1);
}