/*
** EPITECH PROJECT, 2019
** rotation
** File description:
** c
*/

#include "include/my.h"

int rotation(float **array, int ac, char **av)
{
    base use;

    if (ac != 5)
        return (84);
    use.m = ((M_PI) * atof(av[4])) / 180;
    printf("Rotation by a %.0tf degree angle\n", atof(av[4]));
        for (int j = 0; j != 3; j++)
            for (int i = 0; i != 3; i++)
                array[j][i] = 0;
    array[0][0] = cos(use.m);
    array[0][1] = -sin(use.m);
    array[2][2] = 1;
    array[1][0] = sin(use.m);
    array[1][1] = cos(use.m);
}
