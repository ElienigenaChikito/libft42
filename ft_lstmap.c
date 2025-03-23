#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list;
    t_list *new_node;

    new_list = NULL
    if (!lst || !f)
        return NULL;
    while (lst)
    {
        new_node = ft_lstnew(f(lst->content));  // Crear un nuevo nodo con la función f
        if (!new_node)
        {
            ft_lstclear(&new_list, del);  // Liberar todo si falla
            return NULL;
        }
        ft_lstadd_back(&new_list, new_node);
        lst = lst->next;
    }
    return new_list;
}