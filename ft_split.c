/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hounajar <hounajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 20:21:19 by hounajar          #+#    #+#             */
/*   Updated: 2024/11/23 02:43:06 by hounajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char **ft_split(char const *s, char c)
// {
// 	char *str;
// 	int counter;
// 	char **arr;
// 	int index;
// 	int offset;
// 	int ai = 0;

// 	offset = 0;
// 	index = 0;
// 	counter  = 0;
// 	str = (char *)s;
		
// 	// while (*str)
// 	// {
// 	// 	while (*str && *str != c)
// 	// 	{
// 	// 		str++;
// 	// 		n_char++;
// 	// 	}
// 	// 	if (*n_char != c || *n_char == '\0')
// 	// 	{
// 	// 		counter++;
// 	// 	}
// 	// 	n_char++;
// 	// 	str++;
// 	// }
// 	while (*str)
// {
//     if (*str != c) // Found the start of a new word
//     {
//         counter++;
//         while (*str && *str != c) // Skip the rest of the word
//             str++;
//     }
//     else
//         str++; // Skip delimiters
// }

// 		printf("counter :%d", counter);


// 	arr = malloc(sizeof(char*) * (counter + 1));
// 	if (!arr)
// 		return (NULL);

// 	str = (char *)s;
// 	while (str[index])
// 	{
// 		counter = 0;
// 		while (str[index] && str[index] != c)
// 		{
// 			counter++;
// 			index++;
// 		}
// 		arr[ai] = malloc(counter + 1);
// 		if (!arr[ai])
// 			return (NULL);
// 		ft_strlcpy(arr[ai],  str + offset, counter + 1);
// 		ai++;
// 		offset = index +1 ;	
// 		index++;
// 	}
// 	arr[ai] = NULL;
	
	
// 	return arr;
	
// }
// int main()
// {
//     char **p = ft_split("hello everyone test split   parapapara", ' ');



//     int i = 0;
//     while (p[i])
//     {
//         printf("\nString %d: %s\n", i, p[i]);
//         i++;
//     }
// }
char **ft_split(char const *s, char c)
{
    char *str;
    int counter = 0;
    char **arr;
    int ai = 0;

    // Count words
    str = (char *)s;
    while (*str) {
        if (*str != c) {
            counter++;
            while (*str && *str != c)
                str++;
        } else {
            str++;
        }
    }

    // Allocate memory for the array of strings (one extra for NULL)
    arr = malloc(sizeof(char*) * (counter + 1));
    if (!arr)
        return NULL;

    // Split the string and store the substrings
    str = (char *)s;
    while (*str) {
        if (*str != c) {
            int start = str - s; // Start of the word
            int len = 0;
            while (str[len] && str[len] != c)
                len++; // Length of the word

            // Use ft_substr to extract the substring
            arr[ai] = ft_substr(s, start, len);
            if (!arr[ai])
                return NULL;

            ai++;
            str += len; // Move the pointer past the word
        } else {
            str++; // Skip delimiters
        }
    }

    arr[ai] = NULL; // Null-terminate the array
    return arr;
}

int main() {
    char **p = ft_split("hello everyone test split   parapapara", ' ');

    int i = 0;
    while (p[i]) {
        printf("\nString %d: %s\n", i, p[i]);
        i++;
    }

    // Free the memory
    i = 0;
    while (p[i]) {
        free(p[i]);
        i++;
    }
    free(p);

    return 0;
}