#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int  i;

    i = *a;
    *a = *b;
    *b = *a;
}