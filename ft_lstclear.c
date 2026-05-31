#include"libft.h"
#include <stdlib.h>

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *curr;

    if(!lst || !del || !*lst)
        return ;
    while (*lst)
    {
        curr = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = curr;
    }
}