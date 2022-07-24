#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void simple_print_buffer(char *buffer, unsigned int size);
int main(void);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void print_grid(int **grid, int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
void print_tab(char **tab);
int word_len(char *str);
int count_words(char *str);


#endif
