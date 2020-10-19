/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** atoi
*/

unsigned long long my_getnbr(char const *str)
{
    unsigned long long count = 0;
    unsigned long long negativ = 1;
    unsigned long long nb = 0;

    for (; str[count] < '0' || str[count] > '9'; count++) {
        if (str[count] == '-')
            negativ = -negativ;
    }
    for (; str[count] >= '0' && str[count] <= '9'; count++) {
        nb *= 10;
        nb += str[count] - '0';
    }
    return (nb * negativ);
}
