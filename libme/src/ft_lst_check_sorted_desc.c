#include "libme.h"

char	ft_lst_check_sorted_desc(t_lst *lst_to_check)
{
	t_lst	*lst_index;
	t_lst	*lst_start;
	int		int_smallest;
	int		tmp;

	int_smallest = ft_lst_find_int_smallest(lst_to_check);
	tmp = int_smallest;
	lst_start = ft_lst_get_value(lst_to_check, int_smallest);
    if (lst_start->next == NULL)
        lst_index = lst_to_check;
	else 
        lst_index = lst_start->next;
	while (lst_index != lst_start)
	{
        if (tmp > lst_index->content)
			return (0);
		tmp = lst_index->content;
		lst_index = lst_index->next;
        if (lst_index == NULL)
            lst_index = lst_to_check;
	}
	return (1);
}
