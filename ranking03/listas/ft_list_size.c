#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
    int i = 0;

    while (begin_list->next)
    {
        i++;
        begin_list = begin_list->next;
    }
    return (i);
}

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

int ft_list_size(t_list *begin_list);

int main(void)
{
    // Criar três elementos manualmente
    t_list *n1 = malloc(sizeof(t_list));
    t_list *n2 = malloc(sizeof(t_list));
    t_list *n3 = malloc(sizeof(t_list));

    n1->data = "primeiro";
    n1->next = n2;

    n2->data = "segundo";
    n2->next = n3;

    n3->data = "terceiro";
    n3->next = NULL;

    // Teste com 3 elementos
    printf("Tamanho da lista: %d\n", ft_list_size(n1)); // Deve imprimir 3

    // Teste com lista vazia
    printf("Tamanho da lista vazia: %d\n", ft_list_size(NULL)); // Deve imprimir 0

    // Liberar memória
    free(n1);
    free(n2);
    free(n3);

    return 0;
}
