#ifndef SRC_S21_STRING_H_
#define SRC_S21_STRING_H_

#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

#define s21_NULL ((void *)0)
typedef unsigned long s21_size_t;

#define MAX_LEN 1024
#define ZEROPAD (1 << 0)   /* Pad with zero */
#define SIGN (1 << 1)      /* Unsigned/signed long */
#define PLUS (1 << 2)      /* Show plus */
#define SPACE (1 << 3)     /* Spacer */
#define LEFT (1 << 4)      /* Left justified */
#define HEX_PREP (1 << 5)  /* 0x */
#define UPPERCASE (1 << 6) /* 'ABCDEF' */
#define POINT_NO (1 << 7)  /* No float '.' */
#define is_digit(c) ((c) >= '0' && (c) <= '9')

// sprintf
int float_print(int flags, char *buffer, int field_width, int len,
                int min_zero);
static int s21_skip_atoi(const char *s);
int int_len(int num);
int s21_number(char *str, long num, int base, int size, int precision,
                       int type);
int float_to_string(double num, char *str, int precision, int stop_on_zeroes,
                    int flags);
void reverse(char *str, int length);
int intToStr(long int num, char *str, int base);
int s21_sprintf(char *str, const char *format, ...);
s21_size_t s21_strnlen(const char *s, s21_size_t max_len);

s21_size_t s21_strlen(const char *str);
/* Вычисляет длину строки str, не включая завершающий нулевой символ. */

int s21_strcmp(const char *str1, const char *str2);
/* Сравнивает строку, на которую указывает str1, со строкой, на которую
 * указывает str2. */

char *s21_strcpy(char *strDest, const char *strSrc);
/* Копирует строку, на которую указывает src, в dest. */

char *s21_strcat(char *strDest, const char *strSrc);
/* Добавляет строку, на которую указывает src, в конец строки, на которую
 * указывает dest. */

char *s21_strchr(const char *str, int chr);
/* Выполняет поиск первого вхождения символа c (беззнаковый тип) в строке, на
 * которую указывает аргумент str. */

char *s21_strstr(char *haystack, char *needle);
/* Находит первое вхождение всей строки needle (не включая завершающий нулевой
 * символ), которая появляется в строке haystack. */

char *s21_strncpy(char *dest, const char *src, s21_size_t n);
/* Копирует до n символов из строки, на которую указывает src, в dest. */

char *s21_strncat(char *dest, const char *src, s21_size_t n);
/* Добавляет строку, на которую указывает src, в конец строки, на которую
 * указывает dest, длиной до n символов. */

void *s21_memchr(const void *str, int c, s21_size_t n);
/* Выполняет поиск первого вхождения символа c (беззнаковый тип) в первых n
 * байтах строки, на которую указывает аргумент str. */

int s21_memcmp(const void *str1, const void *str2, s21_size_t n);
/* Сравнивает первые n байтов str1 и str2. */

void *s21_memcpy(void *dest, const void *src, s21_size_t n);
/* Копирует n символов из src в dest. */

void *s21_memmove(void *dest, const void *src, s21_size_t n);
/* Еще одна функция для копирования n символов из src в dest. */

void *s21_memset(void *str, int c, s21_size_t n);
/* Копирует символ c (беззнаковый тип) в первые n символов строки, на которую
 * указывает аргумент str. */

int s21_strncmp(const char *str1, const char *str2, s21_size_t n);
/* Сравнивает не более первых n байтов str1 и str2. */

s21_size_t s21_strcspn(const char *str1, const char *str2);
/* Вычисляет длину начального сегмента str1, который полностью состоит из
 * символов, не входящих в str2. */

char *s21_strerror(int errnum);
/* Выполняет поиск во внутреннем массиве номера ошибки errnum и возвращает
 * указатель на строку с сообщением об ошибке. Нужно объявить макросы,
 * содержащие массивы сообщений об ошибке для операционных систем mac и linux.
 * Описания ошибок есть в оригинальной библиотеке. Проверка текущей ОС
 * осуществляется с помощью директив. */

char *s21_strpbrk(const char *str1, const char *str2);
/* Находит первый символ в строке str1, который соответствует любому символу,
 * указанному в str2. */

char *s21_strrchr(const char *str, int c);
/* Выполняет поиск последнего вхождения символа c (беззнаковый тип) в строке, на
 * которую указывает аргумент str. */

s21_size_t s21_strspn(const char *str1, const char *str2);
/* Вычисляет длину начального сегмента str1, который полностью состоит из
 * символов str2. */

char *s21_strtok(char *str, const char *delim);
/* Разбивает строку str на ряд токенов, разделенных delim. */

void *s21_to_upper(const char *str);
/* Возвращает копию строки (str), преобразованной в верхний регистр. В случае
 * какой-либо ошибки следует вернуть значение NULL */

void *s21_to_lower(const char *str);
/* Возвращает копию строки (str), преобразованной в нижний регистр. В случае
 * какой-либо ошибки следует вернуть значение NULL */

void *s21_insert(const char *src, const char *str, s21_size_t start_index);
/* Возвращает новую строку, в которой указанная строка (str) вставлена в
 * указанную позицию (start_index) в данной строке (src). В случае какой-либо
 * ошибки следует вернуть значение NULL */

void *s21_trim(const char *src, const char *trim_chars);
/* Возвращает новую строку, в которой удаляются все начальные и конечные
 * вхождения набора заданных символов (trim_chars) из данной строки (src). В
 * случае какой-либо ошибки следует вернуть значение NULL */

#endif  // SRC_S21_STRING_H_
