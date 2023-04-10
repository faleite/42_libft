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

---

## file .a
- Um arquivo com a extensão .a na linguagem C é um arquivo de biblioteca\
estática, também conhecido como "arquivo de objeto". Ele contém um conjunto\
de funções compiladas que podem ser usadas por outros programas escritos em C.

- O arquivo .a é criado a partir de vários arquivos-fonte (arquivos .c) que são\
compilados em arquivos-objeto (arquivos .o) usando um compilador como o GCC\
(GNU Compiler Collection). Em seguida, esses arquivos-objeto são combinados em\
um único arquivo .a usando um utilitário de arquivamento, como o ar.

- Quando um programa é compilado e vinculado com uma biblioteca estática, todas\
as funções necessárias da biblioteca são incorporadas diretamente no executável\
final. Isso significa que o executável final contém todo o código necessário para\
o programa funcionar, incluindo o código das funções da biblioteca estática.

- O uso de bibliotecas estáticas pode ser vantajoso em algumas situações, como\
quando é necessário garantir que o programa funcione corretamente,\
independentemente do ambiente em que é executado. No entanto, ele também pode\
aumentar o tamanho do executável final e tornar a compilação mais lenta,\
especialmente se a biblioteca for grande.

---
## Criar Bibliotecas Estáticas

Comando | Descrição |
--------|-----------|
**gcc -c arquivo.c** | *Cria arquivo objeto:* **arquivo.o**
**ar -rcs lib\<nome>.a arquivos.o**| *Gerar biblioteca estática*
**ar** | *Gerar arquivo de biblioteca estática "ar" de "archive"*
**-c** | *criar biblioteca se ela ainda não existir*
**-r** | *replace (substituir arquivos antigos se for necessário)*
**-s** | *criar um índice para a biblioteca*
**ar -t libft.a**| *lista o conteúdo da biblioteca*

## Makefile

### Diretrizes para libft
- **Makefile** deve conter: 
  - NAME, all, clean, fclean, re
- Deve usar o comando **ar** para criar a sua biblioteca

### Alvos
- all
  - é uma regra que define o conjunto padrão de alvos a serem construídos quando\
  você executa o comando "make" sem nenhum argumento específico.
  - A função "all" é útil porque permite que você especifique facilmente um\
  conjunto padrão de alvos a serem construídos, em vez de ter que especificar\
  cada alvo individualmente a cada vez que você executa o comando "make".
```makefile
# regra padrão de congfiguração
all:
# criando um comando do "all"
	cc -o hello main.c fct.c
```
```makefile
all: programa
# Nesse caso, a regra "all" especifica que o alvo padrão é "programa". Quando
# você executa o comando "make" sem nenhum argumento, o Makefile compila "programa".
```
```makefile
# Você pode definir a regra "all" com qualquer conjunto de alvos que desejar.
# Por exemplo, se você tiver vários programas ou bibliotecas diferentes em seu
# projeto, pode definir "all" para compilá-los todos:
all: programa1 programa2 biblioteca1
```
- clean
  - Serve para remover conjunto ou determinados arquivos
- fclean
  - Espécie de force clean, que faz duas coisas: Chama a regra "clean"\
  e em seguida apaga libft.a
```makefile
clean:
	rm *.o  # remove todos os arquivos com formato .o
#	rm *.c

fclean: clean # fclean depende do alvo "clean"
	rm -f *.a # remove todos os arquivos com formato .a	
```
- re
  - A regra re (abreviação de "rebuild" ou "recompilar") no Makefile é usada\
  para reconstruir o projeto inteiro, recompilando todos os arquivos de\
  código-fonte, mesmo que eles não tenham sido modificados desde a última\
  compilação.
```makefile
re: fclean all
```
- .PHONY
  - Resolve problema de ambiguidadade, caso nome de uma regra seja o mesmo que\
  um arquivo existente no projeto.
```makefile
.PHONY:	all clean fclean re
```
---
### Comandos
Descrição | Comando |
----------|---------|
*Listar comandos do Makefile* | **make -n**

### Flags (Opções de compilação)
Descrição | Comando |
----------|---------|
*direciona a saída do programa para o arquivo* | **-o \<nome_arquivo>**
*compilar aqruivo* | **-c \<nome_arquivo>**

### Criar Variáveis no Makefile
Comando | Descrição |
--------|-----------|
**SRC = ./src** | Cria uma variavel **SRC** que possui o valor **./src**
**$(SRC)/ft_isalpha.c** | Uso da variável **SRC**

### Máscaras
Máscara | Representa|
--------|-----------|
$<  |  A primeira dependência
$@  | O alvo
*.o | Qualquer .o no comando
%.o | Qualquer .o no alvo ou dependência
- Exemplos:

```makefile
SRC = ./src
OBJ = ./obj
BIN = ./bin
MOD = ./mod
CC = gfortran

$(BIN)/programa.x:	$(SRC)/programa.f90 $(OBJ)/modulo_lib.o
# A regra abaixo traduzida
# gfortran $(OBJ)/modulo_lib.o $(SRC)/programa.f90 -I $(MOD) -o $(BIN)/programa.x
	$(CC) $(OBJ)/modulo_lib.o $< -I $(MOD) -o $@

# A regra abaixo traduzida
#./obj/modulo_lib.o:	./src/modulo_lib.f90
#	gfortran -c ./src/modulo_lib.f90 -J ./mod -o ./obj/modulo_lib.o
$(OBJ)/%.o:	$(SRC)/%.f90
	$(CC) -c $< -J $(MOD) -o $@
```

 