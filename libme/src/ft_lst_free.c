include "libme.h"

void	ft_lst_free(t_lst **lst_to_free)
{
	t_lst	*lst_temp;

	while (lst_to_free != NULL && *lst_to_free != NULL)
	{
		lst_temp = (*(*(lst_to_free))).next;
		free(*lst_to_free);
		*lst_to_free = lst_temp;
	}
}

