#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *b);
unsigned int convert_bin(const char *str, int pow, int index,
unsigned int sum);
int _strlen(const char *str);
int find_valid_index(const char *str, int index, int len);
unsigned int find_pow(unsigned int pow, unsigned int base);

void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif /* MAIN_H */
