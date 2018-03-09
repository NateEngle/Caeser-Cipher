#include <stdio.h>
#include <stdlib.h>
#include "../../42/libft/libft.h"

//Your basic caeser cipher (substitution) but it does not handle non alphabetic characters
//could update to handle numbers and punctuation...

// char *encrypter(char *str, int num)
// {
// 	unsigned int index;
// 	char *message;
	
// 	index = 0;
// 	if (!(message = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
// 		return (NULL);
// 	while (*str)
// 	{
// 		if (*str == ' ' || *str == '\t' || *str == '\n')
// 			message[index] = *str;
// 		else if ((*str >= 65 && *str <= (90 - (num % 26))) || (*str >= 97 && *str <= (122 - (num % 26))))
// 			message[index] = *(str) + (num % 26);
// 		else if ((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122))
// 			message[index] = *str - (26 - (num % 26));
// 		else
// 			index--;
// 		index++;
// 		str++;
// 	}
// 	message[index] = '\0';
// 	return message;
// }


int main(int ac, char **av)
{
	// char *input;
	// char *result;
	int mover;
	
	if (ac != 0)
	{
		int fd = open(av[1], O_RDONLY);
		// int encryptFd = open(av[2], O_WRONLY);
		scanf("%d", &mover);
		char *str;

		str = NULL;	
		while(read(fd, str, 1) != 0)
		{

		}
		
		printf("%s", str);
		// unsigned int index;
		// char *message;
		
		// index = 0;
		// if (!(message = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		// 	return (NULL);
		// while (*str)
		// {
		// 	if (*str == ' ' || *str == '\t' || *str == '\n')
		// 	{
		// 		free()
		// 		= *str;
		// 	} 
		// 	else if ((*str >= 65 && *str <= (90 - (num % 26))) || (*str >= 97 && *str <= (122 - (num % 26))))
		// 		message[index] = *(str) + (num % 26);
		// 	else if ((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122))
		// 		message[index] = *str - (26 - (num % 26));
		// 	else
		// 		index--;
		// 	index++;
		// 	str++;
		// }
		// message[index] = '\0';
		// return message;
		// while (get_next_line(messageFd, &input) == 1)
		// {
		// 	result = encrypter(input, mover);
		// 	write(encryptFd, result, ft_strlen(result));
		// 	write(encryptFd, "\n", 1);
		// 	free(result);
		// }
	}
	return (0);
}



// what if i could read and write simultaneously by reading a byte, encrpyt it and return the same 
// file...


// char *encrypter(char *str, int num)
// {
// 	unsigned int index;
// 	char *message;
	
// 	index = 0;
// 	if (!(message = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
// 		return (NULL);
// 	while (*str)
// 	{
// 		if (*str == ' ' || *str == '\t' || *str == '\n')
// 			message[index] = *str;
// 		else if ((*str >= 65 && *str <= (90 - (num % 26))) || (*str >= 97 && *str <= (122 - (num % 26))))
// 			message[index] = *(str) + (num % 26);
// 		else if ((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122))
// 			message[index] = *str - (26 - (num % 26));
// 		else
// 			index--;
// 		index++;
// 		str++;
// 	}
// 	message[index] = '\0';
// 	return message;
// }


// int main(int ac, char **av)
// {
// 	char *input;
// 	char *result;
// 	int mover;
	
// 	int messageFd = open(av[1], O_RDONLY);
// 	int encryptFd = open(av[2], O_WRONLY);
// 	scanf("%d", &mover);
// 	while (get_next_line(messageFd, &input) == 1)
// 	{
// 		result = encrypter(input, mover);
// 		write(encryptFd, result, ft_strlen(result));
// 		write(encryptFd, "\n", 1);
// 		free(result);
// 	}
// 	return (0);
// }
