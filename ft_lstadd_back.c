#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *new_node;
    
    new_node = ft_lstnew(new);
    if (!new_node)
        return;
    if (!*lst)  // Si la lista está vacía
    {
        *lst = new_node;
        return;
    }
    t_list *temp = *lst;
    while (temp->next)
        temp = temp->next;
    temp->next = new_node;
}