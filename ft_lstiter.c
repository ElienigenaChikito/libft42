#include "libft.h"

void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!lst || !f)  // Verificar que la lista y la función existen
        return;

    while (lst)
    {
        f(lst->content);  // Aplicar la función a cada nodo
        lst = lst->next;
    }
}