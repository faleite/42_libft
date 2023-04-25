/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 20:46:06 by faaraujo          #+#    #+#             */
/*   Updated: 2023/04/25 18:32:54 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates (with malloc(3)) and returns an array of strings obtained by
 * splitting ’s’ using the character ’c’ as a delimiter. The array must end with
 * 
 * @param s é a string que será dividida em substrings.
 * 
 * @param c é o delimitador que será usado para dividir a string em substrings.
 * 
 * @return A função retorna um ponteiro para um array de ponteiros de caracteres
 * onde cada ponteiro de caracteres aponta para uma substring da string original
 * 
 * @implements A lógica da função split em C é basicamente a seguinte:
 * 
 * 1. Contar o número de substrings que a string original será dividida. 
 * Isso pode ser feito contando o número de ocorrências do delimitador na string
 * original. (funcao de contar palavras)
 * 
 * 2. Alocar memória para o array de ponteiros de caracteres que conterá as 
 * substrings.
 * 
 * 3. Percorrer a string original, copiando cada substring para um elemento do 
 * array de ponteiros de caracteres, e atualizando o ponteiro para a próxima 
 * substring.
 * 
 * 4. Adicionar um ponteiro nulo no final do array de ponteiros de caracteres.
 * 
 * @cite Um uma forma de implementar e usar duas iterações na string original. 
 * Na primeira iteração, ele conta o número de substrings que a string será 
 * dividida. Na segunda iteração, ele copia cada substring para o array de 
 * ponteiros de caracteres. A função retorna um ponteiro para o array de 
 * ponteiros de caracteres que contém as substrings divididas.
*/
 
 /* 1. Contar numero de palavras) */
static int	count_wrds(char const *s, char c)
{
	size_t	i;
	size_t	n_wrds;

	n_wrds = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			n_wrds++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (n_wrds);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	arrlen;
	size_t	i;
	size_t	j;
	size_t	len;

	arrlen = count_wrds(s, c);
	arr = (char **)malloc(sizeof(char *) * (arrlen + 1));
	if (!(arr) || !(s))
	{
		free(arr);
		return (NULL);
	}
	i = 0;
	j = 0;
	len = 0;
	while (s[i] && (j < arrlen))
	{
		while (s[i] == c)
			i++;
		while (s[i + len] != c)
			len++;
		arr[j] = ft_substr(s, i, len);
		i += len + 1;
		len = 0;
		j++;
	}
	arr[j] = NULL;
	return (arr);
}

/* int	main(void)
{
	char *str = "   lorem   ipsum dolor   sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse  ";
	int	n = count_wrds(str, ' ');

	printf("Amount of words: %d\n", n); 
	char **split_str = ft_split(str, ' ');

	while (*split_str)
		printf("%s\n", *split_str++);
	return (0);
} */