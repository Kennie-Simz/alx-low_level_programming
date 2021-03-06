#ifndef _MAIN_H
#define _MAIN_H

char *create_array(unsigned int size, char c);
int _strlength(char *s);
char *_strdup(char *s);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif
