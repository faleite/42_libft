/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 21:23:24 by faaraujo          #+#    #+#             */
/*   Updated: 2023/04/11 23:25:34 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <ctype.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

/**
 * @brief Checks if "int c" is a letter
 * @param c Character to be checked
 * @return Returns zero if false, non-zero if true   
*/
int	ft_isalpha(int c);

/**
 * @brief Checks if "int c" is a decimal digit character
 * @param c Character to be checked
 * @return Returns zero if false, non-zero if true   
*/
int	ft_isdigit(int c);

/**
 * @brief Checks if "int c" is a alpha or digit character
 * @param c Character to be checked
 * @return Returns zero if false, non-zero if true   
*/
int	ft_isalnum(int c);

/**
 * @brief Checks if "int c" is a ascii character
 * @param c Character to be checked
 * @return Returns zero if false, non-zero if true   
*/
int	ft_isascii(int c);

/**
 * @brief Checks if "int c" is a printable character
 * @param c Character to be checked
 * @return Returns zero if false, non-zero if true   
*/
int	ft_isprint(int c);

/**
 * @brief Converts a lower-case letter to the corresponding upper-case letter
 * @param c Character to be converted
 * @return The corresponding upper-case letter if there is one; 
 * otherwise, the argument is returned unchanged.  
*/
int	ft_toupper(int c);

/**
 * @brief Converts an upper-case letter to the corresponding lower-case letter
 * @param c Character to be converted
 * @return The corresponding lower-case letter if there is one; 
 * otherwise, the argument is returned unchanged.  
*/
int	ft_tolower(int c);

/**
 * @brief Computes the	length of the string s excluding the terminating null 
 * byte ('\0').
 * @param s Pointer of string.
 * @return Returns the number of bytes in the string pointed to by s.  
*/
size_t	ft_strlen(const char *s);

/**
 * @brief compares only the first (at most) n bytes of s1 and s2. 
 * @param s1 Pointer of string.
 * @param s2 Pointer of string.
 * @return returns an integer value that indicates the relationship between the
 * strings.  
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n);

#endif /* LIBFT_H */