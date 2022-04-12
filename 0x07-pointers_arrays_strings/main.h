#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);

char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
unsigned int _strspn(char *s, char *accept);
void print_diagsums(int *a, int size);
char *_strchr(char *s, char c);
char *cap_string(char *s);
char *leet(char *s);
char *rot13(char *s);
void print_chessboard(char (*a)[8]);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void set_string(char **s, char *to);

#endif
