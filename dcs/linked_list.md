# Linked list

## Introduction to [Linked list](https://www.learn-c.org/en/Linked_lists)
- *Uma **linked list** é um conjunto de nós alocados dinamicamente, organizados\
de forma que cada nó contenha um valor e um ponteiro. O ponteiro sempre aponta\
para o próximo membro da lista. Se o ponteiro for NULL, ele será o último nó da\
lista.*

## lstclear
-  *A função ft_lstclear percorre a lista encadeada e deleta cada elemento,\
liberando a memória utilizada por eles, e atualiza o ponteiro da lista para\
apontar para NULL.*
```c
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (*lst == NULL)
		return ;
	while (*lst != NULL)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free((*lst));
		*lst = tmp;
	}
	*lst = NULL;
}
```

1. Verifica se a lista não está vazia:
```c
if (*lst == NULL)
    return ;
/* Se a lista estiver vazia, a função simplesmente retorna, pois não há\
 elementos para serem deletados. */
```
2. Percorrer a lista:
```c
while (*lst != NULL)
/* Essa linha cria um loop que executa enquanto o ponteiro *lst não apontar para
um nó da lista que contenha o valor NULL. */
```
3. Armazenar o próximo elemento da lista em uma variável temporária **tmp**:
```c
tmp = (*lst)->next;
/* A variável tmp é criada para armazenar o ponteiro para o próximo elemento da
lista antes que ele seja deletado. Isso garante que a lista não seja perdida e
que possa ser percorrida até o final. */
```
4. Deletar o conteúdo do nó atual e liberar a memória utilizada por ele:
```c
del((*lst)->content);
free((*lst));
/* Essas linhas usam a função del para deletar o conteúdo do nó atual, que é
acessado através do ponteiro (*lst)->content. Em seguida, a função free é usada
para liberar a memória utilizada por esse nó. */
```
5. Atualizar o ponteiro da lista para apontar para o próximo nó:
```c
*lst = tmp;
/*Por fim, o ponteiro *lst é atualizado para apontar para o próximo nó da lista,
que foi armazenado anteriormente na variável tmp. */
```
6. Atualizar o ponteiro da lista para apontar para **NULL**:
```c
*lst = NULL;
/* Quando todos os nós da lista forem percorridos e deletados, o ponteiro da
lista deve ser atualizado para apontar para NULL. Isso indica que a lista não
contém mais nenhum elemento e está completamente vazia. */
```