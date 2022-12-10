#ifndef TEST_LIBFT_H
 #define TEST_LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int	test_ft_atoi(void);
int	test_ft_bzero(void);
int	test_ft_isalnum(void);
int	test_ft_isalpha(void);
int	test_ft_isascii(void);
int	test_ft_isdigit(void);
int	test_ft_isspace(void);
int	test_ft_isprint(void);
int	test_ft_memchr(void);
int	test_ft_memcmp(void);
int	test_ft_memcmp(void);
int	test_ft_memcpy(void);
int	test_ft_memmove(void);
int	test_ft_memset(void);
int	test_ft_strchr(void);
int	test_ft_strlcat(void);
int	test_ft_strlcpy(void);
int	test_ft_strlen(void);
int	test_ft_strnstr(void);
int	test_ft_strrchr(void);
int	test_ft_toupper(void);
int	test_ft_tolower(void);
int	test_ft_randchar(void);
int	test_ft_memrchr(void);
int	test_ft_memrset(void);
int	test_ft_randanstr(void);
int	test_ft_strncmp(void);
int	test_ft_strdup(void);
int	test_ft_calloc(void);
int	test_ft_substr(void);
int	test_ft_itoa_setter(void);
int	test_ft_itoa(void);
int	test_ft_putchar_fd(void);
int	test_ft_putstr_fd(void);
int	test_ft_putendl_fd(void);
int	test_ft_putnbr_fd(void);
int	test_ft_strmapi(void);
int	test_ft_striteri(void);
int	test_ft_split(void);
int	test_ft_strjoin(void);
int	test_ft_strtrim(void);
int	test_ft_lst_bonus(void);
void	*ft_print_memory(void *addr, unsigned int size);
char	ft_randchar(char *set);
void	*ft_memrset(void *s, char *set, size_t n);
char	*ft_randanstr(char *set, size_t n);
void	test_err(void);
void	test_ok(void);

#endif