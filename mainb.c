#include "libft.h"

void print_list(t_list *list) 
{
    while (list) 
	{
        printf("Content: %s\n", (char *)list->content);
        list = list->next;
    }
}

int main(void) 
{
    t_list *list = NULL;

    t_list *new_node1 = ft_lstnew("Node 1");
    ft_lstadd_front(&list, new_node1);

    t_list *new_node2 = ft_lstnew("Node 2");
    ft_lstadd_front(&list, new_node2);

    t_list *new_node3 = ft_lstnew("Node 3");
    ft_lstadd_back(&list, new_node3);

    printf("Lista após adições:\n");
    print_list(list);

    printf("Número de elementos na lista: %d\n", ft_lstsize(list));

    t_list *found_node = ft_lstlast(list);
    printf("Último nó: %s\n", (char *)found_node->content);

    ft_lstdelone(new_node1, free);
    printf("Lista após remoção do Node 1:\n");
    print_list(list);

    ft_lstclear(&list, free);
    printf("Lista após limpeza:\n");
    print_list(list);

    return 0;
}
