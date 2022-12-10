/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_randanstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  fheld < fheld@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 11:41:48 by fheld             #+#    #+#             */
/*   Updated: 2022/12/02 18:09:20 by  fheld           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft_copy/libft.h"
#include "test_libft.h"
#include "stdlib.h"

char	*ft_randanstr(char *set, size_t n)
{
	char	*p;

	p = malloc(sizeof(char) * (n + 1));
	if (p == 0)
		return (0);
	p[n] = '\0';
	if (set == NULL)
		ft_memrset(p, \
		"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789", n);
	else
		ft_memrset(p, set, n);
	return (p);
}
