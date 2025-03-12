#ifndef FT_GC_H
# define FT_GC_H

# include "../ft_stdlib.h"

# define TRUE 1
# define FALSE 0

typedef struct s_gc
{
    void *ptr;
    struct s_gc *next;
} t_gc;

void *gc_malloc(size_t size);
void gc_free(void *ptr);
void gc_exit(void);
short gc_add(void *ptr);

#endif