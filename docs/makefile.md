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
  - Ao definir esses phony targets no Makefile, o make sabe que esses targets não correspondem a arquivos reais e, portanto, não precisa procurar por eles ou comparar datas de modificação. Em vez disso, o make simplesmente executa as regras especificadas em cada target, de acordo com as dependências definidas.
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

### Variáveis no Makefile
Comando | Descrição |
--------|-----------|
**SRC = ./src** | Cria uma variavel **SRC** que possui o valor **./src**
**$(SRC)/ft_isalpha.c** | Uso da variável **SRC**
**OBJS = $(FILES:.c=.o)** | Copia a lista Files, substuindo .c para .o  

*Exemplo:*
```makefile
# Cria uma variavel, contendo uma lista com nome de arquivos .c
FILES = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr ft_unsint.c
# Cria a variavel OBJS para copiar a lista Files, substuindo .c para .o  
OBJS = $(FILES:.c=.o) # Create the same in FILES list with the .o extension
```


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
