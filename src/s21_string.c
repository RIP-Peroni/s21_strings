#include "s21_string.h"

#include "s21_errno.h"

/* Вычисляет длину строки str, не включая завершающий нулевой символ. */
s21_size_t s21_strlen(const char *str) {
  s21_size_t length = 0;
  for (; *(str + length); length++) {
  }
  return length;
}

/* Сравнивает строку, на которую указывает str1, со строкой, на которую
 * указывает str2. */
int s21_strcmp(const char *str1, const char *str2) {
  for (; *str1 && *str1 == *str2; str1++, str2++) {
  }
  return *str1 - *str2;
}

/* Копирует строку, на которую указывает src, в dest. */
char *s21_strcpy(char *dest, const char *src) {
  if (dest == s21_NULL) {
    return s21_NULL;
  }
  char *tmp = dest;
  while ((*dest++ = *src++) != '\0') {
  }
  return tmp;
}

/* Добавляет строку, на которую указывает src, в конец строки, на которую
 * указывает dest. */
char *s21_strcat(char *dest, const char *src) {
  int i, j;
  for (i = 0; dest[i] != '\0'; i++) {
  }
  for (j = 0; src[j] != '\0'; j++) {
    dest[i + j] = src[j];
  }
  dest[i + j] = '\0';
  return dest;
}

/* Выполняет поиск первого вхождения символа c (беззнаковый тип) в строке, на
 * которую указывает аргумент str. */
char *s21_strchr(const char *str, int c) {
  for (;; str++) {
    if (*str == c) return ((char *)str);
    if (*str == '\0') return s21_NULL;
  }
}

/* Находит первое вхождение всей строки needle (не включая завершающий нулевой
 * символ), которая появляется в строке haystack. */
char *s21_strstr(char *haystack, char *needle) {
  while (*haystack) {
    char *tmp1 = haystack;
    char *tmp2 = needle;
    while (*haystack && *tmp2 && *haystack == *tmp2) {
      haystack++;
      tmp2++;
    }
    if (!*tmp2) return tmp1;

    haystack = tmp1 + 1;
  }
  return s21_NULL;
}

/* Копирует до n символов из строки, на которую указывает src, в dest. */
char *s21_strncpy(char *dest, const char *src, s21_size_t n) {
  if (dest == s21_NULL) {
    return s21_NULL;
  }
  char *tmp = dest;
  s21_size_t src_length = s21_strlen(src);
  if (n > src_length) {
    n = src_length;
  } else {
    n = n;
  }
  s21_size_t i = 0;
  for (; i < n && src[i] != '\0'; i++) {
    dest[i] = src[i];
  }
  return dest;
}

/* Добавляет строку, на которую указывает src, в конец строки, на которую
 * указывает dest, длиной до n символов. */
char *s21_strncat(char *dest, const char *src, s21_size_t n) {
  s21_size_t src_length = s21_strlen(src);
  if (n > src_length) {
    n = src_length;
  } else {
    n = n;
  }
  char *tmp = dest;
  dest += s21_strlen(dest);
  s21_strncpy(dest, src, n);
  return tmp;
}

/* Выполняет поиск первого вхождения символа c (беззнаковый тип) в первых n
 * байтах строки, на которую указывает аргумент str. */
void *s21_memchr(const void *str, int c, s21_size_t n) {
  char *tmp = (char *)str;
  char *tmp2 = s21_NULL;
  while (n-- > 0) {
    if (*tmp == c) {
      tmp2 = tmp;
      break;
    }
    tmp++;
  }
  return tmp2;
}

/* Сравнивает первые n байтов str1 и str2. */
int s21_memcmp(const void *str1, const void *str2, s21_size_t n) {
  int cmp = 0;
  char *tmp = (char *)str1;
  char *tmp2 = (char *)str2;
  s21_size_t i;
  for (i = 0; i < n; i++) {
    if (*(tmp + i) != *(tmp2 + i)) {
      cmp = 1;
      break;
    }
  }
  if (cmp == 1) {
    cmp = *(tmp + i) - *(tmp2 + i);
  }
  return cmp;
}

/* Копирует n символов из src в dest. */
void *s21_memcpy(void *dest, const void *src, s21_size_t n) {
  char *tmp = (char *)dest;
  char *dest_ptr = tmp;
  char *src_ptr = (char *)src;
  while (n-- > 0) {
    *tmp++ = *src_ptr++;
  }
  return dest_ptr;
}

/* Еще одна функция для копирования n символов из src в dest. */
void *s21_memmove(void *dest, const void *src, s21_size_t n) {
  return s21_memcpy(dest, src, n);
}

/* Копирует символ c (беззнаковый тип) в первые n символов строки, на которую
 * указывает аргумент str. */
void *s21_memset(void *str, int c, s21_size_t n) {
  unsigned char *tmp = str;
  while (n-- > 0) {
    *tmp++ = c;
  }
  return str;
}

/* Сравнивает не более первых n байтов str1 и str2. */
int s21_strncmp(const char *str1, const char *str2, s21_size_t n) {
  return s21_memcmp(str1, str2, n);
}

/* Вычисляет длину начального сегмента str1, который полностью состоит из
 * символов, не входящих в str2. */
s21_size_t s21_strcspn(const char *str1, const char *str2) {
  s21_size_t no_match_len = 0;
  while (*str1) {
    if (s21_strchr(str2, *str1)) {
      break;
    } else {
      str1++;
      no_match_len++;
    }
  }
  return no_match_len;
}

/* Выполняет поиск во внутреннем массиве номера ошибки errnum и возвращает
 * указатель на строку с сообщением об ошибке. Нужно объявить макросы,
 * содержащие массивы сообщений об ошибке для операционных систем mac и linux.
 * Описания ошибок есть в оригинальной библиотеке. Проверка текущей ОС
 * осуществляется с помощью директив. */
char *s21_strerror(int errnum) {
  static char result[50] = {0};
  if (errnum >= 0 && errnum < NUM_ERRORS) {
    char *err = errors[errnum];
    return err;
  } else {
    s21_sprintf(result, "%s%d", ERR_MSG, errnum);
  }
  return result;
}

/* Находит первый символ в строке str1, который соответствует любому символу,
 * указанному в str2. */
char *s21_strpbrk(const char *str1, const char *str2) {
  str1 = str1 + s21_strcspn(str1, str2);
  if (!s21_strlen(str1)) {
    return s21_NULL;
  } else {
    return (char *)str1;
  }
}

/* Выполняет поиск последнего вхождения символа c (беззнаковый тип) в строке, на
 * которую указывает аргумент str. */

char *s21_strrchr(const char *str, int c) {
  int len = s21_strlen(str);
  char *result = s21_NULL;

  for (int i = len; result == s21_NULL && i >= 0; i--) {
    if (str[i] == c) result = (char *)str + i;
  }
  return (char *)result;
}

/* Вычисляет длину начального сегмента str1, который полностью состоит из
 * символов str2. */
s21_size_t s21_strspn(const char *str1, const char *str2) {
  int match_len = 0;
  while (s21_strchr(str2, *str1) && *str1++ != '\0') {
    match_len++;
  }
  return match_len;
}

/* Разбивает строку str на ряд токенов, разделенных delim. */
char *s21_strtok(char *str, const char *delim) {
  static char *last_ptr = s21_NULL;
  char *start = str ? str : last_ptr;
  if (!start) {
    return s21_NULL;
  }
  start += s21_strspn(start, delim);
  if (*start == '\0') {
    last_ptr = s21_NULL;
    return s21_NULL;
  }
  char *end = start + s21_strcspn(start, delim);
  if (*end == '\0') {
    last_ptr = s21_NULL;
  } else {
    *end = '\0';
    last_ptr = end + 1;
  }
  return start;
}

// Специальные функции обработки строк

void *s21_to_upper(const char *str) {
  char *result = s21_NULL;
  if (str) {
    result = (char *)calloc((s21_strlen(str) + 1), sizeof(char));
    s21_strcpy(result, str);
    for (s21_size_t i = 0; i < s21_strlen(str); i++) {
      if (result[i] >= 97 && result[i] <= 122) {
        result[i] -= 32;
      }
    }
  }
  return result;
}

void *s21_to_lower(const char *str) {
  char *result = s21_NULL;
  if (str) {
    result = (char *)calloc((s21_strlen(str) + 1), sizeof(char));
    s21_strcpy(result, str);
    for (s21_size_t i = 0; i < s21_strlen(str); i++) {
      if (result[i] >= 65 && result[i] <= 90) {
        result[i] += 32;
      }
    }
  }
  return result;
}

void *s21_insert(const char *src, const char *str, size_t start_index) {
  size_t src_len = s21_strlen(src);
  size_t str_len = s21_strlen(str);

  if ((start_index > src_len) || (src_len == 0)) {
    return s21_NULL;
  }
  char *result = malloc((src_len + str_len + 1) * sizeof(char));
  if (result == s21_NULL) {
    return s21_NULL;
  }
  s21_strncpy(result, src, start_index);
  s21_strncpy(result + start_index, str, str_len);
  s21_strncpy(result + start_index + str_len, src + start_index,
              src_len - start_index);
  result[src_len + str_len] = '\0';

  return result;
}

void *s21_trim(const char *src, const char *trim_chars) {
  if (!src) {
    return s21_NULL;
  }
  int l = 0;
  if (s21_strlen(trim_chars) == 0) {
    l = 1;
  }
  int len = s21_strlen(src);
  int start = 0, end = len;
  while (start < end &&
         s21_strchr((l == 0) ? trim_chars : " \n\t\r", src[start])) {
    start++;
  }
  while (end > start &&
         s21_strchr((l == 0) ? trim_chars : " \n\t\r", src[end - 1])) {
    end--;
  }
  char *result = malloc(end - start + 1);
  if (!result) {
    return s21_NULL;
  }
  s21_strncpy(result, src + start, end - start);
  result[end - start] = '\0';

  return result;
}
