/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 19:23:17 by fheld             #+#    #+#             */
/*   Updated: 2022/12/06 18:04:45 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft_copy/libft.h"
#include "test_libft.h"

static void	freeall(char **array)
{
	size_t	index;

	index = 0;
	while (array[index] != NULL)
	{
		free(array[index]);
		index++;
	}
	free(array);
	return ;
}

static void putarr(char **a)
{
	size_t	i;

	i = 0;
	printf("--------------\n");
	if (a == NULL)
	{
		printf("putarr was handed a NULL pointer\n");
		return ;
	}
	while (a[i] != 0)
	{
		printf("%s\n", a[i]);
		i++;
	}
	freeall(a);
	printf("--------------\n");
}

int	test_ft_split(void)
{
	printf("split: \n");
	putarr(ft_split("XbYYYYbZ", 'b'));
	putarr(ft_split("XXXXXXX", 'b'));
	putarr(ft_split("XXXXXXXb", 'b'));
	putarr(ft_split("bXXXXXXX", 'b'));
	putarr(ft_split("bXXXXXXXb", 'b'));
	putarr(ft_split("bbXXXXXXXbb", 'b'));
	putarr(ft_split("bXXXXXXXbYbbZZZZZZZb", 'b'));
	putarr(ft_split("bbbb", 'b'));
	putarr(ft_split("b", 'b'));
	putarr(ft_split("", 'b'));

	size_t	i;
	char	*str;
	char	**array;
	i = 0;
	while (i < 20) //increase for more tests
	{
		str = ft_randanstr("ABCDEFG", i * 10);
		array = ft_split(str, 'A');
		free(str);
		freeall(array);
		i++;
	}

	printf("\n\n");
	return (0);
}