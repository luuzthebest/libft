/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hounajar <hounajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:20:49 by hounajar          #+#    #+#             */
/*   Updated: 2024/11/20 01:25:10 by hounajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdint.h>

int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_isalnum(int c);
int			ft_isalpha(char c);
int			ft_isdigit(char c);
int			ft_isprint(int c);
int			ft_isascii(int c);
int			ft_strncmp(const char *str1, const char *str2, size_t n);
char		*ft_strchr(const char *str, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strnstr(const char *big, const char *little, size_t len);
size_t		ft_strlen(const char *str);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
char		*ft_strdup(const char *s);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
void		ft_bzero(void *s, size_t n);
void		*ft_memrchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memset(void *s, int n, size_t c);
int			ft_atoi(const char *nptr);
void		*ft_calloc(size_t nmemb, size_t size);
#endif
