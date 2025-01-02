#include "../includes/ft_string_functions.h"

char *ft_str_remove_dup(char *str, char c)
{
    int i;
    int l;
    char buffer[1024];
    char *ptr;

    if (!str)
        return (NULL);
    i = 0;
    l = 0;
    while (str[i])
    {
        if (str[i] != c)
            buffer[l++] = str[i++];
        else if (str[i] == c)
        {
            buffer[l++] = str[i++];
            while (str[i] == c)
                i++;
        }
    }
    ptr = malloc((l + 1) * sizeof(char));
    if (!ptr)
        return (NULL);
    ft_strlcpy(ptr, buffer, l + 1);
    return (ptr);
}