# LIBFT

## file .h
- Um arquivo com a extensão .h na linguagem C é um arquivo de cabeçalho (header\
file). Ele contém declarações de funções, constantes, macros e tipos de dados\
que podem ser usados por outros programas escritos em C.

- Os arquivos de cabeçalho são usados para declarar as funções e variáveis que\
serão definidas em outro lugar, normalmente em um arquivo de código-fonte\
separado. Eles são usados para fornecer informações sobre como usar uma\
biblioteca ou módulo de código, sem fornecer os detalhes da implementação.

- Quando um programa C é compilado, o compilador procura as declarações de\
funções e variáveis em arquivos de cabeçalho correspondentes e usa essas\
informações para gerar o código objeto. Em seguida, o código objeto é vinculado\
a outras bibliotecas e ao código-fonte do programa para gerar o executável final.

- Exemplo:
```c
#ifndef LIBFT_H
#define LIBFT_H

#endif /* LIBFT_H */ 
```

- #ifndef é diretiva de pré-processamento que verifica se a constante "LIBFT_H"\
não foi definida anteriormente. Se não foi definido, o compilador continua a\
processar o conteúdo do arquivo, caso contrário, ele é ignorado. Isso é útil\
para garantir que o conteúdo do cabeçalho não seja incluído mais de uma vez em\
um arquivo de código-fonte.

- **#define** é usado para definir uma constante que pode ser usada em outros\
arquivos de código-fonte.

- **#endif** é uma diretiva de pré-processamento que encerra a estrutura\
iniciada pela diretiva "#ifndef".