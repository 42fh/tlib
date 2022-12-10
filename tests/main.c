/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fheld <fheld@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:39:55 by fheld             #+#    #+#             */
/*   Updated: 2022/12/10 17:00:52 by fheld            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft_copy/libft.h"
#include "test_libft.h"

static int	mandatory(void)
{
	test_ft_atoi();
	test_ft_bzero();
	test_ft_isalnum();
	test_ft_isalpha();
	test_ft_isascii();
	test_ft_isdigit();
	test_ft_isprint();
	test_ft_memchr();
	test_ft_memcmp();
	test_ft_memcpy();
	test_ft_memmove();
	test_ft_memset();
	test_ft_strchr();
	test_ft_strlcat();
	test_ft_strlcpy();
	test_ft_strlen();
	test_ft_strncmp();
	test_ft_strnstr();
	test_ft_strrchr();
	test_ft_toupper();
	test_ft_tolower();
	test_ft_strdup();
	test_ft_calloc();
	test_ft_substr();
	test_ft_itoa();
	test_ft_putchar_fd();
	test_ft_putstr_fd();
	test_ft_putendl_fd();
	test_ft_putnbr_fd();
	test_ft_strmapi();
	test_ft_striteri();
	test_ft_split();
	test_ft_strjoin();
	test_ft_strtrim();
}
int	main(void)
{
	mandatory();
}
