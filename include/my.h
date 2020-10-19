/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** header
*/

#ifndef MY_H_
#define MY_H_

#include <math.h>
#include <ncurses.h>
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <dirent.h>

typedef struct {
    float x;
    float y;
    float m;
    float n;
    float v1;
    float v2;
}base;

int my_strlen(char const *str);
int my_putstr(char const *str);
void my_putchar(char c);
int my_strlen(char const *str);
void my_swap(char *a, char *b);
char *my_revstr(char *str);
unsigned long long my_getnbr(char const *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strdup(char const *src);
void my_putnbr(int nbr);
char *my_strcpy(char *dest, char const *src);
void display(float **array);
int error_gestion(int argc, char **argv, int j, int check);
int translation(float **array, int ac, char **av);
int scaling(float **array, int ac, char **av);
int reflection(float **array, int ac, char **av);
int rotation(float **array, int ac, char **av);
void display(float **array);
int error_handling(int ac, char **av);
char *nbr_of_arg(int ac, char **av);
#endif
