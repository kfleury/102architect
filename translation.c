/*
** EPITECH PROJECT, 2019
** ex
** File description:
** 2
*/

#include "include/my.h"

int translation(float **array, int ac, char **av)
{
    base use;

    if (ac != 6)
        return (84);
    use.m = atof(av[4]);
    use.n = atof(av[5]);
    printf("Translation along vector (%.0tf, %.0tf)\n", use.m, use.n);
        for (int j = 0; j != 3; j++)
            for (int i = 0; i != 3; i++)
                array[j][i] = 0;
    array[0][2] = use.m;
    array[1][2] = use.n;
    array[2][2] = 1;
    array[1][1] = 1;
    array[0][0] = 1;
}
