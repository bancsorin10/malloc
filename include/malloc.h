#ifndef MALLOC_H
# define MALLOC_H

# include "libft/libft.h"
# include <sys/mman.h>

void *ft_malloc(size_t n);
void ft_free(void *f);

#endif
