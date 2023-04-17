/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 21:23:24 by faaraujo          #+#    #+#             */
/*   Updated: 2023/04/17 23:04:41 by faaraujo         ###   ########.fr       */
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
int		ft_isalpha(int c);

/**
 * @brief Checks if "int c" is a decimal digit character
 * @param c Character to be checked
 * @return Returns zero if false, non-zero if true   
*/
int		ft_isdigit(int c);

/**
 * @brief Checks if "int c" is a alpha or digit character
 * @param c Character to be checked
 * @return Returns zero if false, non-zero if true   
*/
int		ft_isalnum(int c);

/**
 * @brief Checks if "int c" is a ascii character
 * @param c Character to be checked
 * @return Returns zero if false, non-zero if true   
*/
int		ft_isascii(int c);

/**
 * @brief Checks if "int c" is a printable character
 * @param c Character to be checked
 * @return Returns zero if false, non-zero if true   
*/
int		ft_isprint(int c);

/**
 * @brief Converts a lower-case letter to the corresponding upper-case letter
 * @param c Character to be converted
 * @return The corresponding upper-case letter if there is one; 
 * otherwise, the argument is returned unchanged.  
*/
int		ft_toupper(int c);

/**
 * @brief Converts an upper-case letter to the corresponding lower-case letter
 * @param c Character to be converted
 * @return The corresponding lower-case letter if there is one; 
 * otherwise, the argument is returned unchanged.  
*/
int		ft_tolower(int c);

/**
 * @brief compares only the first (at most) n bytes of s1 and s2. 
 * @param s1 Pointer of string.
 * @param s2 Pointer of string.
 * @param n for comparing len characters
 * @return functions return an integer greater than, equal to, or less than 0, 
 * according as the string s1 is greater than, equal to, or less than the
 * string s2. The comparison is done using unsigned characters, 
 * so that `\200' is greater than `\0'.
*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief The atoi() function converts the initial portion of the string pointed
 * to by nptr to int representation.
 * @return The converted value.
*/
int		ft_atoi(const char *ptr);

/**
 * @brief function locates the first occurrence	of c (converted	to a char) in
 * the string pointed to by s. The terminating null character is considered part
 * of the string; therefore if c is `\0', the functions locate the terminating 
 * `\0'.
 * @param s Pointer of string.
 * @param c character to be found (converted to char).
 * @return return a pointer to the located character, or NULL if the character 
 * does not appear in the string.
*/
char	*ft_strchr(const char *s, int c);

/**
 * @brief function locates the last occurrence of c (converted to a char) in the
 * string pointed to by s. The terminating null character is considered part of 
 * the string; therefore if c is `\0', the functions locate the terminating `\0'.
 * @param s Pointer of string.
 * @param c character to be found (converted to char).
 * @return return a pointer to the located character, or NULL if the character 
 * does not appear in the string. 
 * The terminating null byte is considered part of the string.
*/
char	*ft_strrchr(const char *s, int c);

/**
 * @brief The strnstr() function locates the	first occurrence of the
 * null-terminated string little in the	string big, where not more than	len
 * characters are searched.  Characters that appear after a `\0' character are
 * not searched. Since the strnstr() function is a FreeBSD specific API,
 * it should only be used when portability is not a concern.
 * @return If little is an empty string, big is returned; if little occurs
 * nowhere in big, NULL is returned; otherwise a pointer to the first character 
 * of the first occurrence of little is returned.
*/
char	*ft_strnstr(const char *big, const char *little, size_t len);

/**
 * @brief The strdup() function returns a pointer to a new string which is a
 * duplicate of the string s. Memory for the new string is obtained with
 * malloc(3), and can be freed with free(3).
 * @return On success, the strdup() function returns a pointer to the duplicated
 * string. It returns NULL if insufficient memory was available, with errno set 
 * to indicate the cause of the error.
 * @attention ERRORS --> ENOMEM Insufficient memory available to allocate 
 * duplicate string.
*/
char	*ft_strdup(const char *s);

/**
 * @brief Function fills the length of bytes (len) of the memory area pointed to
 * by dst with the constant byte c.
 * @param dst a pointer to the memory block to be filled.
 * @param c the value to be filled into the memory block. This value is
 * converted to an unsigned integer before being copied into memory.
 * @param len the number of bytes to pad.
 * @return a pointer to the memory area dst.
*/
void	*ft_memset(void *dst, int c, size_t len);

/**
 * @brief Computes the	length of the string s excluding the terminating null 
 * byte ('\0').
 * @param s Pointer of string.
 * @return Returns the number of bytes in the string pointed to by s.  
*/
size_t	ft_strlen(const char *s);

/**
 * @brief Function copy and concatenate strings respectively. strlcpy() take the
 * full size of the buffer (not just the length) and guarantee to NUL-terminate
 * the result (as long as size is larger than 0).
 * ---> strlcpy() function copies up to size - 1 characters from the
 * NUL-terminated string src to dst, NUL-terminating the result.
 * @return the total length of the string they tried to create. That means the
 * length of src.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/**
 * @brief Function copy and concatenate strings respectively. strlcat() take the
 * full size of the buffer (not just the length) and guarantee to NUL-terminate
 * the result (as long as there is at least one byte free in dst).
 * ---> for strlcat() both src and dst must be NUL-terminated.
 * --->  The strlcat() function appends the NUL-terminated string src to the end
 * of dst. It will append at most size - strlen(dst) - 1 bytes, NUL-terminating
 * the result.
 * @return the total length of the string they tried to create. that means the
 * initial length of dst plus the length of src.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size);

#endif /* LIBFT_H */