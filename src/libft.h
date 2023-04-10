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

#endif /* LIBFT_H */