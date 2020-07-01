#include "../include/malloc.h"

void ft_free(void *f)
{
    int *ptr;
    int len;

    ptr = (int *)f - 1;
    len = *ptr;
    munmap(f - 1, len);
}
