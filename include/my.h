/*
** EPITECH PROJECT, 2022
** C Pool
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_
    #include <stdarg.h>
    #include "my_struct.h"

int my_printf(const char *format, ...);
void init_struct(my_struct_t *mem);

/*      BONUS           */
int print_spaces(va_list list, my_struct_t *mem, const char *format);
int print_array(va_list list, my_struct_t *mem);

/*      CHECK FLAG      */
void check_basic(char cflag, va_list list, my_struct_t *mem);
void check_float(char cflag, va_list list, my_struct_t *mem);
int check_long(char cflags, va_list list, my_struct_t *mem);
void check_format(const char *format, va_list list, my_struct_t *mem);

/*      FORMAT          */
int print_utils(va_list list, my_struct_t *mem, const char *format);
int print_hastag(va_list list, my_struct_t *mem, const char *format);

/*      PRINT ALL       */
int print_nbr(va_list list, my_struct_t *mem);
int print_octal(va_list list, my_struct_t *mem);
int print_unsigned(va_list list, my_struct_t *mem);
int print_hexa(va_list list, my_struct_t *mem);
int print_hexa_maj(va_list list, my_struct_t *mem);
int print_binaire(va_list list, my_struct_t *mem);
int print_str(va_list list, my_struct_t *mem);
int print_str_maj(va_list list, my_struct_t *mem);
int print_char(va_list list, my_struct_t *mem);
int print_modulo(va_list list, my_struct_t *mem);
int print_len_count(va_list list, my_struct_t *mem);
int print_pointer(va_list list, my_struct_t *mem);
int print_array(va_list list, my_struct_t *mem);

/*      PRINT FLOAT       */
int print_float_basic(va_list list, my_struct_t *mem);
int print_float(va_list list, int p, my_struct_t *mem);
int print_float_hexa(va_list list);

/*      PRINT LONG       */
int print_lnbr(va_list list, my_struct_t *mem);
int print_lunsigned(va_list list, my_struct_t *mem);
int print_lbinaire(va_list list, my_struct_t *mem);
int print_lhexa_maj(va_list list, my_struct_t *mem);
int print_lhexa(va_list list, my_struct_t *mem);
int print_loctal(va_list list, my_struct_t *mem);

/*      MY LIB         */
int my_compute_power_rec(int nb, int p);
void my_putchar(char c);
int my_strlen(char const *str);
int my_put_nbr_base(int nbr, char const *base);
int my_put_nbr_long_base(unsigned long int nb, char const *base);
int my_put_nbr(int nb);
int my_put_long_nbr(long int nb);
int my_intlen(int nb);
int my_intlen_long(long int nb);
int my_getnbr(char const *str);
int my_putstr(char *c);
char *my_strcpy(char *dest, char const *src);
char *my_int_to_array(int nb);
char *my_revstr(char *str);
int my_show_word_array(char * const *tab);

#endif /* !MY_H_ */
