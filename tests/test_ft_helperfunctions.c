/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_helperfunctions.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:41:07 by fheld             #+#    #+#             */
/*   Updated: 2022/12/06 12:01:53 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//prints a red 'X'
void	test_err(void)
{
	write(1, "\033[0;31mX\033[0m", 12);
}

void	test_ok(void)
{
	write(1, "-", 1);
}
