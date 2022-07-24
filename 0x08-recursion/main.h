#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Auth: Emezi Uchechi David
 * Desc: Header file containing declarations for all 
 * functions used in 0x02-functions_nested_loops dire
 * ctory
 */

int _putchar(char ch);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int n);
int print_last_digit(int n);
void jack_bauer(void);
void times_table(void);
int add(int a, int b);
void print_to_98(int);
void print_times_table(int);
#endif
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);
int largest_number(int, int, int);

#endif /* MAIN_H */
#ifndef MAIN_H
#define MAIN_H

int _putchar(char);
int _isupper(char c);
int _isdigit(char);
int mul(int, int);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int);
void print_diagonal(int);
void print_square(int);
void print_triangle(int);
#endif
#ifndef MAIN_H
#define MAIN_H

int _putchar(char);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *c);
void _puts(char *str);
void print_rev(char *str);
void rev_string(char *str);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int);
char *_strcpy(char *dest, char *src);
#endif
#ifndef MAIN_H
#define MAIN_H

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);

#endif
#ifndef MAIN_H
#define MAIN_H

int _putchar(char );
char *_memset (char *, char, unsigned int n);
char *_memcpy (char *, char *, unsigned int n);
char *_strchr (char *, char);
unsigned int _strspn (char *, char *);
char *_strpbrk (char *, char *);
char *_strstr (char *, char *);
void print_chessboard (char (*a)[8]);
void print_diagsums (int *, int);


#endif
