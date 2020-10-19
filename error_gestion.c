/*
** EPITECH PROJECT, 2019
** error_gestion
** File description:
** error_gestion
*/

#include "include/my.h"


int check_arg(char **argv, int j)
{
    if (argv[j][1] >= 'a' && argv[j][1] <= 'z') {
        if (argv[j][0] == '-')
            return 0;
    }
    return 1;
}

int check_scd_op(char **argv, int j)
{
    if (argv[j] == NULL)
        return 0;
    if (check_arg(argv, j) == 0)
        return 0;
    else
        return 1;
}

int check1(char **argv, int j)
{
    int k;
    int verif2 = 0;
    int i = j + 3;
    j += 1;
    for (j; j < i; j++) {
        if (argv[j] == NULL)
            return 1;
        for (k = 0; argv[j][k] != '\0';) {
            if (argv[j][0] == '-' && verif2 == 0)
                k++;
            verif2++;
            if (argv[j][k] <= '9' || argv[j][k] >= '0')
                k++;
            if (argv[j][k] == '.')
                return 1;
            if (argv[j][k] > '9' || argv[j][k] < '0' && argv[j][k] != '\0')
                return 1;
        }
        k = 0;
        verif2 = 0;
    }
    return (check_scd_op(argv, j));
}


int check2(char **argv, int j)
{
    int k;
    int verif = 0;
    int i = 0;
    j += 1;
    for (i = 0; i != 1; i++) {
        for (k = 0; argv[j][k] != '\0';) {
            if (argv[j][0] == '-' && verif == 0)
                k++;
            verif++;
            if (argv[j][k] <= '9' || argv[j][k] >= '0')
                k++;
            if (argv[j][k] == '.')
                return 1;
            if (argv[j][k] > '9' || argv[j][k] < '0' && argv[j][k] != '\0')
                return 1;
        }
    }
    return (check_scd_op(argv, j + 1));
}

char check_poss(char **argv, int j)
{
    if ((argv[j][1] == 't' || argv[j][1] == 'z') && argv[j][2] == '\0')
        return (check1(argv, j));
    if ((argv[j][1] == 'r' || argv[j][1] == 's') && argv[j][2] == '\0')
        return (check2(argv, j));
    else
        return 1;
}

int error_gestion(int argc, char **argv, int j, int check)
{
    if (check == 0) {
        if (check1(argv, 0) == 1 || argc < 5)
            return 1;
        check++;
    }
    for (j; j < argc; j++) {
        if (check_arg(argv, j) == 0)
            break;
    }
    if (argv[j] != NULL) {
        if (argv[j + 1] == NULL || check_poss(argv, j) == 1)
            return 1;
    }
    if (j < argc) {
        j++;
        error_gestion(argc, argv, j, check);
    }
    else
        return 0;
}
