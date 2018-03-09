#include <stdio.h>
#include <stdlib.h>
#include "../../42/libft/libft.h"

char *decrypter(char *str, int num)
{
    unsigned int index;
    char *message;
    
    index = 0;
    if (!(message = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
        return (NULL);
    while (*str)
    {
        if (*str == ' ' || *str == '\t' || *str == '\n')
            message[index] = *str;
        else if ((*str >= (65 + (num % 26)) && *str <= 90) || (*str >= (97 + (num % 26)) && *str <= 122))
            message[index] = *(str) - (num % 26);
        else if ((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122))
            message[index] = *str + (26 - (num % 26));
        else
            index--;
        index++;
        str++;
    }
    message[index] = '\0';
    return message;
}

int main (int ac, char **av)
{
    char *input;
    char *result;
    int mover;
    
    int encFd = open(av[1], O_RDONLY);
    int decFd = open(av[2], O_WRONLY);
    scanf("%d", &mover);
    while (get_next_line(encFd, &input) == 1)
    {
        result = decrypter(input, mover);
        write(decFd, result, ft_strlen(result));
        write(decFd, "\n", 1);
        free(result);
    }
    return (0);
}
