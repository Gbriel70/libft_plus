#include "../includes/ft_string_functions.h"

char	*ft_str_remove_dup(char *str, char c)
{
    int		i = 0;
    int		l = 0;
    char	*buffer;
    char	*ptr;

    if (!str)
        return (NULL);
    buffer = malloc((ft_strlen(str) + 1) * sizeof(char));
    if (!buffer)
        return (NULL);
    while (str[i])
    {
        buffer[l++] = str[i++];
        if (str[i - 1] == c)
            while (str[i] == c)
                i++;
    }
    buffer[l] = '\0';
    ptr = malloc((l + 1) * sizeof(char));
    if (!ptr)
        return (free(buffer), NULL);
    ft_strlcpy(ptr, buffer, l + 1);
    free(buffer);
    return (ptr);
}
