#include "libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    t_list *new_node;
    
    new_node = ft_lstnew(content);
    if (!new_node)
        return;
    new_node->next = *head;
    *head = new_node;
}