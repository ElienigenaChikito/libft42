#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    if (!lst)  // Si la lista está vacía, retorna NULL
        return NULL;
    while (lst->next)  // Avanza hasta el último nodo
        lst = lst->next;
    return lst;
}