/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** compare the lenght of two strings
*/

//#include "../../include/struct.h"
#include "../../include/my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] > s2[i])
            return 1;
        if (s2[i] > s1[i])
            return -1;
        i++;
    }
    return 0;
}
