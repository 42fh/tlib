/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  fheld < fheld@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 11:11:13 by fheld             #+#    #+#             */
/*   Updated: 2022/12/02 18:08:47 by  fheld           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft_copy/libft.h"

char	ft_randchar(char *set);
void	*ft_memrset(void *s, char *set, size_t n);
char	*ft_randanstr(char *set, size_t n);

void	*ft_memrset(void *s, char *set, size_t n)
{
	char	*p;
	size_t	i;

	p = s;
	i = 0;
	while (i < n)
	{
		*(p + i) = ft_randchar(set);
		i++;
	}
	return (s);
}
