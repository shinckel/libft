#include "libft.h"

int ascending(int a, int b)
{
	return (a <= b);
}

void ft_print_list(t_list *list)
{
    while (list)
    {
        printf("%d\n", list->content);
        list = list->next;
    }
}

// 108, 73, 45
t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
    t_list *tmp;
    int     swap;

    tmp = lst;
    while (lst->next != NULL)
    {
        if((*cmp)(lst->content, lst->next->content) == 0)
        {
            swap = lst->content;
            lst->content = lst->next->content;
            lst->next->content = swap;
            lst = tmp;
        }
        else
        {
            lst = lst->next;
        }
    }
    lst = tmp;
    return (lst);
}

//create node linked list
t_list *ft_create_elem(int content)
{
    t_list *new;

    new = (t_list*)malloc(sizeof(t_list));
    if (new)
    {
        new->content = content;
        new->next = NULL;
    }
    return (new);
}

//add node linked list
void ft_list_push_back(t_list **begin_list, int content)
{
    t_list *tmp;

    tmp = *begin_list;
    if (tmp)
    {
        while (tmp->next)
            tmp = tmp->next;
        tmp->next = ft_create_elem(content);
    }
    else
        *begin_list = ft_create_elem(content);
}

int main(void)
{
    int num1 = 108;
    int num2 = 73;
    int num3 = 45;

    t_list *list = ft_create_elem(num1);
    ft_list_push_back(&list, num2);
    ft_list_push_back(&list, num3);
    sort_list(list, ascending);
    ft_print_list(list);
    return (0);
}
