#include "test_main.h"

START_TEST(strlen_test1) {
  char str[64] = "0";
  ck_assert_int_eq(strlen(str), s21_strlen(str));
}
END_TEST

START_TEST(strlen_test2) {
  char str[64] = "abcd";
  ck_assert_int_eq(strlen(str), s21_strlen(str));
}
END_TEST

START_TEST(strlen_test3) {
  char str[64] = "";
  ck_assert_int_eq(strlen(str), s21_strlen(str));
}
END_TEST

START_TEST(strlen_test4) {
  char str[64] = "0123ABCD";
  ck_assert_int_eq(strlen(str), s21_strlen(str));
}
END_TEST

START_TEST(strlen_test5) {
  char str[64] = "example\t";
  ck_assert_int_eq(strlen(str), s21_strlen(str));
}
END_TEST

START_TEST(strlen_test6) {
  char str[64] = "example\n";
  ck_assert_int_eq(strlen(str), s21_strlen(str));
}
END_TEST

START_TEST(strlen_test7) {
  char str[64] = "\n";
  ck_assert_int_eq(strlen(str), s21_strlen(str));
}
END_TEST

START_TEST(strlen_test8) {
  char str[64] = "\0";
  ck_assert_int_eq(strlen(str), s21_strlen(str));
}
END_TEST

START_TEST(strlen_test9) {
  char str[64] = "!@#$%^&*()_+";
  ck_assert_int_eq(strlen(str), s21_strlen(str));
}
END_TEST

START_TEST(strlen_test10) {
  char str[64] = "\\\1";
  ck_assert_int_eq(strlen(str), s21_strlen(str));
}
END_TEST

START_TEST(strcmp_test1) {
  char str1[64] = "example test";
  char str2[64] = "example test";
  ck_assert_int_eq(strcmp(str1, str2), s21_strcmp(str1, str2));
}
END_TEST

START_TEST(strcmp_test2) {
  char str1[64] = "example test2";
  char str2[64] = "example test";
  ck_assert_int_eq(strcmp(str1, str2), s21_strcmp(str1, str2));
}
END_TEST

START_TEST(strcmp_test3) {
  char str1[64] = "example test";
  char str2[64] = "exampletest";
  ck_assert_int_eq(strcmp(str1, str2), s21_strcmp(str1, str2));
}
END_TEST

START_TEST(strcmp_test4) {
  char str1[64] = "example test";
  char str2[64] = "example\ttest";
  ck_assert_int_eq(strcmp(str1, str2), s21_strcmp(str1, str2));
}
END_TEST

START_TEST(strcmp_test5) {
  char str1[64] = "example test";
  char str2[64] = "example\ntest";
  ck_assert_int_eq(strcmp(str1, str2), s21_strcmp(str1, str2));
}
END_TEST

START_TEST(strcmp_test6) {
  char str1[64] = "example test";
  char str2[64] = "\0";
  ck_assert_int_eq(strcmp(str1, str2), s21_strcmp(str1, str2));
}
END_TEST

START_TEST(strcmp_test7) {
  char str1[64] = "ABCD";
  char str2[64] = "abcd";
  ck_assert_int_eq(strcmp(str1, str2), s21_strcmp(str1, str2));
}
END_TEST

START_TEST(strcmp_test8) {
  char str1[64] = "012abc";
  char str2[64] = "210CBA";
  ck_assert_int_eq(strcmp(str1, str2), s21_strcmp(str1, str2));
}
END_TEST

START_TEST(strcmp_test9) {
  char str1[64] = "example test";
  char str2[64] = "";
  ck_assert_int_eq(strcmp(str1, str2), s21_strcmp(str1, str2));
}
END_TEST

START_TEST(strcmp_test10) {
  char str1[64] = "example";
  char str2[64] = "exampel";
  ck_assert_int_eq(strcmp(str1, str2), s21_strcmp(str1, str2));
}
END_TEST

START_TEST(strcpy_test1) {
  char str1[64] = "example test";
  char str2[64] = "example test";
  ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
}
END_TEST

START_TEST(strcpy_test2) {
  char str1[64] = "example test2";
  char str2[64] = "example test";
  ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
}
END_TEST

START_TEST(strcpy_test3) {
  char str1[64] = "example test";
  char str2[64] = "exampletest";
  ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
}
END_TEST

START_TEST(strcpy_test4) {
  char str1[64] = "example test";
  char str2[64] = "example\ttest";
  ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
}
END_TEST

START_TEST(strcpy_test5) {
  char str1[64] = "example test";
  char str2[64] = "example\ntest";
  ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
}
END_TEST

START_TEST(strcpy_test6) {
  char str1[64] = "example test";
  char str2[64] = "\0";
  ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
}
END_TEST

START_TEST(strcpy_test7) {
  char str1[64] = "ABCD";
  char str2[64] = "abcd";
  ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
}
END_TEST

START_TEST(strcpy_test8) {
  char str1[64] = "012abc";
  char str2[64] = "210CBA";
  ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
}
END_TEST

START_TEST(strcpy_test9) {
  char str1[64] = "";
  char str2[64] = "";
  ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
}
END_TEST

START_TEST(strcpy_test10) {
  char str1[64] = "example";
  char str2[64] = "exampel";
  ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
}
END_TEST

START_TEST(strcpy_test11) {
  char str1[64] = "";
  char str2[64] = "example test";
  ck_assert_str_eq(strcpy(str1, str2), s21_strcpy(str1, str2));
}
END_TEST

START_TEST(strcat_test1) {
  char str1[64] = "example test";
  char str2[64] = "example test";
  ck_assert_str_eq(strcat(str1, str2), s21_strcat(str1, str2));
}
END_TEST

START_TEST(strcat_test2) {
  char str1[64] = "example test2";
  char str2[64] = "example test";
  ck_assert_str_eq(strcat(str1, str2), s21_strcat(str1, str2));
}
END_TEST

START_TEST(strcat_test3) {
  char str1[64] = "example test";
  char str2[64] = "exampletest";
  ck_assert_str_eq(strcat(str1, str2), s21_strcat(str1, str2));
}
END_TEST

START_TEST(strcat_test4) {
  char str1[64] = "example test";
  char str2[64] = "example\ttest";
  ck_assert_str_eq(strcat(str1, str2), s21_strcat(str1, str2));
}
END_TEST

START_TEST(strcat_test5) {
  char str1[64] = "example test";
  char str2[64] = "example\ntest";
  ck_assert_str_eq(strcat(str1, str2), s21_strcat(str1, str2));
}
END_TEST

START_TEST(strcat_test6) {
  char str1[64] = "example test";
  char str2[64] = "\0";
  ck_assert_str_eq(strcat(str1, str2), s21_strcat(str1, str2));
}
END_TEST

START_TEST(strcat_test7) {
  char str1[64] = "ABCD";
  char str2[64] = "abcd";
  ck_assert_str_eq(strcat(str1, str2), s21_strcat(str1, str2));
}
END_TEST

START_TEST(strcat_test8) {
  char str1[64] = "012abc";
  char str2[64] = "210CBA";
  ck_assert_str_eq(strcat(str1, str2), s21_strcat(str1, str2));
}
END_TEST

START_TEST(strcat_test9) {
  char str1[64] = "example test";
  char str2[64] = "";
  ck_assert_str_eq(strcat(str1, str2), s21_strcat(str1, str2));
}
END_TEST

START_TEST(strcat_test10) {
  char str1[64] = "example";
  char str2[64] = "exampel";
  ck_assert_str_eq(strcat(str1, str2), s21_strcat(str1, str2));
}
END_TEST

START_TEST(strncpy_test1) {
  char str1[64] = "example test";
  char str2[64] = "example test";
  s21_size_t n = 5;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str1, str2, n));
}
END_TEST

START_TEST(strncpy_test2) {
  char str1[64] = "example test2";
  char str2[64] = "example test";
  s21_size_t n = 10;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str1, str2, n));
}
END_TEST

START_TEST(strncpy_test3) {
  char str1[64] = "example test";
  char str2[64] = "exampletest";
  s21_size_t n = 12;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str1, str2, n));
}
END_TEST

START_TEST(strncpy_test4) {
  char str1[64] = "example test";
  char str2[64] = "example\ttest";
  s21_size_t n = 0;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str1, str2, n));
}
END_TEST

START_TEST(strncpy_test5) {
  char str1[64] = "example test";
  char str2[64] = "example\ntest";
  s21_size_t n = 50;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str1, str2, n));
}
END_TEST

START_TEST(strncpy_test6) {
  char str1[64] = "example test";
  char str2[64] = "\0";
  s21_size_t n = 5;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str1, str2, n));
}
END_TEST

START_TEST(strncpy_test7) {
  char str1[64] = "ABCD";
  char str2[64] = "abcd";
  s21_size_t n = 2;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str1, str2, n));
}
END_TEST

START_TEST(strncpy_test8) {
  char str1[64] = "012abc";
  char str2[64] = "210CBA";
  s21_size_t n = 1;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str1, str2, n));
}
END_TEST

START_TEST(strncpy_test9) {
  char str1[64] = "example test";
  char str2[64] = "";
  s21_size_t n = 5;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str1, str2, n));
}
END_TEST

START_TEST(strncpy_test10) {
  char str1[64] = "example";
  char str2[64] = "exampel";
  s21_size_t n = 30;
  ck_assert_str_eq(strncpy(str1, str2, n), s21_strncpy(str1, str2, n));
}
END_TEST

START_TEST(strncat_test1) {
  char str1[64] = "example test";
  char str2[64] = "example test";
  s21_size_t n = 5;
  ck_assert_str_eq(strncat(str1, str2, n), s21_strncat(str1, str2, n));
}
END_TEST

START_TEST(strncat_test2) {
  char str1[64] = "example test2";
  char str2[64] = "example test";
  s21_size_t n = 0;
  ck_assert_str_eq(strncat(str1, str2, n), s21_strncat(str1, str2, n));
}
END_TEST

START_TEST(strncat_test3) {
  char str1[64] = "example test";
  char str2[64] = "exampletest";
  s21_size_t n = 10;
  ck_assert_str_eq(strncat(str1, str2, n), s21_strncat(str1, str2, n));
}
END_TEST

START_TEST(strncat_test4) {
  char str1[64] = "example test";
  char str2[64] = "example\ttest";
  s21_size_t n = 8;
  ck_assert_str_eq(strncat(str1, str2, n), s21_strncat(str1, str2, n));
}
END_TEST

START_TEST(strncat_test5) {
  char str1[64] = "example test";
  char str2[64] = "example\ntest";
  s21_size_t n = 50;
  ck_assert_str_eq(strncat(str1, str2, n), s21_strncat(str1, str2, n));
}
END_TEST

START_TEST(strncat_test6) {
  char str1[64] = "example test";
  char str2[64] = "\0";
  s21_size_t n = 1;
  ck_assert_str_eq(strncat(str1, str2, n), s21_strncat(str1, str2, n));
}
END_TEST

START_TEST(strncat_test7) {
  char str1[64] = "ABCD";
  char str2[64] = "abcd";
  s21_size_t n = 2;
  ck_assert_str_eq(strncat(str1, str2, n), s21_strncat(str1, str2, n));
}
END_TEST

START_TEST(strncat_test8) {
  char str1[64] = "012abc";
  char str2[64] = "210CBA";
  s21_size_t n = 3;
  ck_assert_str_eq(strncat(str1, str2, n), s21_strncat(str1, str2, n));
}
END_TEST

START_TEST(strncat_test9) {
  char str1[64] = "example test";
  char str2[64] = "";
  s21_size_t n = 5;
  ck_assert_str_eq(strncat(str1, str2, n), s21_strncat(str1, str2, n));
}
END_TEST

START_TEST(strncat_test10) {
  char str1[64] = "example";
  char str2[64] = "exampel";
  s21_size_t n = 5;
  ck_assert_str_eq(strncat(str1, str2, n), s21_strncat(str1, str2, n));
}
END_TEST

START_TEST(memchr_test1) {
  char str[64] = "QwertA";
  ck_assert_ptr_eq(memchr(str, 81, 5), s21_memchr(str, 81, 5));
}
END_TEST

START_TEST(memchr_test2) {
  char str[64] = "QwertA";
  ck_assert_ptr_eq(memchr(str, 65, 2), s21_memchr(str, 65, 2));
}
END_TEST

START_TEST(memchr_test3) {
  char str[64] = "12345";
  ck_assert_ptr_eq(memchr(str, '3', 1), s21_memchr(str, '3', 1));
}
END_TEST

START_TEST(memchr_test4) {
  char str[64] = "12345";
  ck_assert_ptr_eq(memchr(str, '5', 6), s21_memchr(str, '5', 6));
}
END_TEST

START_TEST(memchr_test5) {
  char str[64] = "QwertA";
  ck_assert_ptr_eq(memchr(str, 'w', 4), s21_memchr(str, 'w', 6));
}
END_TEST

START_TEST(memchr_test6) {
  char str[64] = "123 45";
  ck_assert_ptr_eq(memchr(str, ' ', 4), s21_memchr(str, ' ', 4));
}
END_TEST

START_TEST(memchr_test7) {
  char str[64] = "123!45";
  ck_assert_ptr_eq(memchr(str, '!', 1), s21_memchr(str, '!', 1));
}
END_TEST

START_TEST(memchr_test8) {
  char str[64] = "123/45";
  ck_assert_ptr_eq(memchr(str, '/', 3), s21_memchr(str, '/', 3));
}
END_TEST

START_TEST(memchr_test9) {
  char str[64] = "123\n45";
  ck_assert_ptr_eq(memchr(str, '\n', 4), s21_memchr(str, '\n', 4));
}
END_TEST

START_TEST(memchr_test10) {
  char str[64] = "WOW\012345";
  ck_assert_ptr_eq(memchr(str, '\0', 6), s21_memchr(str, '\0', 6));
}
END_TEST

START_TEST(memcmp_test1) {
  char str1[64] = "what cooler than being cool";
  char str2[64] = "what cooler than being cool";
  ck_assert_int_eq(memcmp(str1, str2, 20), s21_memcmp(str1, str2, 20));
}
END_TEST

START_TEST(memcmp_test2) {
  char str1[64] = "what cooler than being cool";
  char str2[64] = "whatcooler than being cool";
  ck_assert_int_eq(memcmp(str1, str2, 5), s21_memcmp(str1, str2, 5));
}
END_TEST

START_TEST(memcmp_test3) {
  char str1[64] = "what  cooler than being cool";
  char str2[64] = "what cooler than being cool";
  ck_assert_int_eq(memcmp(str1, str2, 7), s21_memcmp(str1, str2, 7));
}
END_TEST

START_TEST(memcmp_test4) {
  char str1[64] = "?what cooler than being cool";
  char str2[64] = "what cooler than being cool";
  ck_assert_int_eq(memcmp(str1, str2, 5), s21_memcmp(str1, str2, 5));
}
END_TEST

START_TEST(memcmp_test5) {
  char str1[64] = "what cooler than being cool";
  char str2[64] = "what cooler than being cool";
  ck_assert_int_eq(memcmp(str1, str2, 5), s21_memcmp(str1, str2, 5));
}
END_TEST

START_TEST(memcmp_test6) {
  char str1[64] = "what cooler\0 than being cool";
  char str2[64] = "what cooler than being cool";
  ck_assert_int_eq(memcmp(str1, str2, 10), s21_memcmp(str1, str2, 10));
}
END_TEST

START_TEST(memcmp_test7) {
  char str1[64] = "what * than being cool";
  char str2[64] = "what ** than being cool";
  ck_assert_int_eq(memcmp(str1, str2, 10), s21_memcmp(str1, str2, 10));
}
END_TEST

START_TEST(memcmp_test8) {
  char str1[64] = "what cooler than being cool";
  char str2[64] = "what cooler than being cool?";
  ck_assert_int_eq(memcmp(str1, str2, 28), s21_memcmp(str1, str2, 28));
}
END_TEST

START_TEST(memcmp_test9) {
  char str1[64] = "what cooler than being cool";
  char str2[64] = "what123";
  ck_assert_int_eq(memcmp(str1, str2, 5), s21_memcmp(str1, str2, 5));
}
END_TEST

START_TEST(memcmp_test10) {
  char str1[64] = "what cooler/n than being cool";
  char str2[64] = "what cooler than being cool";
  ck_assert_int_eq(memcmp(str1, str2, 20), s21_memcmp(str1, str2, 20));
}
END_TEST

START_TEST(memcpy_test1) {
  char str1[64] = "what ";
  char str2[64] = "cooler";
  ck_assert_ptr_eq(memcpy(str1, str2, 3), s21_memcpy(str1, str2, 3));
}
END_TEST

START_TEST(memcpy_test2) {
  char str1[64] = "what ";
  char str2[64] = "cooler";
  ck_assert_ptr_eq(memcpy(str1, str2, 0), s21_memcpy(str1, str2, 0));
}
END_TEST

START_TEST(memcpy_test3) {
  char str1[64] = "what";
  char str2[64] = "?!/";
  ck_assert_ptr_eq(memcpy(str1, str2, 1), s21_memcpy(str1, str2, 1));
}
END_TEST

START_TEST(memcpy_test4) {
  char str1[64] = "what";
  char str2[64] = "  ";
  ck_assert_ptr_eq(memcpy(str1, str2, 1), s21_memcpy(str1, str2, 1));
}
END_TEST

START_TEST(memcpy_test5) {
  char str1[64] = "what";
  char str2[64] = "?!/";
  ck_assert_ptr_eq(memcpy(str1, str2, 1), s21_memcpy(str1, str2, 1));
}
END_TEST

START_TEST(memcpy_test6) {
  char str1[64] = "what";
  char str2[64] = "?!/";
  ck_assert_ptr_eq(memcpy(str1, str2, 2), s21_memcpy(str1, str2, 2));
}
END_TEST

START_TEST(memcpy_test7) {
  char str1[64] = "";
  char str2[64] = "what?!/";
  ck_assert_ptr_eq(memcpy(str1, str2, 5), s21_memcpy(str1, str2, 5));
}
END_TEST

START_TEST(memcpy_test8) {
  char str1[64] = "";
  char str2[64] = "what?!/";
  ck_assert_ptr_eq(memcpy(str1, str2, 2 * 4), s21_memcpy(str1, str2, 2 * 4));
}
END_TEST

START_TEST(memcpy_test9) {
  char str1[64] = "";
  char str2[64] = "what?!/";
  ck_assert_ptr_eq(memcpy(str1, str2, 5), s21_memcpy(str1, str2, 5));
}
END_TEST

START_TEST(memcpy_test10) {
  char str1[64] = "\0";
  char str2[64] = "what?!/";
  ck_assert_ptr_eq(memcpy(str1, str2, 3), s21_memcpy(str1, str2, 3));
}
END_TEST

//___________ void *s21_memmove

START_TEST(memmove_test1) {
  char str1[64] = "\0";
  char str2[64] = "what?!/";
  ck_assert_ptr_eq(memmove(str1, str2, 3), s21_memmove(str1, str2, 3));
}
END_TEST

START_TEST(memmove_test2) {
  char str1[64] = "what ";
  char str2[64] = "cooler";
  ck_assert_ptr_eq(memmove(str1, str2, 0), s21_memmove(str1, str2, 0));
}
END_TEST

START_TEST(memmove_test3) {
  char str1[64] = "what";
  char str2[64] = "?!/";
  ck_assert_ptr_eq(memmove(str1, str2, 1), s21_memmove(str1, str2, 1));
}
END_TEST

START_TEST(memmove_test4) {
  char str1[64] = "what";
  char str2[64] = "  ";
  ck_assert_ptr_eq(memmove(str1, str2, 1), s21_memmove(str1, str2, 1));
}
END_TEST

START_TEST(memmove_test5) {
  char str1[64] = "what";
  char str2[64] = "?!/";
  ck_assert_ptr_eq(memmove(str1, str2, 1), s21_memmove(str1, str2, 1));
}
END_TEST

START_TEST(memmove_test6) {
  char str1[64] = "what";
  char str2[64] = "?!/";
  ck_assert_ptr_eq(memmove(str1, str2, 2), s21_memmove(str1, str2, 2));
}
END_TEST

START_TEST(memmove_test7) {
  char str1[64] = "";
  char str2[64] = "what?!/";
  ck_assert_ptr_eq(memmove(str1, str2, 5), s21_memmove(str1, str2, 5));
}
END_TEST

START_TEST(memmove_test8) {
  char str1[64] = "";
  char str2[64] = "what?!/";
  ck_assert_ptr_eq(memmove(str1, str2, 2 * 4), s21_memmove(str1, str2, 2 * 4));
}
END_TEST

START_TEST(memmove_test9) {
  char str1[64] = "";
  char str2[64] = "what?!/";
  ck_assert_ptr_eq(memmove(str1, str2, 5), s21_memmove(str1, str2, 5));
}
END_TEST

START_TEST(memmove_test10) {
  char str1[64] = "\0";
  char str2[64] = "what?!/";
  ck_assert_ptr_eq(memmove(str1, str2, 3), s21_memmove(str1, str2, 3));
}
END_TEST

//___________ void *s21_memset

START_TEST(memset_test1) {
  char str[64] = "what";
  ck_assert_ptr_eq(memset(str, '0', 3), s21_memset(str, '0', 3));
}
END_TEST

START_TEST(memset_test2) {
  char str[64] = "what";
  ck_assert_ptr_eq(memset(str, '\n', 3), s21_memset(str, '\n', 3));
}
END_TEST

START_TEST(memset_test3) {
  char str[64] = "what";
  ck_assert_ptr_eq(memset(str, 't', 2), s21_memset(str, 't', 2));
}
END_TEST

START_TEST(memset_test4) {
  char str[64] = "wh\nat";
  ck_assert_ptr_eq(memset(str, '0', 3), s21_memset(str, '0', 3));
}
END_TEST

START_TEST(memset_test5) {
  char str[64] = "what";
  ck_assert_ptr_eq(memset(str, '!', 5), s21_memset(str, '!', 5));
}
END_TEST

START_TEST(memset_test6) {
  char str[64] = "what1234";
  ck_assert_ptr_eq(memset(str, '*', 4), s21_memset(str, '*', 4));
}
END_TEST

START_TEST(memset_test7) {
  char str[64] = "what1234";
  ck_assert_ptr_eq(memset(str, '*', 2), s21_memset(str, '*', 2));
}
END_TEST

START_TEST(memset_test8) {
  char str[64] = "";
  ck_assert_ptr_eq(memset(str, '*', 2), s21_memset(str, '*', 2));
}
END_TEST

START_TEST(memset_test9) {
  char str[64] = "1234357890";
  ck_assert_ptr_eq(memset(str, '9', 0), s21_memset(str, '9', 0));
}
END_TEST

START_TEST(memset_test10) {
  char str[64] = "\twhat";
  ck_assert_ptr_eq(memset(str, '0', 3), s21_memset(str, '0', 3));
}
END_TEST

// тесты Мэри

START_TEST(strncmp_test1) {
  char str1[100] = "raketi best of the best";
  char str2[100] = "raketi best of the best";
  ck_assert_int_eq(strncmp(str1, str2, 15), s21_strncmp(str1, str2, 15));
}
END_TEST

START_TEST(strncmp_test2) {
  char str1[100] = "raketi best of the best";
  char str2[100] = "raketi best";
  ck_assert_int_eq(strncmp(str1, str2, 15), s21_strncmp(str1, str2, 15));
}
END_TEST

START_TEST(strncmp_test3) {
  char str1[100] = "raketi best of the best";
  char str2[100] = "raketi best of the best !!!!!!!!!!!!!";
  ck_assert_int_eq(strncmp(str1, str2, 20), s21_strncmp(str1, str2, 20));
}
END_TEST

START_TEST(strcspn_test1) {
  char str1[100] = "0123456789";
  char str2[100] = "6789";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_test2) {
  char str1[100] = "6789";
  char str2[100] = "6789";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_test3) {
  char str1[100] = "0123456789";
  char str2[100] = "9";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strcspn_test4) {
  char str1[100] = "0123456789";
  char str2[100] = "raketi";
  ck_assert_int_eq(strcspn(str1, str2), s21_strcspn(str1, str2));
}
END_TEST

START_TEST(strchr_test1) {
  char str[100] = "0123456789";
  int ch = '6';
  ck_assert_str_eq(strchr(str, ch), s21_strchr(str, ch));
}
END_TEST

START_TEST(strchr_test2) {
  char str[100] = "0123456789";
  int ch = '1';
  ck_assert_str_eq(strchr(str, ch), s21_strchr(str, ch));
}
END_TEST

START_TEST(strchr_test3) {
  char str[100] = "01234567897878978978979879";
  int ch = '9';
  ck_assert_str_eq(strchr(str, ch), s21_strchr(str, ch));
}
END_TEST

START_TEST(strchr_test4) {
  char str[100] = "0123456789";
  int ch = '0';
  ck_assert_str_eq(strchr(str, ch), s21_strchr(str, ch));
}
END_TEST

START_TEST(strerror_test1) {
  int errnum = 0;
  ck_assert_str_eq(strerror(errnum), s21_strerror(errnum));
}
END_TEST

START_TEST(strerror_test2) {
  int errnum = 1;
  ck_assert_str_eq(strerror(errnum), s21_strerror(errnum));
}
END_TEST

START_TEST(strerror_test3) {
  int errnum = 10;
  ck_assert_str_eq(strerror(errnum), s21_strerror(errnum));
}
END_TEST

START_TEST(strerror_test4) {
  int errnum = 15;
  ck_assert_str_eq(strerror(errnum), s21_strerror(errnum));
}
END_TEST

// Саша тесты
// функция s21_strstr

START_TEST(strstr_test1) {
  char str1[100] = "";
  char str2[100] = "0";
  ck_assert_pstr_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_test2) {
  char str1[100] = "1234567890";
  char str2[100] = "1";
  ck_assert_str_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_test3) {
  char str1[100] = "1234567890";
  char str2[100] = "6";
  ck_assert_str_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_test4) {
  char str1[100] = "1234567890";
  char str2[100] = "567";
  ck_assert_str_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_test5) {
  char str1[100] = "1234567890";
  char str2[100] = "";
  ck_assert_str_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_test6) {
  char str1[100] = "35948644123";
  char str2[100] = "123";
  ck_assert_str_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_test7) {
  char str1[100] = "852";
  char str2[100] = "852";
  ck_assert_str_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_test8) {
  char str1[100] = "sadfgbv2345t9er8efusdhfgf";
  char str2[100] = "5t";
  ck_assert_str_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_test9) {
  char str1[100] = "sadfgbv2345t9er8efusdhfgf";
  char str2[100] = "8e";
  ck_assert_str_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

START_TEST(strstr_test10) {
  char str1[100] = "sadfgbv2345t9er8efusdhfgf*/=/= *=*/= ";
  char str2[100] = " *";
  ck_assert_str_eq(strstr(str1, str2), s21_strstr(str1, str2));
}
END_TEST

// функция s21_strrchr

START_TEST(strrchr_test1) {
  char str[100] = "23450123456789";
  int c = '6';
  ck_assert_str_eq(strrchr(str, c), s21_strrchr(str, c));
}
END_TEST

START_TEST(strrchr_test2) {
  char str[100] = "23450123456789";
  int c = '0';
  ck_assert_str_eq(strrchr(str, c), s21_strrchr(str, c));
}
END_TEST

START_TEST(strrchr_test3) {
  char str[100] = "23450123456789";
  int c = '9';
  ck_assert_str_eq(strrchr(str, c), s21_strrchr(str, c));
}
END_TEST

START_TEST(strrchr_test4) {
  char str[100] = "sgshksdfglhbgls";
  int c = 'd';
  ck_assert_str_eq(strrchr(str, c), s21_strrchr(str, c));
}
END_TEST

START_TEST(strrchr_test5) {
  char str[100] = "Pelegrim";
  int c = 'M';
  ck_assert_pstr_eq(strrchr(str, c), s21_strrchr(str, c));
}
END_TEST

START_TEST(strrchr_test6) {
  char str[100] = "Pelegrim";
  int c = 'm';
  ck_assert_str_eq(strrchr(str, c), s21_strrchr(str, c));
}
END_TEST

START_TEST(strrchr_test7) {
  char str[100] = "123*990pkg";
  int c = '*';
  ck_assert_str_eq(strrchr(str, c), s21_strrchr(str, c));
}
END_TEST

START_TEST(strrchr_test8) {
  char str[100] = "Pelegrim";
  int c = 'l';
  ck_assert_str_eq(strrchr(str, c), s21_strrchr(str, c));
}
END_TEST

START_TEST(strrchr_test9) {
  char str[100] = "peligrim";
  int c = 'g';
  ck_assert_str_eq(strrchr(str, c), s21_strrchr(str, c));
}
END_TEST

START_TEST(strrchr_test10) {
  char str[100] = " cheburek";
  int c = ' ';
  ck_assert_str_eq(strrchr(str, c), s21_strrchr(str, c));
}
END_TEST

// функция s21_strspn

START_TEST(strspn_test1) {
  const char str1[100] = "1234567890";
  const char str2[100] = "768";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_test2) {
  const char str1[100] = "12322334567890123";
  const char str2[100] = "223";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_test3) {
  const char str1[100] = " 12322334567890123";
  const char str2[100] = "123";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_test4) {
  const char str1[100] = "12 322334567890123";
  const char str2[100] = "123";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_test5) {
  const char str1[100] = "Pelegrim";
  const char str2[100] = "grim";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_test6) {
  const char str1[100] = "Pelegrim";
  const char str2[100] = "Pelegrim";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_test7) {
  const char str1[100] = "Pelegrim";
  const char str2[100] = "pelegrim";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_test8) {
  const char str1[100] = "pelegrim";
  const char str2[100] = "Pelegrim";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_test9) {
  const char str1[100] = "pelegrim";
  const char str2[100] = "";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

START_TEST(strspn_test10) {
  const char str1[100] = "";
  const char str2[100] = "Pelegrim";
  ck_assert_int_eq(strspn(str1, str2), s21_strspn(str1, str2));
}
END_TEST

// функция s21_strpbrk

START_TEST(strpbrk_test1) {
  char str1[100] = "1234567890";
  char str2[100] = " ";
  ck_assert_pstr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_test2) {
  char str1[100] = "1234567890";
  char str2[100] = "876";
  ck_assert_str_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_test3) {
  char str1[100] = "1234567890";
  char str2[100] = "890";
  ck_assert_str_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_test4) {
  char str1[100] = "1234567890";
  char str2[100] = "*";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_test5) {
  char str1[100] = "1234567890";
  char str2[100] = "";
  ck_assert_pstr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_test6) {
  char str1[100] = "1234567890";
  char str2[100] = "0987654321";
  ck_assert_str_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_test7) {
  char str1[100] = "Pelegrim";
  char str2[100] = "   grim   ";
  ck_assert_str_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_test8) {
  char str1[100] = "";
  char str2[100] = "pelegrim";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_test9) {
  char str1[100] = "pelegrim";
  char str2[100] = "";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

START_TEST(strpbrk_test10) {
  char str1[100] = "";
  char str2[100] = " ";
  ck_assert_ptr_eq(strpbrk(str1, str2), s21_strpbrk(str1, str2));
}
END_TEST

// функция s21_strtok

START_TEST(strtok_test1) {
  char str1[100] = "";
  char delim[100] = "";
  ck_assert_pstr_eq(strtok(str1, delim), s21_strtok(str1, delim));
}
END_TEST

START_TEST(strtok_test2) {
  char str1[100] = "123abc23ccd3vvc321";
  char delim[100] = "213";
  ck_assert_str_eq(strtok(str1, delim), s21_strtok(str1, delim));
}
END_TEST

START_TEST(strtok_test3) {
  char str1[100] = "213";
  char delim[100] = "123abc23ccd3vvc321";
  ck_assert_pstr_eq(strtok(str1, delim), s21_strtok(str1, delim));
}
END_TEST

START_TEST(strtok_test4) {
  char str1[100] = "";
  char delim[100] = "213";
  ck_assert_pstr_eq(strtok(str1, delim), s21_strtok(str1, delim));
}
END_TEST

START_TEST(strtok_test5) {
  char str1[100] = "123abc23ccd3vvc321";
  char delim[100];
  ck_assert_pstr_eq(strtok(str1, delim), s21_strtok(str1, delim));
}
END_TEST

START_TEST(strtok_test6) {
  char str1[100] = "123abc23ccd3vvc321";
  char delim[100] = "789";
  ck_assert_str_eq(strtok(str1, delim), s21_strtok(str1, delim));
}

START_TEST(strtok_test7) {
  char str1[100] = "111";
  char delim[100] = "111";
  ck_assert_pstr_eq(strtok(str1, delim), s21_strtok(str1, delim));
}
END_TEST

START_TEST(strtok_test8) {
  char str1[100] = "121";
  char delim[100] = "1";
  ck_assert_str_eq(strtok(str1, delim), s21_strtok(str1, delim));
}
END_TEST

START_TEST(strtok_test9) {
  char str1[100] = "         1   2  1   ";
  char delim[100] = "1";
  ck_assert_str_eq(strtok(str1, delim), s21_strtok(str1, delim));
}
END_TEST

START_TEST(strtok_test10) {
  char str1[100] = "         1   2  1   ";
  char delim[100] = "         1   2  1   ";
  ck_assert_pstr_eq(strtok(str1, delim), s21_strtok(str1, delim));
}
END_TEST

START_TEST(strtok_test11) {
  char str1[100] = "one/two/three(four)five";
  char delim[100] = "/()";
  ck_assert_str_eq(strtok(str1, delim), s21_strtok(str1, delim));
}
END_TEST

START_TEST(strtok_test12) {
  char str1[100] = "123";
  char delim[100] = "";
  ck_assert_pstr_eq(strtok(str1, delim), s21_strtok(str1, delim));
}
END_TEST

// //_____________ s21_to_upper

START_TEST(to_upper_test1) {
  char str[64] = "ready to";
  char *result = s21_to_upper(str);
  ck_assert_str_eq(result, "READY TO");
  if (result) free(result);
}
END_TEST

START_TEST(to_upper_test2) {
  char str[64] = "rEadY to";
  char *result = s21_to_upper(str);
  ck_assert_str_eq(result, "READY TO");
  if (result) free(result);
}
END_TEST

START_TEST(to_upper_test3) {
  char str[64] = "READY TO";
  char *result = s21_to_upper(str);
  ck_assert_str_eq(result, "READY TO");
  if (result) free(result);
}
END_TEST

START_TEST(to_upper_test4) {
  char str[64] = "-readY TO";
  char *result = s21_to_upper(str);
  ck_assert_str_eq(result, "-READY TO");
  if (result) free(result);
}
END_TEST

START_TEST(to_upper_test5) {
  char str[64] = "";
  char *result = s21_to_upper(str);
  ck_assert_str_eq(result, "");
  if (result) free(result);
}
END_TEST

START_TEST(to_upper_test6) {
  char str[64] = "*%^*(5ff567#";
  char *result = s21_to_upper(str);
  ck_assert_str_eq(result, "*%^*(5FF567#");
  if (result) free(result);
}
END_TEST

START_TEST(to_upper_test7) {  //!!!!!
  char str[64] = "\treadY";
  char *result = s21_to_upper(str);
  ck_assert_str_eq(result, "\tREADY");
  if (result) free(result);
}
END_TEST

// //___________ s21_to_lower

START_TEST(to_lower_test1) {
  char str[64] = "READY TO";
  char *result = s21_to_lower(str);
  ck_assert_str_eq(result, "ready to");
  if (result) free(result);
}
END_TEST

START_TEST(to_lower_test2) {
  char str[64] = "rEadY to";
  char *result = s21_to_lower(str);
  ck_assert_str_eq(result, "ready to");
  if (result) free(result);
}
END_TEST

START_TEST(to_lower_test3) {
  char str[64] = "ready to";
  char *result = s21_to_lower(str);
  ck_assert_str_eq(result, "ready to");
  if (result) free(result);
}
END_TEST

START_TEST(to_lower_test4) {
  char str[64] = "-reADY TO";
  char *result = s21_to_lower(str);
  ck_assert_str_eq(result, "-ready to");
  if (result) free(result);
}
END_TEST

START_TEST(to_lower_test5) {
  char str[64] = "";
  char *result = s21_to_lower(str);
  ck_assert_str_eq(result, "");
  if (result) free(result);
}
END_TEST

START_TEST(to_lower_test6) {
  char str[64] = "*%^*(5fF567#";
  char *result = s21_to_lower(str);
  ck_assert_str_eq(result, "*%^*(5ff567#");
  if (result) free(result);
}
END_TEST

START_TEST(to_lower_test7) {
  char str[64] = "\tREadY";
  char *result = s21_to_lower(str);
  ck_assert_str_eq(result, "\tready");
  if (result) free(result);
}
END_TEST

// //_________________ s21_insert

START_TEST(insert_test1) {
  char src[64] = "ready";
  char str[64] = "toGo";
  s21_size_t index = 3;
  char *result = s21_insert(src, str, index);
  ck_assert_str_eq(result, "reatoGody");
  if (result) free(result);
}
END_TEST

START_TEST(insert_test2) {
  char src[64] = "ready";
  char str[64] = "123";
  s21_size_t index = 0;
  char *result = s21_insert(src, str, index);
  ck_assert_str_eq(result, "123ready");
  if (result) free(result);
}
END_TEST

START_TEST(insert_test3) {
  char src[64] = "ready";
  char str[64] = "123";
  s21_size_t index = 5;
  char *result = s21_insert(src, str, index);
  ck_assert_str_eq(result, "ready123");
  if (result) free(result);
}
END_TEST

START_TEST(insert_test4) {
  char src[64] = "";
  char str[64] = "123";
  s21_size_t index = 0;
  char *result = s21_insert(src, str, index);  //!!!!!!!
  ck_assert_pstr_eq(result, s21_NULL);
  if (result) free(result);
}
END_TEST

START_TEST(insert_test5) {
  char src[64] = "ready";
  char str[64] = "123";
  s21_size_t index = -1;
  char *result = s21_insert(src, str, index);  //!!!!!
  ck_assert_pstr_eq(result, s21_NULL);
  if (result) free(result);
}
END_TEST

START_TEST(insert_test6) {
  char src[64] = "ready to   g  go";
  char str[64] = "123";
  s21_size_t index = 9;
  char *result = s21_insert(src, str, index);
  ck_assert_str_eq(result, "ready to 123  g  go");
  if (result) free(result);
}
END_TEST

START_TEST(insert_test7) {
  char src[64] = "rea\0dy";
  char str[64] = "123";
  s21_size_t index = 3;
  char *result = s21_insert(src, str, index);
  ck_assert_str_eq(result, "rea123");
  if (result) free(result);
}
END_TEST

START_TEST(insert_test8) {
  char src[64] = "rea\0dy";
  char str[64] = "123";
  s21_size_t index = 4;
  char *result = s21_insert(src, str, index);  //!!!!!!
  ck_assert_pstr_eq(result, s21_NULL);
  if (result) free(result);
}
END_TEST

// //_______________s21_trim

START_TEST(trim_test1) {
  char src[64] = "**ready**";
  char trim_chars[64] = "*";
  char *result = s21_trim(src, trim_chars);
  ck_assert_str_eq(result, "ready");
  if (result) free(result);
}
END_TEST

START_TEST(trim_test2) {
  char src[64] = "*ready**d";
  char trim_chars[64] = "*";
  char *result = s21_trim(src, trim_chars);
  ck_assert_str_eq(result, "ready**d");
  if (result) free(result);
}
END_TEST

START_TEST(trim_test3) {
  char src[64] = " ready ";
  char trim_chars[64] = " ";
  char *result = s21_trim(src, trim_chars);
  ck_assert_str_eq(result, "ready");
  if (result) free(result);
}
END_TEST

START_TEST(trim_test4) {
  char src[64] = " *ready* ";
  char trim_chars[64] = "*";
  char *result = s21_trim(src, trim_chars);
  ck_assert_str_eq(result, " *ready* ");
  if (result) free(result);
}
END_TEST

START_TEST(trim_test5) {
  char src[64] = "123ready1234";
  char trim_chars[64] = "*";
  char *result = s21_trim(src, trim_chars);
  ck_assert_str_eq(result, "123ready1234");
  if (result) free(result);
}
END_TEST

START_TEST(trim_test6) {
  char src[64] = "4123ready123";
  char trim_chars[64] = "123";
  char *result = s21_trim(src, trim_chars);
  ck_assert_str_eq(result, "4123ready");
  if (result) free(result);
}
END_TEST

START_TEST(trim_test7) {
  char src[64] = "ready";
  char trim_chars[64] = "ready";
  char *result = s21_trim(src, trim_chars);
  ck_assert_str_eq(result, "");
  if (result) free(result);
}
END_TEST

START_TEST(trim_test8) {
  char src[64] = "         ready         ";
  char trim_chars[64] = " ";
  char *result = s21_trim(src, trim_chars);
  ck_assert_str_eq(result, "ready");
  if (result) free(result);
}
END_TEST

START_TEST(s21_memchr_test) {
  char test1[] = "123456";
  char test2 = '4';
  char test3 = '7';
  char test4[] = "hello/\0";
  char test5[] = "h";
  char test6 = 'h';
  char test7 = ' ';
  char test8 = '/';
  char test9 = '\0';
  ck_assert_uint_eq((unsigned long)s21_memchr(test1, test2, 6),
                    (unsigned long)memchr(test1, test2, 6));
  ck_assert_uint_eq((unsigned long)s21_memchr(test1, test3, 6),
                    (unsigned long)memchr(test1, test3, 6));
  ck_assert_uint_eq((unsigned long)s21_memchr(test4, test6, 6),
                    (unsigned long)memchr(test4, test6, 6));
  ck_assert_uint_eq((unsigned long)s21_memchr(test5, test7, 1),
                    (unsigned long)memchr(test5, test7, 1));
  ck_assert_uint_eq((unsigned long)s21_memchr(test4, test8, 6),
                    (unsigned long)memchr(test4, test8, 6));
  ck_assert_uint_eq((unsigned long)s21_memchr(test4, test9, 6),
                    (unsigned long)memchr(test4, test9, 6));
}
END_TEST

START_TEST(s21_memcmp_test) {
  char test1[] = "Apple Pay Money Day";
  char test2[] = "Apple with worm";
  char test3[] = "\0";
  char test4[] = "gud\0 job";
  char test5[] = "gud\0 job";
  ck_assert_uint_eq(s21_memcmp(test1, test2, 16) < 0,
                    memcmp(test1, test2, 16) < 0);
  ck_assert_uint_eq(s21_memcmp(test1, test3, 2) > 0,
                    memcmp(test1, test3, 2) > 0);
  ck_assert_uint_eq(s21_memcmp(test2, test3, 2) > 0,
                    memcmp(test2, test3, 2) > 0);
  ck_assert_uint_eq(s21_memcmp(test4, test1, 9) > 0,
                    memcmp(test4, test1, 9) > 0);
  ck_assert_uint_eq(s21_memcmp(test4, test5, 7) == 0,
                    memcmp(test4, test5, 7) == 0);
}
END_TEST

START_TEST(s21_strlen_test) {
  char test_1[] = "12345";
  char test_2[] = "Hello";
  char test_3[] = "1\0";
  char test_4[] = "   ";
  char test_5[] = "123\0456";
  char test_6[] = "hhh\0";
  ck_assert_int_eq(s21_strlen(test_1), strlen(test_1));
  ck_assert_int_eq(s21_strlen(test_2), strlen(test_2));
  ck_assert_int_eq(s21_strlen(test_3), strlen(test_3));
  ck_assert_int_eq(s21_strlen(test_4), strlen(test_4));
  ck_assert_int_eq(s21_strlen(test_5), strlen(test_5));
  ck_assert_int_eq(s21_strlen(test_6), strlen(test_6));
}
END_TEST

START_TEST(s21_strcpy_test) {
  char test_1[] = "00000";
  char test_2[] = "     ";
  char test_3[] = "123\07";
  char test_4[] = "first_string\0second_string";
  char test_5[128] = "";
  char test_6[] = "Hello, world!!!";
  ck_assert_str_eq(s21_strcpy(test_1, test_2), strcpy(test_1, test_2));
  ck_assert_str_eq(s21_strcpy(test_2, test_3), strcpy(test_2, test_3));
  ck_assert_str_eq(s21_strcpy(test_4, test_5), strcpy(test_4, test_5));
  ck_assert_str_eq(s21_strcpy(test_5, test_4), strcpy(test_5, test_4));
  ck_assert_str_eq(s21_strcpy(test_6, test_5), strcpy(test_6, test_5));
}
END_TEST

START_TEST(s21_memcpy_test) {
  char test_1[10] = "12345";
  char test_2[] = "  ";
  char test_3[20] = "///  ";
  char test_4[] = "   ///";
  char test_5[30] = "";
  char test_6[] = "4444";
  char test_7[] = "123\0123";
  ck_assert_str_eq(s21_memcpy(test_1, test_2, 2), memcpy(test_1, test_2, 2));
  ck_assert_str_eq(s21_memcpy(test_3, test_4, 6), memcpy(test_3, test_4, 6));
  ck_assert_str_eq(s21_memcpy(test_5, test_6, 4), memcpy(test_5, test_6, 4));
  ck_assert_str_eq(s21_memcpy(test_5, test_7, 6), memcpy(test_5, test_7, 6));
}
END_TEST

START_TEST(s21_strncat_test) {
  char test_1[10] = "<<<";
  char test_2[10] = "5";
  char test_3[10] = "5";
  char test_4[] = "";
  ck_assert_pstr_eq(s21_strncat(test_1, test_2, 1), strncat(test_1, test_2, 1));
  ck_assert_str_eq(s21_strncat(test_3, test_4, 0), strncat(test_3, test_4, 0));
}
END_TEST

START_TEST(s21_strstr_test) {
  char test_1[] = "<<<5>>>";
  char test_2[] = "5";
  char test_3[] = "QwertyQwertyQwerty";
  char test_4[] = "Qwerty";
  char test_5[] = "abcd";
  char test_6[] = "";
  char test_7[] = "aaaaa123aaa1234aaa";
  char test_8[] = "1234";
  ck_assert_ptr_eq(s21_strstr(test_1, test_2), strstr(test_1, test_2));
  ck_assert_ptr_eq(s21_strstr(test_3, test_4), strstr(test_3, test_4));
  ck_assert_ptr_eq(s21_strstr(test_5, test_6), strstr(test_5, test_6));
  ck_assert_ptr_eq(s21_strstr(test_4, test_5), strstr(test_4, test_5));
  ck_assert_ptr_eq(s21_strstr(test_7, test_8), strstr(test_7, test_8));
}
END_TEST

START_TEST(s21_memset_test) {
  unsigned char test1[10] = "1234357890";
  unsigned char test2[10] = "hello";
  ck_assert_uint_eq((unsigned long)s21_memset(test1, '1', 10),
                    (unsigned long)memset(test1, '1', 10));
  ck_assert_uint_eq((unsigned long)s21_memchr(test1, '3', 10),
                    (unsigned long)memchr(test1, '3', 10));
  ck_assert_uint_eq((unsigned long)s21_memchr(test1, '/', 8),
                    (unsigned long)memchr(test1, '/', 8));
  ck_assert_uint_eq((unsigned long)s21_memchr(test1, '9', 0),
                    (unsigned long)memchr(test1, '9', 0));
  ck_assert_uint_eq((unsigned long)s21_memchr(test1, '0', 4),
                    (unsigned long)memchr(test1, '0', 4));
  ck_assert_uint_eq((unsigned long)s21_memchr(test2, '1', 3),
                    (unsigned long)memchr(test2, '1', 3));
}
END_TEST

START_TEST(s21_strcmp_test) {
  char test1[] = "12345";
  char test2[] = "12305";
  char test3[] = "/%%5#";
  char test4[] = " @";
  char test5[] = "   ";
  char test6[] = "\\\\HH";
  ck_assert_uint_eq((unsigned long)s21_strcmp(test1, test2) > 0,
                    (unsigned long)strcmp(test1, test2) > 0);
  ck_assert_uint_eq((unsigned long)s21_strcmp(test3, test4) > 0,
                    (unsigned long)strcmp(test3, test4) > 0);
  ck_assert_uint_eq((unsigned long)s21_strcmp(test5, test6) < 0,
                    (unsigned long)strcmp(test5, test6) < 0);
}
END_TEST

START_TEST(s21_strcspn_test) {
  char test1[] = "0123456789";
  char test2[] = "9876";
  char test3[] = "LOST: 4-8-15-16-23-42";
  char test4[] = "1234567890";
  char test5[] = "0/";
  char test6[] = "%%\\#";
  char test7[] = " ";
  char test8[] = "1234567890";
  ck_assert_uint_eq(s21_strcspn(test1, test2), strcspn(test1, test2));
  ck_assert_uint_eq(s21_strcspn(test3, test4), strcspn(test3, test4));
  ck_assert_uint_eq(s21_strcspn(test3, test5), strcspn(test3, test5));
  ck_assert_uint_eq(s21_strcspn(test3, test6), strcspn(test3, test6));
  ck_assert_uint_eq(s21_strcspn(test3, test7), strcspn(test3, test7));
  ck_assert_uint_eq(s21_strcspn(test4, test8), strcspn(test4, test8));
  ck_assert_uint_eq(s21_strcspn(test2, test7), strcspn(test2, test7));
}
END_TEST

START_TEST(s21_strrchr_test) {
  char test1[] = "0163456769";
  char test2[] = ";;;;;;H%%//#HH";
  char test3[] = "     /";
  ck_assert_uint_eq((unsigned long)s21_strrchr(test1, '6'),
                    (unsigned long)strrchr(test1, '6'));
  ck_assert_uint_eq((unsigned long)s21_strrchr(test1, ' '),
                    (unsigned long)strrchr(test1, ' '));
  ck_assert_uint_eq((unsigned long)s21_strrchr(test1, '6'),
                    (unsigned long)strrchr(test1, '6'));
  ck_assert_uint_eq((unsigned long)s21_strrchr(test2, 'H'),
                    (unsigned long)strrchr(test2, 'H'));
  ck_assert_uint_eq((unsigned long)s21_strrchr(test2, '$'),
                    (unsigned long)strrchr(test2, '$'));
  ck_assert_uint_eq((unsigned long)s21_strrchr(test2, ';'),
                    (unsigned long)strrchr(test2, ';'));
  ck_assert_uint_eq((unsigned long)s21_strrchr(test3, ' '),
                    (unsigned long)strrchr(test3, ' '));
  ck_assert_str_eq(s21_strrchr(test2, '\0'), strrchr(test2, '\0'));
}
END_TEST

START_TEST(s21_strerror_test) {
  char *test1 = s21_strerror(0);
  char *test2 = strerror(0);
  char *test3 = s21_strerror(106);
  char *test4 = strerror(106);
  char *test5 = s21_strerror(2147483647);
  char *test6 = strerror(2147483647);
  char *test7 = s21_strerror(-214748364);
  char *test8 = strerror(-214748364);
  ck_assert_str_eq(test1, test2);
  ck_assert_str_eq(test3, test4);
  ck_assert_str_eq(test5, test6);
  ck_assert_str_eq(test7, test8);
}
END_TEST

START_TEST(s21_memmove_test) {
  char src[] = "1234567";
  char dest[] = "abcdefg";
  size_t n = 4;
  char csrc[] = "1234567";
  char cdest[] = "abcdefg";
  ck_assert_str_eq(s21_memmove(dest, src, n), memmove(cdest, csrc, n));
  ck_assert_str_eq(dest, cdest);
  ck_assert_str_eq(dest, "1234efg");
  char dest_cover[] = "1234567";
  char *src_cover = dest_cover + 2;
  s21_memmove(dest_cover, src_cover, n);
  ck_assert_str_eq(dest_cover, "3456567");
}
END_TEST

START_TEST(s21_strchr_test) {
  char str1[] = "Abcdefg";
  int symbol1 = 'd';
  char *ach1 = s21_strchr(str1, symbol1);
  ck_assert_str_eq(ach1, "defg");
  char str2[] = "Abcdefg";
  int symbol2 = 'd';
  char *ach2 = strchr(str2, symbol2);
  ck_assert_str_eq(ach1, ach2);
  ck_assert_str_eq(str1, str2);
  char str3[] = "Abcdefg";
  int symbol3 = '\0';
  char *ach3 = s21_strchr(str3, symbol3);
  char str4[] = "Abcdefg";
  int symbol4 = '\0';
  char *ach4 = strchr(str4, symbol4);
  ck_assert_str_eq(ach3, ach4);
  ck_assert_str_eq(str3, str4);
}
END_TEST

START_TEST(s21_strncpy_test) {
  char str1[] = "test of string";
  char dest1[15] = "";
  char str2[] = "test\0";
  char dest2[5] = "";
  char str3[] = "test ";
  char dest3[] = "crushcrush";
  ck_assert_str_eq("test ", s21_strncpy(dest1, str1, 5));
  ck_assert_str_eq("test", s21_strncpy(dest2, str2, 4));
  ck_assert_str_eq("test crush", s21_strncpy(dest3, str3, 10));
}
END_TEST

START_TEST(s21_strpbrk_test) {
  char str_for_strpbrk[] = "Megalomania";
  char str_oneof[] = "yal";
  ck_assert_str_eq(s21_strpbrk(str_for_strpbrk, str_oneof), "alomania");
  ck_assert_str_eq(s21_strpbrk(str_for_strpbrk, str_oneof),
                   strpbrk(str_for_strpbrk, str_oneof));
  char *str = "Hello, world";
  char *empty = "";
  ck_assert(s21_strpbrk(str, empty) == s21_NULL);
  ck_assert_uint_eq((unsigned long)s21_strpbrk(str, empty),
                    (unsigned long)strpbrk(str, empty));
}
END_TEST

START_TEST(s21_strtok_test) {
  char str_strtok1[] = "one/two/three(four)five";
  char delim1[] = "/()";
  char str_strtok2[] = "one/two/three(four)five";
  char delim2[] = "/()";
  char *my_strtok = s21_strtok(str_strtok1, delim1);
  char *origin_strtok = strtok(str_strtok2, delim2);
  while (my_strtok != s21_NULL) {
    ck_assert_str_eq(my_strtok, origin_strtok);
    my_strtok = s21_strtok(s21_NULL, delim1);
    origin_strtok = strtok(s21_NULL, delim2);
  }
  char *str1 = "\0";
  char *str2 = "\0";
  ck_assert_pstr_eq(strtok(str1, str2), s21_strtok(str1, str2));
}
END_TEST

START_TEST(s21_strncmp_test) {
  char str1[] = "hella 1";
  char str2[] = "hello 3";
  ck_assert_int_eq(s21_strncmp(str1, str2, 5) < 0, strncmp(str1, str2, 5) < 0);
  ck_assert_int_eq(s21_strncmp(str1, str2, 3) == 0,
                   strncmp(str1, str2, 3) == 0);
}
END_TEST

START_TEST(s21_strspn_test) {
  char str1[] = "hella 1";
  char str2[] = "ell";

  ck_assert_int_eq(s21_strspn(str1, str2), strspn(str1, str2));
  ck_assert_int_eq(s21_strspn(str2, str1), strspn(str2, str1));
}
END_TEST

START_TEST(s21_strcat_test) {
  char test1[] = "Apple Pay Money Day";
  char test3[] = "\0";
  ck_assert_uint_eq((unsigned long)s21_strcat(test1, test3),
                    (unsigned long)strcat(test1, test3));
}
END_TEST

START_TEST(s21_insert_test) {
  char *src = "Hello!";
  char *str = ", world";
  char *new_str = s21_insert(src, str, 5);
  if (new_str) {
    ck_assert_str_eq(new_str, "Hello, world!");
    free(new_str);
  }

  new_str = s21_insert(src, "", 15);
  ck_assert(new_str == s21_NULL);

  new_str = s21_insert("Hello!", ", world!!", 5);
  if (new_str) {
    ck_assert_str_eq(new_str, "Hello, world!!!");
    free(new_str);
  }

  new_str = s21_insert("Hello!", ", world!!", 10);
  if (new_str) {
    ck_assert_str_eq(new_str, "Hello!");
    free(new_str);
  }

  new_str = s21_insert("Hello!", ", world!!", 25);
  ck_assert(new_str == s21_NULL);

  new_str = s21_insert("", "", 0);
  if (new_str) {
    ck_assert_str_eq(new_str, "");
    free(new_str);
  }
}
END_TEST

START_TEST(s21_trim_test) {
  char *trimmed_str;
  char *str_to_trim = " \n   Hello, world!  !\n";
  char *empty_str = "";

  trimmed_str = s21_trim(empty_str, " \n\0");
  if (trimmed_str) {
    ck_assert_str_eq(trimmed_str, "");
    free(trimmed_str);
  }

  char *empty_format = "";
  trimmed_str = s21_trim(str_to_trim, empty_format);
  if (trimmed_str) {
    ck_assert_str_eq(trimmed_str, "Hello, world!  !");
    free(trimmed_str);
  }

  trimmed_str = s21_trim(s21_NULL, empty_format);
  ck_assert(trimmed_str == s21_NULL);

  char *str_to_trim2 = "xxx Hello, world! xxx ---";
  char *format_str = "x -";
  trimmed_str = s21_trim(str_to_trim2, format_str);
  if (trimmed_str) {
    ck_assert_str_eq(trimmed_str, "Hello, world!");
    free(trimmed_str);
  }
}
END_TEST

Suite *s21_string_suite(void) {
  Suite *s21_string_test = suite_create("s21_string_suite");
  TCase *s21_string_TC = tcase_create("s21_string_funcs");
  suite_add_tcase(s21_string_test, s21_string_TC);

  tcase_add_test(s21_string_TC, strlen_test1);
  tcase_add_test(s21_string_TC, strlen_test2);
  tcase_add_test(s21_string_TC, strlen_test3);
  tcase_add_test(s21_string_TC, strlen_test4);
  tcase_add_test(s21_string_TC, strlen_test5);
  tcase_add_test(s21_string_TC, strlen_test6);
  tcase_add_test(s21_string_TC, strlen_test7);
  tcase_add_test(s21_string_TC, strlen_test8);
  tcase_add_test(s21_string_TC, strlen_test9);
  tcase_add_test(s21_string_TC, strlen_test10);

  tcase_add_test(s21_string_TC, strcmp_test1);
  tcase_add_test(s21_string_TC, strcmp_test2);
  tcase_add_test(s21_string_TC, strcmp_test3);
  tcase_add_test(s21_string_TC, strcmp_test4);
  tcase_add_test(s21_string_TC, strcmp_test5);
  tcase_add_test(s21_string_TC, strcmp_test6);
  tcase_add_test(s21_string_TC, strcmp_test7);
  tcase_add_test(s21_string_TC, strcmp_test8);
  tcase_add_test(s21_string_TC, strcmp_test9);
  tcase_add_test(s21_string_TC, strcmp_test10);

  tcase_add_test(s21_string_TC, strcpy_test1);
  tcase_add_test(s21_string_TC, strcpy_test2);
  tcase_add_test(s21_string_TC, strcpy_test3);
  tcase_add_test(s21_string_TC, strcpy_test4);
  tcase_add_test(s21_string_TC, strcpy_test5);
  tcase_add_test(s21_string_TC, strcpy_test6);
  tcase_add_test(s21_string_TC, strcpy_test7);
  tcase_add_test(s21_string_TC, strcpy_test8);
  tcase_add_test(s21_string_TC, strcpy_test9);
  tcase_add_test(s21_string_TC, strcpy_test10);
  tcase_add_test(s21_string_TC, strcpy_test10);
  tcase_add_test(s21_string_TC, strcpy_test11);

  tcase_add_test(s21_string_TC, strcat_test1);
  tcase_add_test(s21_string_TC, strcat_test2);
  tcase_add_test(s21_string_TC, strcat_test3);
  tcase_add_test(s21_string_TC, strcat_test4);
  tcase_add_test(s21_string_TC, strcat_test5);
  tcase_add_test(s21_string_TC, strcat_test6);
  tcase_add_test(s21_string_TC, strcat_test7);
  tcase_add_test(s21_string_TC, strcat_test8);
  tcase_add_test(s21_string_TC, strcat_test9);
  tcase_add_test(s21_string_TC, strcat_test10);

  tcase_add_test(s21_string_TC, strncpy_test1);
  tcase_add_test(s21_string_TC, strncpy_test2);
  tcase_add_test(s21_string_TC, strncpy_test3);
  tcase_add_test(s21_string_TC, strncpy_test4);
  tcase_add_test(s21_string_TC, strncpy_test5);
  tcase_add_test(s21_string_TC, strncpy_test6);
  tcase_add_test(s21_string_TC, strncpy_test7);
  tcase_add_test(s21_string_TC, strncpy_test8);
  tcase_add_test(s21_string_TC, strncpy_test9);
  tcase_add_test(s21_string_TC, strncpy_test10);

  tcase_add_test(s21_string_TC, strncat_test1);
  tcase_add_test(s21_string_TC, strncat_test2);
  tcase_add_test(s21_string_TC, strncat_test3);
  tcase_add_test(s21_string_TC, strncat_test4);
  tcase_add_test(s21_string_TC, strncat_test5);
  tcase_add_test(s21_string_TC, strncat_test6);
  tcase_add_test(s21_string_TC, strncat_test7);
  tcase_add_test(s21_string_TC, strncat_test8);
  tcase_add_test(s21_string_TC, strncat_test9);
  tcase_add_test(s21_string_TC, strncat_test10);

  tcase_add_test(s21_string_TC, memchr_test1);
  tcase_add_test(s21_string_TC, memchr_test2);
  tcase_add_test(s21_string_TC, memchr_test3);
  tcase_add_test(s21_string_TC, memchr_test4);
  tcase_add_test(s21_string_TC, memchr_test5);
  tcase_add_test(s21_string_TC, memchr_test6);
  tcase_add_test(s21_string_TC, memchr_test7);
  tcase_add_test(s21_string_TC, memchr_test8);
  tcase_add_test(s21_string_TC, memchr_test9);
  tcase_add_test(s21_string_TC, memchr_test10);

  tcase_add_test(s21_string_TC, memcmp_test1);
  tcase_add_test(s21_string_TC, memcmp_test2);
  tcase_add_test(s21_string_TC, memcmp_test3);
  tcase_add_test(s21_string_TC, memcmp_test4);
  tcase_add_test(s21_string_TC, memcmp_test5);
  tcase_add_test(s21_string_TC, memcmp_test6);
  tcase_add_test(s21_string_TC, memcmp_test7);
  tcase_add_test(s21_string_TC, memcmp_test8);
  tcase_add_test(s21_string_TC, memcmp_test9);
  tcase_add_test(s21_string_TC, memcmp_test10);

  tcase_add_test(s21_string_TC, memcpy_test1);
  tcase_add_test(s21_string_TC, memcpy_test2);
  tcase_add_test(s21_string_TC, memcpy_test3);
  tcase_add_test(s21_string_TC, memcpy_test4);
  tcase_add_test(s21_string_TC, memcpy_test5);
  tcase_add_test(s21_string_TC, memcpy_test6);
  tcase_add_test(s21_string_TC, memcpy_test7);
  tcase_add_test(s21_string_TC, memcpy_test8);
  tcase_add_test(s21_string_TC, memcpy_test9);
  tcase_add_test(s21_string_TC, memcpy_test10);

  tcase_add_test(s21_string_TC, memmove_test1);
  tcase_add_test(s21_string_TC, memmove_test2);
  tcase_add_test(s21_string_TC, memmove_test3);
  tcase_add_test(s21_string_TC, memmove_test4);
  tcase_add_test(s21_string_TC, memmove_test5);
  tcase_add_test(s21_string_TC, memmove_test6);
  tcase_add_test(s21_string_TC, memmove_test7);
  tcase_add_test(s21_string_TC, memmove_test8);
  tcase_add_test(s21_string_TC, memmove_test9);
  tcase_add_test(s21_string_TC, memmove_test10);

  tcase_add_test(s21_string_TC, memset_test1);
  tcase_add_test(s21_string_TC, memset_test2);
  tcase_add_test(s21_string_TC, memset_test3);
  tcase_add_test(s21_string_TC, memset_test4);
  tcase_add_test(s21_string_TC, memset_test5);
  tcase_add_test(s21_string_TC, memset_test6);
  tcase_add_test(s21_string_TC, memset_test7);
  tcase_add_test(s21_string_TC, memset_test8);
  tcase_add_test(s21_string_TC, memset_test9);
  tcase_add_test(s21_string_TC, memset_test10);

  // тесты Мэри
  tcase_add_test(s21_string_TC, strncmp_test1);
  tcase_add_test(s21_string_TC, strncmp_test2);
  tcase_add_test(s21_string_TC, strncmp_test3);

  tcase_add_test(s21_string_TC, strcspn_test1);
  tcase_add_test(s21_string_TC, strcspn_test2);
  tcase_add_test(s21_string_TC, strcspn_test3);
  tcase_add_test(s21_string_TC, strcspn_test4);

  tcase_add_test(s21_string_TC, strchr_test1);
  tcase_add_test(s21_string_TC, strchr_test2);
  tcase_add_test(s21_string_TC, strchr_test3);
  tcase_add_test(s21_string_TC, strchr_test4);

  tcase_add_test(s21_string_TC, strerror_test1);
  tcase_add_test(s21_string_TC, strerror_test2);
  tcase_add_test(s21_string_TC, strerror_test3);
  tcase_add_test(s21_string_TC, strerror_test4);

  // тесты Сандра

  tcase_add_test(s21_string_TC, strstr_test1);
  tcase_add_test(s21_string_TC, strstr_test2);
  tcase_add_test(s21_string_TC, strstr_test3);
  tcase_add_test(s21_string_TC, strstr_test4);
  tcase_add_test(s21_string_TC, strstr_test5);
  tcase_add_test(s21_string_TC, strstr_test6);
  tcase_add_test(s21_string_TC, strstr_test7);
  tcase_add_test(s21_string_TC, strstr_test8);
  tcase_add_test(s21_string_TC, strstr_test9);
  tcase_add_test(s21_string_TC, strstr_test10);

  tcase_add_test(s21_string_TC, strrchr_test1);
  tcase_add_test(s21_string_TC, strrchr_test2);
  tcase_add_test(s21_string_TC, strrchr_test3);
  tcase_add_test(s21_string_TC, strrchr_test4);
  tcase_add_test(s21_string_TC, strrchr_test5);
  tcase_add_test(s21_string_TC, strrchr_test6);
  tcase_add_test(s21_string_TC, strrchr_test7);
  tcase_add_test(s21_string_TC, strrchr_test8);
  tcase_add_test(s21_string_TC, strrchr_test9);
  tcase_add_test(s21_string_TC, strrchr_test10);

  tcase_add_test(s21_string_TC, strspn_test1);
  tcase_add_test(s21_string_TC, strspn_test2);
  tcase_add_test(s21_string_TC, strspn_test3);
  tcase_add_test(s21_string_TC, strspn_test4);
  tcase_add_test(s21_string_TC, strspn_test5);
  tcase_add_test(s21_string_TC, strspn_test6);
  tcase_add_test(s21_string_TC, strspn_test7);
  tcase_add_test(s21_string_TC, strspn_test8);
  tcase_add_test(s21_string_TC, strspn_test9);
  tcase_add_test(s21_string_TC, strspn_test10);

  tcase_add_test(s21_string_TC, strpbrk_test1);
  tcase_add_test(s21_string_TC, strpbrk_test2);
  tcase_add_test(s21_string_TC, strpbrk_test3);
  tcase_add_test(s21_string_TC, strpbrk_test4);
  tcase_add_test(s21_string_TC, strpbrk_test5);
  tcase_add_test(s21_string_TC, strpbrk_test6);
  tcase_add_test(s21_string_TC, strpbrk_test7);
  tcase_add_test(s21_string_TC, strpbrk_test8);
  tcase_add_test(s21_string_TC, strpbrk_test9);
  tcase_add_test(s21_string_TC, strpbrk_test10);

  tcase_add_test(s21_string_TC, strtok_test1);
  tcase_add_test(s21_string_TC, strtok_test2);
  tcase_add_test(s21_string_TC, strtok_test3);
  tcase_add_test(s21_string_TC, strtok_test4);
  tcase_add_test(s21_string_TC, strtok_test5);
  tcase_add_test(s21_string_TC, strtok_test6);
  tcase_add_test(s21_string_TC, strtok_test7);
  tcase_add_test(s21_string_TC, strtok_test8);
  tcase_add_test(s21_string_TC, strtok_test9);
  tcase_add_test(s21_string_TC, strtok_test10);
  tcase_add_test(s21_string_TC, strtok_test11);
  tcase_add_test(s21_string_TC, strtok_test12);

  tcase_add_test(s21_string_TC, to_upper_test1);
  tcase_add_test(s21_string_TC, to_upper_test2);
  tcase_add_test(s21_string_TC, to_upper_test3);
  tcase_add_test(s21_string_TC, to_upper_test4);
  tcase_add_test(s21_string_TC, to_upper_test5);
  tcase_add_test(s21_string_TC, to_upper_test6);
  tcase_add_test(s21_string_TC, to_upper_test7);

  tcase_add_test(s21_string_TC, to_lower_test1);
  tcase_add_test(s21_string_TC, to_lower_test2);
  tcase_add_test(s21_string_TC, to_lower_test3);
  tcase_add_test(s21_string_TC, to_lower_test4);
  tcase_add_test(s21_string_TC, to_lower_test5);
  tcase_add_test(s21_string_TC, to_lower_test6);
  tcase_add_test(s21_string_TC, to_lower_test7);

  tcase_add_test(s21_string_TC, insert_test1);
  tcase_add_test(s21_string_TC, insert_test2);
  tcase_add_test(s21_string_TC, insert_test3);
  tcase_add_test(s21_string_TC, insert_test4);
  tcase_add_test(s21_string_TC, insert_test5);
  tcase_add_test(s21_string_TC, insert_test6);
  tcase_add_test(s21_string_TC, insert_test7);
  tcase_add_test(s21_string_TC, insert_test8);

  tcase_add_test(s21_string_TC, trim_test1);
  tcase_add_test(s21_string_TC, trim_test2);
  tcase_add_test(s21_string_TC, trim_test3);
  tcase_add_test(s21_string_TC, trim_test4);
  tcase_add_test(s21_string_TC, trim_test5);
  tcase_add_test(s21_string_TC, trim_test6);
  tcase_add_test(s21_string_TC, trim_test7);
  tcase_add_test(s21_string_TC, trim_test8);

  tcase_add_test(s21_string_TC, s21_memchr_test);
  tcase_add_test(s21_string_TC, s21_memcmp_test);
  tcase_add_test(s21_string_TC, s21_strlen_test);
  tcase_add_test(s21_string_TC, s21_strcpy_test);
  tcase_add_test(s21_string_TC, s21_memcpy_test);
  tcase_add_test(s21_string_TC, s21_strncat_test);
  tcase_add_test(s21_string_TC, s21_strstr_test);
  tcase_add_test(s21_string_TC, s21_memset_test);
  tcase_add_test(s21_string_TC, s21_strcmp_test);
  tcase_add_test(s21_string_TC, s21_strcspn_test);
  tcase_add_test(s21_string_TC, s21_strrchr_test);
  tcase_add_test(s21_string_TC, s21_strerror_test);
  tcase_add_test(s21_string_TC, s21_memmove_test);
  tcase_add_test(s21_string_TC, s21_strchr_test);
  tcase_add_test(s21_string_TC, s21_strncpy_test);
  tcase_add_test(s21_string_TC, s21_strpbrk_test);
  tcase_add_test(s21_string_TC, s21_strtok_test);
  tcase_add_test(s21_string_TC, s21_strncmp_test);
  tcase_add_test(s21_string_TC, s21_strspn_test);
  tcase_add_test(s21_string_TC, s21_strcat_test);
  tcase_add_test(s21_string_TC, s21_insert_test);
  tcase_add_test(s21_string_TC, s21_trim_test);

  return s21_string_test;
}
