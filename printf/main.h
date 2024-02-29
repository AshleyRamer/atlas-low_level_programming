#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <math.h>
#include <limits.h>

/** Insert prototypes for printf project below */
int _strlen(char *s);
int printf(const char *format, ...);
int _putchar(char c);
char *strcat(char *destination, const char *source);
size_t strlen(const char *str);
char* strcpy(char* destination, const char* source);

#endif
