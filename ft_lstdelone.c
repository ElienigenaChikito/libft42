#include "libft.h"

void    ft_lstdelone(t_list *lst, void (*del)(void *))
{
    t_list *temp;
    t_list *prev;
    
    temp = *lst; 
    prev = NULL;

    if (temp && temp->data == value)  // Si el nodo a eliminar es el primero
    {
        *lst = temp->next;
        free(temp);
        return;
    }
    while (temp && temp->data != value)  // Buscar el nodo
    {
        prev = temp;
        temp = temp->next;
    }
    if (!temp)  // No encontrado
        return;
    prev->next = temp->next;
    free(temp);
}