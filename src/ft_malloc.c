#include "../include/malloc.h"

void *ft_malloc(size_t n)
{
    int len;
    int *m;

    len = (int)n + (sizeof(len));

    m = mmap(NULL, len, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS,
            0, 0);

    if (m == MAP_FAILED)
        return (NULL);

    *m = len;

    return ((void *)(&m[1]));
}
