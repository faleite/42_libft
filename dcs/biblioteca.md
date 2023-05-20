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