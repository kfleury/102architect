/*
** EPITECH PROJECT, 2019
** ex
** File description:
** 3
*/

#include "include/my.h"

int scaling(float **array, int ac, char **av)
{
    base use;

    if (ac != 6)
        return (84);
    use.m = atof(av[4]);
    use.n = atof(av[5]);
    printf("Scaling by factors %.0tf and %.0tf\n", use.m, use.n);
        for (int j = 0; j != 3; j++)
            for (int i = 0; i != 3; i++)
                array[j][i] = 0;
    array[0][0] = use.m;
    array[1][1] = use.n;
    array[2][2] = 1;
}
