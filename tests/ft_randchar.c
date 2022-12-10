/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_randchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 11:01:04 by fheld             #+#    #+#             */
/*   Updated: 2022/12/06 19:20:36 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "Libft_copy/libft.h"

char	ft_randchar(char *set)
{
	if (set == 0)
		return (rand() % 256);
	return (set[rand() % ft_strlen(set)]);
}
