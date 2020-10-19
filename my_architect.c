/*
** EPITECH PROJECT, 2019
** 102
** File description:
** architect
*/
#include "include/my.h"

typedef struct tpf{
    int (*tpf)(float**, int, char**);
    char flag;
}tabpf;

tabpf tab[4] = {
    {translation, 't'},
    {scaling, 'z'},
    {rotation, 'r'},
    {reflection, 's'},
};

void display(float **array)
{
    for (int j = 0; j != 3; j++) {
        for (int i = 0; i != 3; i++) {
            if (i == 2) {
                printf("%.2tf", array[j][i]);
                break;
            }
            if (array[j][i] < 0)
                printf("%.2tf   ", array[j][i]);
            else
                printf("%.2tf    ", array[j][i]);
        }
        printf("\n");
    }
}

int main(int ac, char **av)
{
    int j = 1, check = 0;
    int error = error_gestion(ac, av, j, check);
    if (error == 1)
        return 84;
    base use;
    int i = 0;
    char *str = "tzrs";
    use.x = atof(av[1]);
    use.y = atof(av[2]);
    for (; str[i]; i++)
        if (av[3][1] == str[i])
            break;
    float **array = malloc(sizeof(int *) * 3);
    for (int i = 0; i != 3; i++)
        array[i] = malloc(sizeof(int) * 3);
    tab[i].tpf(array, ac, av);
    use.v1 = array[0][0] * use.x + array[0][1] * use.y + array[0][2] * 1;
    use.v2 = array[1][0] * use.x + array[1][1] * use.y + array[1][2] * 1;
    display(array);
    printf("(%.2tf, %.2tf) => (%.2tf, %.2tf)\n", use.x, use.y, use.v1, use.v2);
    return (0);
}
