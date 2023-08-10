#ifndef HEADER_FILE
#define HEADER_FILE

char *_memcpy(char *dest, char *src, unsigned int n);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);
int _isdigit(char c);
size_t _strlen(const char *s);
int _atoi(const char *s)
void print_number(int n);
int main(int argc, char **argv);
int find_length(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);
 
#endif
