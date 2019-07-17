#include "ft_list.h"
#include <stdio.h>


t_list		*ft_create_elem(void *data);

int main()
{
		t_list* item = ft_create_elem("asdf");
			printf("%s\n", (char*)item->data);
				printf("%p\n", item->next);
}
