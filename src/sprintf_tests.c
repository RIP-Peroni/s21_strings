#include "test_main.h"

#define SIZE 512

START_TEST(s21_sprintf_test1) {
  char str1[80] = {0};
  char str2[80] = {0};
  ck_assert_int_eq(
      s21_sprintf(str1, "%% %d %f %s %d %c", -75, 46.36, "345", 95, 'r'),
      sprintf(str2, "%% %d %f %s %d %c", -75, 46.36, "345", 95, 'r'));
}
END_TEST

START_TEST(s21_sprintf_test2) {
  char MESSAGE_1[500] = "Hello, World!!";
  char MESSAGE_2[500] = "Hello, World!!";
  char TEST_c = '5';
  short TEST_d = -21475;
  int TEST_i = -50000;
  double TEST_f = -50.4324;
  char TEST_s[20] = "FLAMES";
  long int li = 2323454;

  ck_assert_int_eq(s21_sprintf(MESSAGE_2, "%c %05hd %i %f %s, %2.1ld", TEST_c,
                               TEST_d, TEST_i, TEST_f, TEST_s, li),
                   sprintf(MESSAGE_1, "%c %05hd %i %f %s, %2.1ld", TEST_c,
                           TEST_d, TEST_i, TEST_f, TEST_s, li));
}
END_TEST

START_TEST(s21_sprintf_test3) {
  char MESSAGE_1[500] = "Hello, World!!";
  char MESSAGE_2[500] = "Hello, World!!";
  char TEST_c = '1';
  int TEST_d = 99899;
  int TEST_i = 27;
  double TEST_f = -150.4324;
  char TEST_s[20] = "-0987ytref";

  ck_assert_int_eq(s21_sprintf(MESSAGE_2, "%c %+d %i %.1f %s", TEST_c, TEST_d,
                               TEST_i, TEST_f, TEST_s),
                   sprintf(MESSAGE_1, "%c %+d %i %.1f %s", TEST_c, TEST_d,
                           TEST_i, TEST_f, TEST_s));
}
END_TEST

START_TEST(s21_sprintf_test4) {
  char MESSAGE_1[500] = "Hello, World!!";
  char MESSAGE_2[500] = "Hello, World!!";
  char TEST_c = '5';
  int TEST_d = 2342;
  int TEST_d2 = -345;
  int TEST_i = -50000;
  double TEST_f = -50.4324;
  char TEST_s[20] = "FLAMES";

  ck_assert_int_eq(s21_sprintf(MESSAGE_2, "%c %+1d %i %f %s, %-1d", TEST_c,
                               TEST_d, TEST_i, TEST_f, TEST_s, TEST_d2),
                   sprintf(MESSAGE_1, "%c %+1d %i %f %s, %-1d", TEST_c, TEST_d,
                           TEST_i, TEST_f, TEST_s, TEST_d2));
}
END_TEST

START_TEST(s21_sprintf_test5) {
  char str1[80];
  char str2[80];
  int x1 = 234;
  int x2 = -345;
  char *format_string1 = "love %+d % d love";
  ck_assert_int_eq(s21_sprintf(str1, format_string1, x1, x2),
                   sprintf(str2, format_string1, x1, x2));
  ck_assert_str_eq(str2, str1);
}
END_TEST

START_TEST(s21_sprintf_test6) {
  char str1[80];
  char str2[80];
  char *format = "%.5i";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test7) {
  char str1[80];
  char str2[80];
  char *format = "%5d";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test8) {
  char str1[80];
  char str2[80];
  char *format = "%-5i";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test9) {
  char str1[80];
  char str2[80];
  char *format = "%+5.31li";
  long int val = 698518581899;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test10) {
  char str1[80];
  char str2[80];
  char *format = "%.0d";
  int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test11) {
  char str1[80];
  char str2[80];
  char *format = "% 1.d";
  int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test12) {
  char str1[80];
  char str2[80];
  char *format = "%hd";
  short int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test13) {
  char str1[80];
  char str2[80];
  char *format = "%.5c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test14) {
  char str1[80];
  char str2[80];
  char *format = "% -5c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test15) {
  char str1[80];
  char str2[80];
  char *format = "%-5.3c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test16) {
  char str1[80];
  char str2[80];
  char *format = "%s";
  char *val = "I LOVE STRINGS AND TESTS AND SCHOOL21 NO JOKE";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test17) {
  char str1[80];
  char str2[80];
  char *format = "%.15s";
  char *val = "I LOVE STRINGS AND TESTS AND SCHOOL21 NO JOKE";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test18) {
  char str1[80];
  char str2[80];
  char *format = "%15s";
  char *val = "77 IS MY FAVORITE NUMBER";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test19) {
  char str1[80];
  char str2[80];
  char *format = "%s";
  char *val =
      "77 IS MY FAVORITE NUMBER THIS IS SUPPOSED TO BE A VERY LONG STRING";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test20) {
  char str1[80];
  char str2[80];
  ck_assert_int_eq(s21_sprintf(str1, "abc"), sprintf(str2, "abc"));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test21) {
  char str1[80];
  char str2[80];
  ck_assert_int_eq(s21_sprintf(str1, "%c", '\t'), sprintf(str2, "%c", '\t'));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test22) {
  char str1[80];
  char str2[80];
  ck_assert_int_eq(s21_sprintf(str1, "%c%c%c%c%c", '\t', '\n', '0', 'S', 's'),
                   sprintf(str2, "%c%c%c%c%c", '\t', '\n', '0', 'S', 's'));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test23) {
  char str1[80];
  char str2[80];
  ck_assert_int_eq(s21_sprintf(str1, "%s", "Drop Sega PLS"),
                   sprintf(str2, "%s", "Drop Sega PLS"));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test24) {
  char str1[80];
  char str2[80];
  ck_assert_int_eq(
      s21_sprintf(str1, "%s%s%s%s%s", "Drop", " ", "Sega", " ", "PLS"),
      sprintf(str2, "%s%s%s%s%s", "Drop", " ", "Sega", " ", "PLS"));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test25) {
  char str1[80];
  char str2[80];
  ck_assert_int_eq(s21_sprintf(str1, "%d", 666), sprintf(str2, "%d", 666));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test26) {
  char str1[80];
  char str2[80];
  ck_assert_int_eq(s21_sprintf(str1, "%8c", '\t'), sprintf(str2, "%8c", '\t'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test27) {
  char str1[80];
  char str2[80];
  ck_assert_int_eq(s21_sprintf(str1, "%-8c", '\t'),
                   sprintf(str2, "%-8c", '\t'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test28) {
  char str1[80];
  char str2[80];
  char format[] = "%1.1f";
  ck_assert_int_eq(s21_sprintf(str1, format, 1.1), sprintf(str2, format, 1.1));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test29) {
  char str1[80];
  char str2[80];
  char format[] = "%8.3c";
  ck_assert_int_eq(s21_sprintf(str1, format, 'a'), sprintf(str2, format, 'a'));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test30) {
  char str1[80];
  char str2[80];
  char format[] = "%+5.5d aboba";
  int val = 10000;
  int a = s21_sprintf(str1, format, val);
  int b = sprintf(str2, format, val);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test31) {
  char str1[80];
  char str2[80];
  char format[] = "%7.7f";
  ck_assert_int_eq(s21_sprintf(str1, format, 11.123456),
                   sprintf(str2, format, 11.123456));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test32) {
  char str1[80];
  char str2[80];
  char format[] = "%7.4s";
  ck_assert_int_eq(s21_sprintf(str1, format, "aboba floppa"),
                   sprintf(str2, format, "aboba floppa"));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test33) {
  char str1[80];
  char str2[80];
  char format[] = "% c";
  ck_assert_int_eq(s21_sprintf(str1, format, 'a'), sprintf(str2, format, 'a'));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test34) {
  char str1[80];
  char str2[80];
  char format[] = "% s";
  ck_assert_int_eq(s21_sprintf(str1, format, "aboba likes floppa"),
                   sprintf(str2, format, "aboba likes floppa"));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test35) {
  char str1[80];
  char str2[80];
  char format[] = "% s% c";
  ck_assert_int_eq(s21_sprintf(str1, format, "", 'f'),
                   sprintf(str2, format, "", 'f'));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test36) {
  char str1[80];
  char str2[80];
  char format[] = "%.f";
  ck_assert_int_eq(s21_sprintf(str1, format, 121.123),
                   sprintf(str2, format, 121.123));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test37) {
  char str1[80];
  char str2[80];
  char *format = "%u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test38) {
  char str1[80];
  char str2[80];
  char *format = "%.51u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test39) {
  char str1[80];
  char str2[80];
  char *format = "% 5.51u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test40) {
  char str1[80];
  char str2[80];
  char *format = "%hu";
  unsigned short int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test41) {
  char str1[80];
  char str2[80];
  char *format = "%lu";
  unsigned long int val = 949149114140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test42) {
  char str1[80];
  char str2[80];
  char *format = "%+12d";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test43) {
  char str1[80];
  char str2[80];
  char *format = "%15u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test44) {
  char str1[80];
  char str2[80];
  char *format = "%-16u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test45) {
  char str1[80];
  char str2[80];
  char *format = "%15c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test46) {
  char str1[80];
  char str2[80];
  char *format = "%-5.3c%c%c%c%c Hello! ABOBA";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val, 'c', 'a', 'b', 'b'),
                   sprintf(str2, format, val, 'c', 'a', 'b', 'b'));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test47) {
  char str1[80];
  char str2[80];
  char *format = "%-15.9s";
  char *val = "77 IS MY FAVORITE NUMBER";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test48) {
  char str1[80];
  char str2[80];
  char format[] = "%10ld";
  ck_assert_int_eq(s21_sprintf(str1, format, 1), sprintf(str2, format, 1));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test49) {
  char str1[80];
  char str2[80];
  char format[] = "%6.6u";
  ck_assert_int_eq(s21_sprintf(str1, format, 12341151),
                   sprintf(str2, format, 12341151));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test50) {
  char str1[80];
  char str2[80];
  char format[] = "%+li%+lu%+d%+lf";
  ck_assert_int_eq(s21_sprintf(str1, format, -123, 321, -5555, -1213.123),
                   sprintf(str2, format, -123, 321, -5555, -1213.123));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test51) {
  char str1[80];
  char str2[80];
  char *format = "% d";
  int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test52) {
  char str1[80];
  char str2[80];
  ck_assert_int_eq(s21_sprintf(str1, "%d%d%d%d", -999, 0, 666, -100),
                   sprintf(str2, "%d%d%d%d", -999, 0, 666, -100));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test53) {
  char str1[80];
  char str2[80];
  ck_assert_int_eq(s21_sprintf(str1, "%i", -0), sprintf(str2, "%i", -0));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test54) {
  char str1[80];
  char str2[80];
  ck_assert_int_eq(s21_sprintf(str1, "%i%i%i%i", -999, 0, 666, -100),
                   sprintf(str2, "%i%i%i%i", -999, 0, 666, -100));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test55) {
  char str1[80];
  char str2[80];
  ck_assert_int_eq(
      s21_sprintf(str1, "%3c%-11c%10c%-2c%c", '\t', '\n', '0', 'S', 's'),
      sprintf(str2, "%3c%-11c%10c%-2c%c", '\t', '\n', '0', 'S', 's'));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test56) {
  char str1[80];
  char str2[80];
  ck_assert_int_eq(s21_sprintf(str1, "%x%X%o", 25, 25, 25),
                   sprintf(str2, "%x%X%o", 25, 25, 25));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test57) {
  char str1[80];
  char str2[80];
  ck_assert_int_eq(s21_sprintf(str1, "%-2x%X%o", 25, 25, 25),
                   sprintf(str2, "%-2x%X%o", 25, 25, 25));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test58) {
  char str1[80];
  char str2[80];
  ck_assert_int_eq(s21_sprintf(str1, "%g%G", 1.25, 0.25),
                   sprintf(str2, "%g%G", 1.25, 0.25));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test59) {
  char str1[80];
  char str2[80];
  ck_assert_int_eq(s21_sprintf(str1, "%g%G%e%E", 0.0000000125, 0.00000000125,
                               0.000000001285, 0.000000001215),
                   sprintf(str2, "%g%G%e%E", 0.0000000125, 0.00000000125,
                           0.000000001285, 0.000000001215));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test60) {
  char str1[80];
  char str2[80];
  int ptr1 = 20;
  int x;
  ck_assert_int_eq(s21_sprintf(str1, "%n%*p", &x, 7, &ptr1),
                   sprintf(str2, "%n%*p", &x, 7, &ptr1));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test61) {
  char str1[80];
  char str2[80];
  ck_assert_int_eq(s21_sprintf(str1, "%*.*f", 7, 6, 2.55),
                   sprintf(str2, "%*.*f", 7, 6, 2.55));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test62) {
  char str1[80];
  char str2[80];
  ck_assert_int_eq(s21_sprintf(str1, "%#o", 255), sprintf(str2, "%#o", 255));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test63) {
  char str1[80];
  char str2[80];
  ck_assert_int_eq(s21_sprintf(str1, "%e", 125.35),
                   sprintf(str2, "%e", 125.35));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(s21_sprintf_test64) {
  char str1[80];
  char str2[80];
  ck_assert_int_eq(s21_sprintf(str1, "%%"), sprintf(str2, "%%"));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_simple_int) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "This is a simple value %d";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_precise_int) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%.5i";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_width_int) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%5d";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_minus_width_int) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%-5i";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_plus_width_int) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%+12d";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_padding_int) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%012i";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_star_width_int) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%05d";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, 5, val),
                   sprintf(str2, format, 5, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_star_precision_int) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%0.*i";
  int val = 69;
  ck_assert_int_eq(s21_sprintf(str1, format, 5, val),
                   sprintf(str2, format, 5, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_many_flags_many_ints) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char format[] = "%0.*i %d %4.*i %013d %d";
  int val = 69;
  ck_assert_int_eq(
      s21_sprintf(str1, format, 5, val, -10431, 13, 5311, 0, -581813581),
      sprintf(str2, format, 5, val, -10431, 13, 5311, 0, -581813581));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_flags_long_int) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%+5.31li";
  long int val = 698518581899;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_flags_short_int) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%-16.9hi";
  short int val = 6958;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_flags_another_long_int) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%0.*ld";
  long val = 8581385185;
  ck_assert_int_eq(s21_sprintf(str1, format, 5, val),
                   sprintf(str2, format, 5, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_zero_precision_zero_int) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%.0d";
  int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_space_flag_int) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "% d";
  int val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_unsigned_val) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_unsigned_val_width) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%15u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_unsigned_val_flags) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%-16u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_unsigned_val_precision) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%.51u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_unsigned_val_many_flags) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "% 5.51u";
  unsigned int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_unsigned_val_short) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%hu";
  unsigned short int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_unsigned_val_long) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%lu";
  unsigned long int val = 949149114140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_unsigned_val_many) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%lu, %u, %hu, %.5u, %5.u";
  unsigned long int val = 949149114140;
  ck_assert_int_eq(
      s21_sprintf(str1, format, val, 14, 1441, 14414, 9681),
      sprintf(str2, format, val, (unsigned)14, (unsigned short)1441,
              (unsigned)14414, (unsigned)9681));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_octal_width) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%15o";
  int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_octal_flags) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%-16o";
  int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_octal_precision) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%.51o";
  int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_octal_many_flags) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%-5.51o";
  int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_octal_zero) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%o";
  ck_assert_int_eq(s21_sprintf(str1, format, 0), sprintf(str2, format, 0));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_octal_hash) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%#o";
  int val = 57175;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_octal_short) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%hd";
  short int val = 14140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_octal_long) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%lo";
  long int val = 949149114140;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_octal_many) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%lo, %o, %ho, %.5o, %5.o";
  long int val = 949149114140;
  ck_assert_int_eq(
      s21_sprintf(str1, format, val, 14, 1441, 14414, 9681),
      sprintf(str2, format, val, (unsigned)14, (unsigned short)1441,
              (unsigned)14414, (unsigned)9681));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_octal) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%lo";
  long int val = 84518;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_unsigned_zero) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%u";
  ck_assert_int_eq(s21_sprintf(str1, format, 0),
                   sprintf(str2, format, (unsigned)0));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hex_width) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%5x";
  unsigned val = 858158158;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hex_flags) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%#-10x";
  unsigned val = 858158158;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hex_precision) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%.15x";
  unsigned val = 858158158;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hex_many) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%#-10x%x%X%#x%#X%5.5x";
  unsigned val = 858158158;
  ck_assert_int_eq(s21_sprintf(str1, format, val, val, val, val, val, val),
                   sprintf(str2, format, val, val, val, val, val, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hex_many_flags) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%#-5.10x";
  unsigned val = 858158158;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hex_zero) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%#x";
  unsigned val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hex_huge) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%#x";
  unsigned val = 18571;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hex_short) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%#hx";
  unsigned short val = 12352;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hex_long) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%#lx";
  unsigned long val = 18571757371571;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hex_one_longer_width) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%#2x";
  unsigned val = 1;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hex_two_longer_width) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%#30x";
  unsigned val = 1;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_one_char) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%c";
  char val = 'X';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(sprintf_one_precision) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%.5c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_one_flags) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "% -5c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_one_width) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%15c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_one_many) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%-5.3c%c%c%c%c Hello! ABOBA";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val, 'c', 'a', 'b', 'b'),
                   sprintf(str2, format, val, 'c', 'a', 'b', 'b'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_one_many_flags) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%-5.3c";
  char val = 'c';
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_string) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%s";
  char *val = "I LOVE STRINGS AND TESTS AND SCHOOL21 NO JOKE";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_string_precision) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%.15s";
  char *val = "I LOVE STRINGS AND TESTS AND SCHOOL21 NO JOKE";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_string_width) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%15s";
  char *val = "69 IS MY FAVORITE NUMBER";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_string_flags) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%-15.9s";
  char *val = "69 IS MY FAVORITE NUMBER";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_string_long) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%s";
  char *val =
      "69 IS MY FAVORITE NUMBER THIS IS SUPPOSED TO BE A VERY LONG STRING";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_string_many) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%s%s%s%s";
  char *val =
      "69 IS MY FAVORITE NUMBER THIS IS SUPPOSED TO BE A VERY LONG STRING";
  char *s1 = "";
  char *s2 = "87418347813748913749871389480913";
  char *s3 = "HAHAABOBASUCKER";
  ck_assert_int_eq(s21_sprintf(str1, format, val, s1, s2, s3),
                   sprintf(str2, format, val, s1, s2, s3));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_ptr_width) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%15p";
  ck_assert_int_eq(s21_sprintf(str1, format, format),
                   sprintf(str2, format, format));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_string_width_huge) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char *val = "kjafdiuhfjahfjdahf";
  char *format = "%120s";
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_n_specifier) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  int ret = 0;
  char *format = "Hello, my sexy little aboba abobushka abobina %n";
  ck_assert_int_eq(s21_sprintf(str1, format, &ret),
                   sprintf(str2, format, &ret));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_float_precision) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char *format = "%Lf";
  long double val = 513515.131513515151351;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_float_width) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char *format = "%10Lf";
  long double val = 15.35;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_float_precision_zero) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char *format = "%.0Lf";
  long double val = 15.35;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_float_precision_empty) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char *format = "%.Lf";
  long double val = 15.35;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_float_precision_huge) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char *format = "%.15Lf";
  long double val = 15.35;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_float_precision_huge_negative) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char *format = "%.15Lf";
  long double val = -15.35581134;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_float_huge) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char *format = "%Lf";
  long double val = 72537572375.1431341;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_float_flags) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char *format = "% f";
  float val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_float_many) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "% .0f %.lf %Lf %f %lf %Lf";
  float val = 0;
  double val1 = 0;
  long double val2 = 3515315.153151;
  float val3 = 5.5;
  double val4 = 9851.51351;
  long double val5 = 95919539159.53151351131;
  ck_assert_int_eq(s21_sprintf(str1, format, val, val1, val2, val3, val4, val5),
                   sprintf(str2, format, val, val1, val2, val3, val4, val5));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_precision_zero) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char *format = "%.0Le";
  long double val = 15.35;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_precision_empty) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char *format = "%.Le";
  long double val = 15.000009121;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(sprintf_e_precision_huge) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char *format = "%.15Le";
  long double val = 0.000000000000000123;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_precision_huge_negative) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char *format = "%.15Le";
  long double val = -15.35581134;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_huge) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char *format = "%Le";
  long double val = 72537572375.1431341;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_flags) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%015E";
  float val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_width) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "%15e";
  float val = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_e_many) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char *format = "% .0e %.le %Le %e %le %Le";
  float val = 0;
  double val1 = 0;
  long double val2 = 3515315.153151;
  float val3 = 5.5;
  double val4 = 0.094913941;
  long double val5 = 95919539159.53151351131;
  ck_assert_int_eq(s21_sprintf(str1, format, val, val1, val2, val3, val4, val5),
                   sprintf(str2, format, val, val1, val2, val3, val4, val5));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_all_empty) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  ck_assert_int_eq(s21_sprintf(str1, "abc"), sprintf(str2, "abc"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_empty_format_and_parameters) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "abc"), sprintf(str2, "abc"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_char) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%c", '\t'), sprintf(str2, "%c", '\t'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_char) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%c%c%c%c%c", '\t', '\n', '0', 'S', 's'),
                   sprintf(str2, "%c%c%c%c%c", '\t', '\n', '0', 'S', 's'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_string) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%s", "Drop Sega PLS"),
                   sprintf(str2, "%s", "Drop Sega PLS"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_string) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(
      s21_sprintf(str1, "%s%s%s%s%s", "Drop", " ", "Sega", " ", "PLS"),
      sprintf(str2, "%s%s%s%s%s", "Drop", " ", "Sega", " ", "PLS"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_dec) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%d", 666), sprintf(str2, "%d", 666));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_dec) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%d%d%d%d", -999, 0, 666, -100),
                   sprintf(str2, "%d%d%d%d", -999, 0, 666, -100));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_int) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%i", -0), sprintf(str2, "%i", -0));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_int) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%i%i%i%i", -999, 0, 666, -100),
                   sprintf(str2, "%i%i%i%i", -999, 0, 666, -100));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_float) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  ck_assert_int_eq(s21_sprintf(str1, "%f", 0.0001),
                   sprintf(str2, "%f", 0.0001));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_float) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  ck_assert_int_eq(
      s21_sprintf(str1, "%f%f%f%f", -999.666, 0.0001, 666.999, -100.001),
      sprintf(str2, "%f%f%f%f", -999.666, 0.0001, 666.999, -100.001));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_unsigned_dec) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  ck_assert_int_eq(s21_sprintf(str1, "%u", 100),
                   sprintf(str2, "%u", (unsigned)100));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_unsigned_dec) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%u%u%u%u", 999, 0, 666, 100),
                   sprintf(str2, "%u%u%u%u", (unsigned)999, (unsigned)0,
                           (unsigned)666, (unsigned)100));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_char_with_alignment_left) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%8c", '\t'), sprintf(str2, "%8c", '\t'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_char_with_alignment_right) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%-8c", '\t'),
                   sprintf(str2, "%-8c", '\t'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_char_with_alignment) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(
      s21_sprintf(str1, "%3c%-11c%10c%-2c%c", '\t', '\n', '0', 'S', 's'),
      sprintf(str2, "%3c%-11c%10c%-2c%c", '\t', '\n', '0', 'S', 's'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

// START HEX TEST
START_TEST(sprintf_test_one_hex_lower) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  ck_assert_int_eq(s21_sprintf(str1, "%x", (unsigned)INT32_MIN),
                   sprintf(str2, "%x", (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%x", 0), sprintf(str2, "%x", 0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%x", INT32_MAX),
                   sprintf(str2, "%x", INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_hex_upper) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%X", (unsigned)INT32_MIN),
                   sprintf(str2, "%X", (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%X", 0), sprintf(str2, "%x", 0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%X", INT32_MAX),
                   sprintf(str2, "%X", INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_hex_lower) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(
      s21_sprintf(str1, "%x%x%x%x%x", 12340987, 135, 0, -1230, -123213123),
      sprintf(str2, "%x%x%x%x%x", 12340987, 135, 0, -1230, -123213123));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_hex_upper) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(
      s21_sprintf(str1, "%X%X%X%X%X", 12340987, 135, 0, -1230, -123213123),
      sprintf(str2, "%X%X%X%X%X", 12340987, 135, 0, -1230, -123213123));
  ck_assert_str_eq(str1, str2);
}
END_TEST
// END HEX TEST

// START HEX WITH ALIGNMENT
START_TEST(sprintf_test_one_hex_lower_with_alignment_left) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%-3x", (unsigned)INT32_MIN),
                   sprintf(str2, "%-3x", (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%-3x", 0), sprintf(str2, "%-3x", 0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%-3x", INT32_MAX),
                   sprintf(str2, "%-3x", INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_hex_lower_with_alignment_right) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%13x", (unsigned)INT32_MIN),
                   sprintf(str2, "%13x", (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%13x", 0), sprintf(str2, "%13x", 0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%13x", INT32_MAX),
                   sprintf(str2, "%13x", INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_hex_upper_with_alignment_left) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%-60X", INT32_MIN),
                   sprintf(str2, "%-60X", (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%-60X", 0), sprintf(str2, "%-60X", 0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%-60X", INT32_MAX),
                   sprintf(str2, "%-60X", INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_hex_upper_with_alignment_right) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%7X", (unsigned)INT32_MIN),
                   sprintf(str2, "%7X", (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%7X", 0), sprintf(str2, "%7X", 0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%7X", INT32_MAX),
                   sprintf(str2, "%7X", INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_hex_lower_with_alignment) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(
      s21_sprintf(str1, "%2x%-7x%9x%11x%0x", 12340987, 100, 0, 1, -666999),
      sprintf(str2, "%2x%-7x%9x%11x%0x", 12340987, 100, 0, 1, -666999));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_hex_upper_with_alignment) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  ck_assert_int_eq(
      s21_sprintf(str1, "%2X%-7X%9X%11X%0X", 12340987, 100, 0, 1, -666999),
      sprintf(str2, "%2X%-7X%9X%11X%0X", 12340987, 100, 0, 1, -666999));
  ck_assert_str_eq(str1, str2);
}
END_TEST
// START HEX WITH ALIGNMENT

// START HEX TEST WITH #
START_TEST(sprintf_test_one_hex_with_hashtag) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%#x", INT32_MIN),
                   sprintf(str2, "%#x", (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%#x", 0), sprintf(str2, "%#x", 0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%#x", INT32_MAX),
                   sprintf(str2, "%#x", INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_hex_upper_with_hashtag) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%#X", INT32_MIN),
                   sprintf(str2, "%#X", (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%#X", 0), sprintf(str2, "%#X", 0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%#X", INT32_MAX),
                   sprintf(str2, "%#X", INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_hex_lower_with_hashtag_and_alignm) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(
      s21_sprintf(str1, "%#x%#x%3x%#32x%#-1x", 87, 1222224535, -13, -0,
                  123213123),
      sprintf(str2, "%#x%#x%3x%#32x%#-1x", 87, 1222224535, -13, -0, 123213123));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_hex_upper_with_hashtag_and_alignm) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(
      s21_sprintf(str1, "%#X%#X%3X%#32X%#-1X", 87, 1222224535, -13, -0,
                  123213123),
      sprintf(str2, "%#X%#X%3X%#32X%#-1X", 87, 1222224535, -13, -0, 123213123));
  ck_assert_str_eq(str1, str2);
}
END_TEST
// END HEX TEST WITH #

// START HEX TEST with width *
START_TEST(sprintf_test_one_hex_lower_with_width_star) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%*x", 11, INT32_MIN),
                   sprintf(str2, "%*x", 11, (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);

  ck_assert_int_eq(s21_sprintf(str1, "%*x", 11, 0),
                   sprintf(str2, "%*x", 11, 0));
  ck_assert_str_eq(str1, str2);

  ck_assert_int_eq(s21_sprintf(str1, "%*x", 11, INT32_MAX),
                   sprintf(str2, "%*x", 11, INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_hex_upper_with_width_star) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%*X", 11, INT32_MIN),
                   sprintf(str2, "%*X", 11, (unsigned)INT32_MIN));
  ck_assert_str_eq(str1, str2);

  ck_assert_int_eq(s21_sprintf(str1, "%*X", 11, 0),
                   sprintf(str2, "%*X", 11, 0));
  ck_assert_str_eq(str1, str2);

  ck_assert_int_eq(s21_sprintf(str1, "%*X", 11, INT32_MAX),
                   sprintf(str2, "%*X", 11, INT32_MAX));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_hex_lower_with_width_star_and_align_and_hashtag) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%#*x%*x%-12x%3x%*x", 9, 127312897, 0, -1,
                               199, -123978, 3, -1251),
                   sprintf(str2, "%#*x%*x%-12x%3x%*x", 9, 127312897, -0, -1,
                           199, -123978, 3, -1251));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_hex_upper_with_width_star) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%#*X%*X%-12X%3X%*X", 9, 127312897, 0, -1,
                               199, -123978, 3, -1251),
                   sprintf(str2, "%#*X%*X%-12X%3X%*X", 9, 127312897, 0, -1, 199,
                           -123978, 3, -1251));
  ck_assert_str_eq(str1, str2);
}
END_TEST
// END HEX TEST WITH Width *

// START HEX TEST WITH precision
START_TEST(sprintf_test_one_hex_lower_with_precision) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  int a = s21_sprintf(str1, "%*.6x", 11, 0);
  int b = sprintf(str2, "%*.6x", 11, 0);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_hex_upper_with_precision) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  int a = s21_sprintf(str1, "%*.6X", 11, INT32_MIN);
  int b = sprintf(str2, "%*.6X", 11, (unsigned)INT32_MIN);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_hex_lower_with_precision_and_other) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  int a = s21_sprintf(
      str1, "%#3.*x%#3x%-7.*x%#-1.8x%4.3x%#2.15x%*.*x%*.1x%3x%-1x", 3, 126714,
      4444444, 0, 6423235, 0, 666, 999, 13, 5, 419, 9, 41, -41, 33);
  int b = sprintf(str2, "%#3.*x%#3x%-7.*x%#-1.8x%4.3x%#2.15x%*.*x%*.1x%3x%-1x",
                  3, 126714, 4444444, 0, 6423235, 0, 666, 999, 13, 5, 419, 9,
                  41, -41, 33);
  ck_assert_int_eq(a, b);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_many_hex_upper_with_precision_and_other) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(
      s21_sprintf(str1, "%#3.*X%#3x%-7.*X%#-1.8X%4.3X%#2.15x%*.*X%*.1X%3X%-1X",
                  3, -126714, 4444444, 0, 6423235, 0, 666, 999, 13, 5, -419, 9,
                  41, -41, 33),
      sprintf(str2, "%#3.*X%#3x%-7.*X%#-1.8X%4.3X%#2.15x%*.*X%*.1X%3X%-1X", 3,
              -126714, 4444444, 0, 6423235, 0, 666, 999, 13, 5, -419, 9, 41,
              -41, 33));
  ck_assert_str_eq(str1, str2);
}
END_TEST
// END HEX TEST WITH precision

// START HEX TEST WITH Length
START_TEST(sprintf_test_one_hex_lower_with_length) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%hx", -11),
                   sprintf(str2, "%hx", (unsigned short)-11));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%hx", 0),
                   sprintf(str2, "%hx", (unsigned short)0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%hx", 11),
                   sprintf(str2, "%hx", (unsigned short)11));
  ck_assert_str_eq(str1, str2);
  long unsigned int val = INT32_MAX;
  ck_assert_int_eq(s21_sprintf(str1, "%lx", val), sprintf(str2, "%lx", val));
  ck_assert_str_eq(str1, str2);
  long unsigned int v = 0;
  ck_assert_int_eq(s21_sprintf(str1, "%lx", v), sprintf(str2, "%lx", v));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_one_hex_upper_with_length) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "%hx", -11),
                   sprintf(str2, "%hx", (unsigned short)-11));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%hx", 0),
                   sprintf(str2, "%hx", (unsigned short)0));
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(s21_sprintf(str1, "%hx", 11),
                   sprintf(str2, "%hx", (unsigned short)11));
  ck_assert_str_eq(str1, str2);
  long unsigned int val = INT32_MAX;
  ck_assert_int_eq(s21_sprintf(str1, "%lx", val), sprintf(str2, "%lx", val));
  ck_assert_str_eq(str1, str2);
  long unsigned int v = 0;
  ck_assert_int_eq(s21_sprintf(str1, "%lx", v), sprintf(str2, "%lx", v));
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf1) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%10ld";

  ck_assert_int_eq(s21_sprintf(str1, format, 1), sprintf(str2, format, 1));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf2) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%1.1f";

  ck_assert_int_eq(s21_sprintf(str1, format, 1.1), sprintf(str2, format, 1.1));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf3) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%8.3c";

  ck_assert_int_eq(s21_sprintf(str1, format, 'a'), sprintf(str2, format, 'a'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf4) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%+5.5d aboba";

  int val = 10000;
  int a = s21_sprintf(str1, format, val);
  int b = sprintf(str2, format, val);
  ck_assert_int_eq(a, b);

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf6) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%7.7f";

  ck_assert_int_eq(s21_sprintf(str1, format, 11.123456),
                   sprintf(str2, format, 11.123456));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf7) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%7.4s";

  ck_assert_int_eq(s21_sprintf(str1, format, "aboba floppa"),
                   sprintf(str2, format, "aboba floppa"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf8) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%6.6u";

  ck_assert_int_eq(s21_sprintf(str1, format, 12341151),
                   sprintf(str2, format, 12341151));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf9) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%li%ld%lu";

  ck_assert_int_eq(s21_sprintf(str1, format, 666666666666, 777, 111),
                   sprintf(str2, format, 666666666666, 777, 111));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf10) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%hi%hd%hu";

  ck_assert_int_eq(s21_sprintf(str1, format, 666, -777, 111),
                   sprintf(str2, format, 666, -777, 111));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf11) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%+li%+lu%+d%+lf";

  ck_assert_int_eq(s21_sprintf(str1, format, -123, 321, -5555, -1213.123),
                   sprintf(str2, format, -123, 321, -5555, -1213.123));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf14) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "% 0.0li% 0.0lu% 0.0ld % 0.0lf";

  ck_assert_int_eq(s21_sprintf(str1, format, 1, 222, 33333333333, -166513.1232),
                   sprintf(str2, format, 1, 222, 33333333333, -166513.1232));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf15) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "% 0.0hi% 0.0hu% 0.0hd % 0.0hf";

  ck_assert_int_eq(s21_sprintf(str1, format, 1, 222, 33333333333, -166513.1232),
                   sprintf(str2, format, 1, 222, 33333333333, -166513.1232));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf16) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "% c";

  ck_assert_int_eq(s21_sprintf(str1, format, 'a'), sprintf(str2, format, 'a'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf17) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "% s";

  ck_assert_int_eq(s21_sprintf(str1, format, "aboba likes floppa"),
                   sprintf(str2, format, "aboba likes floppa"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf18) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "% s% c";

  ck_assert_int_eq(s21_sprintf(str1, format, "", 'f'),
                   sprintf(str2, format, "", 'f'));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf19) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%210s";

  ck_assert_int_eq(s21_sprintf(str1, format, "AHHAHAHA\0AHHAHAHAH"),
                   sprintf(str2, format, "AHHAHAHA\0AHHAHAHAH"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf20) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%-115s";

  ck_assert_int_eq(s21_sprintf(str1, format, "Nick her"),
                   sprintf(str2, format, "Nick her"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf24) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%+2.1c%+4.2d%+5.4i%+10.2f%+55.55s%+1.1u";

  ck_assert_int_eq(
      s21_sprintf(str1, format, 'f', 21, 42, 666.666,
                  "Lorem ipsum dolor sit amet. Aut quam ducimus.", 11),
      sprintf(str2, format, 'f', 21, 42, 666.666,
              "Lorem ipsum dolor sit amet. Aut quam ducimus.", 11));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf25) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%.f";

  ck_assert_int_eq(s21_sprintf(str1, format, 121.123),
                   sprintf(str2, format, 121.123));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf28) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  int n1;
  int n2;
  int a = s21_sprintf(str1, "%d%n", 123, &n1);
  int b = sprintf(str2, "%d%n", 123, &n2);

  ck_assert_int_eq(a, b);
  ck_assert_int_eq(n1, n2);
  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf29) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%-.f";

  ck_assert_int_eq(s21_sprintf(str1, format, 111.111),
                   sprintf(str2, format, 111.111));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf30) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%-.1d";

  ck_assert_int_eq(s21_sprintf(str1, format, 111), sprintf(str2, format, 111));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf31) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%e";
  double x = 111;
  ck_assert_int_eq(s21_sprintf(str1, format, x), sprintf(str2, format, x));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf32) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%e%e%e%e";

  ck_assert_int_eq(s21_sprintf(str1, format, 11.111, 222.2222, 666., -555.125),
                   sprintf(str2, format, 11.111, 222.2222, 666., -555.125));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf33) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%Le";
  long double x = 122.1231;

  ck_assert_int_eq(s21_sprintf(str1, format, x), sprintf(str2, format, x));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf35) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%.10e";

  ck_assert_int_eq(s21_sprintf(str1, format, 111.184314818),
                   sprintf(str2, format, 111.184314818));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf36) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%5.3e%3.2e%lf";

  ck_assert_int_eq(s21_sprintf(str1, format, 0.000111, 111.555, 1.999),
                   sprintf(str2, format, 0.000111, 111.555, 1.999));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf37) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%E";

  ck_assert_int_eq(s21_sprintf(str1, format, 0.666666),
                   sprintf(str2, format, 0.666666));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf38) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%E%E%E";

  ck_assert_int_eq(s21_sprintf(str1, format, 0.0000999, 111.9999, 6.666),
                   sprintf(str2, format, 0.0000999, 111.9999, 6.666));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf39) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%e ABOBA %Lf %Lf %Le";
  long double c = 848181;
  long double a = 0.00000001;
  long double b = 1111111.11;
  ck_assert_int_eq(s21_sprintf(str1, format, 123.123, a, b, c),
                   sprintf(str2, format, 123.123, a, b, c));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf40) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%#e Floppa %#E%#f";

  ck_assert_int_eq(s21_sprintf(str1, format, 123.111, 0.0000999, 0.555),
                   sprintf(str2, format, 123.111, 0.0000999, 0.555));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf41) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%.Lf";
  long double a = 7.9418438184;

  ck_assert_int_eq(s21_sprintf(str1, format, a), sprintf(str2, format, a));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf42) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%#5p";
  int a = 5;
  ck_assert_int_eq(s21_sprintf(str1, format, &a), sprintf(str2, format, &a));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf43) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%.5o";

  ck_assert_int_eq(s21_sprintf(str1, format, 12345),
                   sprintf(str2, format, 12345));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_test_sprintf44) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%#5lX";
  long hex = 314818438141;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_trailing_zero) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%g";
  double hex = 0.50300;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_large) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%g";
  double hex = 5131.43141;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_small) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%g";
  double hex = 0.123000;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_precision) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%.5g";
  double hex = 0.123000;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_precision_zero) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%.0g";
  double hex = 0.123000;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_one_zero) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%g";
  double hex = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_zero) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%.5g";
  double hex = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_g_short_no_mantiss) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};
  char format[] = "%g";
  double hex = 0.005;
  ck_assert_int_eq(s21_sprintf(str1, format, hex), sprintf(str2, format, hex));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_hd_plus) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char format[] = "%+hi";
  int val = 37;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_ld_negative_num) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char format[] = "%8ld";
  long val = -435373;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_ge_intpart_andsmth) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char format[] = "%.8e";
  double val = 3.123008;
  ck_assert_int_eq(s21_sprintf(str1, format, val), sprintf(str2, format, val));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_ge_accnull1) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char format[] = "%.0g %Le";
  double val = 10000000000.123;
  long double val2 = 999999.99999;
  ck_assert_int_eq(s21_sprintf(str1, format, val, val2),
                   sprintf(str2, format, val, val2));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_ge_accnull2) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char format[] = "%+.0e %.0e %.5g";
  double val1 = 9.999;
  double val2 = 0.00999;
  double val3 = 0.0000099999;
  ck_assert_int_eq(s21_sprintf(str1, format, val1, val2, val3),
                   sprintf(str2, format, val1, val2, val3));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_lge_accnull2) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char format[] = "%+.0Le %.0Le %.5Lg %Le";
  long double val1 = 9.999;
  long double val2 = 0.00999;
  long double val3 = 0.0000099999;
  long double val4 = 0.0;
  ck_assert_int_eq(s21_sprintf(str1, format, val1, val2, val3, val4),
                   sprintf(str2, format, val1, val2, val3, val4));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_lge_1) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char format[] = "% .5Lg %.0LG";
  long double val = 123536789731.3457;
  long double val2 = 123536789731.3457;
  ck_assert_int_eq(s21_sprintf(str1, format, val, val2),
                   sprintf(str2, format, val, val2));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_float_smth) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char format[] = "%f %0.f %+Lf % Lf";
  double val = 0.999999999;
  double val2 = 0.6;
  long double val3 = 4.9999996;
  long double val4 = 6.76835;
  ck_assert_int_eq(s21_sprintf(str1, format, val, val2, val3, val4),
                   sprintf(str2, format, val, val2, val3, val4));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_gspec_smth) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char format[] = "%g %g %LG %Lg";
  double val = -0.34365;
  double val2 = 0.00000134000;
  long double val3 = 0;
  long double val4 = -6.76835;
  ck_assert_int_eq(s21_sprintf(str1, format, val, val2, val3, val4),
                   sprintf(str2, format, val, val2, val3, val4));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_percent) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  ck_assert_int_eq(s21_sprintf(str1, "hello its percent symb = %%"),
                   sprintf(str2, "hello its percent symb = %%"));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_lge_last_nulls) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char format[] = "%Lg %LG %Lg";
  long double val = 0.0000007;
  long double val2 = 0.00000134000;
  long double val3 = 0;
  ck_assert_int_eq(s21_sprintf(str1, format, val, val2, val3),
                   sprintf(str2, format, val, val2, val3));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_lho_precision) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char format[] = "%.10ho %#.2ho %.10lo %#.2lo";
  unsigned short val = 78;
  unsigned short val2 = 80;
  unsigned long val3 = 78;
  unsigned long val4 = 80;
  ck_assert_int_eq(s21_sprintf(str1, format, val, val2, val3, val4),
                   sprintf(str2, format, val, val2, val3, val4));

  ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(sprintf_lhux_precision) {
  char str1[SIZE] = {'\0'};
  char str2[SIZE] = {'\0'};

  char format[] = "%.10hu %.10lu %.10hx %.10lx";
  unsigned short val = 78;
  unsigned long val3 = 78;
  ck_assert_int_eq(s21_sprintf(str1, format, val, val3, val, val3),
                   sprintf(str2, format, val, val3, val, val3));

  ck_assert_str_eq(str1, str2);
}
END_TEST

Suite *s21_sprintf_suite(void) {
  Suite *s21_sprintf_test = suite_create("s21_sprintf_suite");
  TCase *s21_string_TC = tcase_create("s21_sprintf_TC");
  suite_add_tcase(s21_sprintf_test, s21_string_TC);

  tcase_add_test(s21_string_TC, s21_sprintf_test1);
  tcase_add_test(s21_string_TC, s21_sprintf_test2);
  tcase_add_test(s21_string_TC, s21_sprintf_test3);
  tcase_add_test(s21_string_TC, s21_sprintf_test4);
  tcase_add_test(s21_string_TC, s21_sprintf_test5);
  tcase_add_test(s21_string_TC, s21_sprintf_test6);
  tcase_add_test(s21_string_TC, s21_sprintf_test7);
  tcase_add_test(s21_string_TC, s21_sprintf_test8);
  tcase_add_test(s21_string_TC, s21_sprintf_test9);
  tcase_add_test(s21_string_TC, s21_sprintf_test10);
  tcase_add_test(s21_string_TC, s21_sprintf_test11);
  tcase_add_test(s21_string_TC, s21_sprintf_test12);
  tcase_add_test(s21_string_TC, s21_sprintf_test13);
  tcase_add_test(s21_string_TC, s21_sprintf_test14);
  tcase_add_test(s21_string_TC, s21_sprintf_test15);
  tcase_add_test(s21_string_TC, s21_sprintf_test16);
  tcase_add_test(s21_string_TC, s21_sprintf_test17);
  tcase_add_test(s21_string_TC, s21_sprintf_test18);
  tcase_add_test(s21_string_TC, s21_sprintf_test19);
  tcase_add_test(s21_string_TC, s21_sprintf_test20);
  tcase_add_test(s21_string_TC, s21_sprintf_test21);
  tcase_add_test(s21_string_TC, s21_sprintf_test22);
  tcase_add_test(s21_string_TC, s21_sprintf_test23);
  tcase_add_test(s21_string_TC, s21_sprintf_test24);
  tcase_add_test(s21_string_TC, s21_sprintf_test25);
  tcase_add_test(s21_string_TC, s21_sprintf_test26);
  tcase_add_test(s21_string_TC, s21_sprintf_test27);
  tcase_add_test(s21_string_TC, s21_sprintf_test28);
  tcase_add_test(s21_string_TC, s21_sprintf_test29);
  tcase_add_test(s21_string_TC, s21_sprintf_test30);
  tcase_add_test(s21_string_TC, s21_sprintf_test31);
  tcase_add_test(s21_string_TC, s21_sprintf_test32);
  tcase_add_test(s21_string_TC, s21_sprintf_test33);
  tcase_add_test(s21_string_TC, s21_sprintf_test34);
  tcase_add_test(s21_string_TC, s21_sprintf_test35);
  tcase_add_test(s21_string_TC, s21_sprintf_test36);
  tcase_add_test(s21_string_TC, s21_sprintf_test37);
  tcase_add_test(s21_string_TC, s21_sprintf_test38);
  tcase_add_test(s21_string_TC, s21_sprintf_test39);
  tcase_add_test(s21_string_TC, s21_sprintf_test40);
  tcase_add_test(s21_string_TC, s21_sprintf_test41);
  tcase_add_test(s21_string_TC, s21_sprintf_test42);
  tcase_add_test(s21_string_TC, s21_sprintf_test43);
  tcase_add_test(s21_string_TC, s21_sprintf_test44);
  tcase_add_test(s21_string_TC, s21_sprintf_test45);
  tcase_add_test(s21_string_TC, s21_sprintf_test46);
  tcase_add_test(s21_string_TC, s21_sprintf_test47);
  tcase_add_test(s21_string_TC, s21_sprintf_test48);
  tcase_add_test(s21_string_TC, s21_sprintf_test49);
  tcase_add_test(s21_string_TC, s21_sprintf_test50);
  tcase_add_test(s21_string_TC, s21_sprintf_test51);
  tcase_add_test(s21_string_TC, s21_sprintf_test52);
  tcase_add_test(s21_string_TC, s21_sprintf_test53);
  tcase_add_test(s21_string_TC, s21_sprintf_test54);
  tcase_add_test(s21_string_TC, s21_sprintf_test55);
  tcase_add_test(s21_string_TC, s21_sprintf_test56);
  tcase_add_test(s21_string_TC, s21_sprintf_test57);
  tcase_add_test(s21_string_TC, s21_sprintf_test58);
  tcase_add_test(s21_string_TC, s21_sprintf_test59);
  tcase_add_test(s21_string_TC, s21_sprintf_test60);
  tcase_add_test(s21_string_TC, s21_sprintf_test61);
  tcase_add_test(s21_string_TC, s21_sprintf_test62);
  tcase_add_test(s21_string_TC, s21_sprintf_test63);
  tcase_add_test(s21_string_TC, s21_sprintf_test64);

  tcase_add_test(s21_string_TC, sprintf_simple_int);
  tcase_add_test(s21_string_TC, sprintf_precise_int);
  tcase_add_test(s21_string_TC, sprintf_width_int);
  tcase_add_test(s21_string_TC, sprintf_minus_width_int);
  tcase_add_test(s21_string_TC, sprintf_plus_width_int);
  tcase_add_test(s21_string_TC, sprintf_padding_int);
  tcase_add_test(s21_string_TC, sprintf_star_width_int);
  tcase_add_test(s21_string_TC, sprintf_star_precision_int);
  tcase_add_test(s21_string_TC, sprintf_many_flags_many_ints);
  tcase_add_test(s21_string_TC, sprintf_flags_long_int);
  tcase_add_test(s21_string_TC, sprintf_flags_short_int);
  tcase_add_test(s21_string_TC, sprintf_flags_another_long_int);
  tcase_add_test(s21_string_TC, sprintf_zero_precision_zero_int);
  tcase_add_test(s21_string_TC, sprintf_space_flag_int);
  tcase_add_test(s21_string_TC, sprintf_unsigned_val);
  tcase_add_test(s21_string_TC, sprintf_unsigned_val_width);
  tcase_add_test(s21_string_TC, sprintf_unsigned_val_flags);
  tcase_add_test(s21_string_TC, sprintf_unsigned_val_precision);
  tcase_add_test(s21_string_TC, sprintf_unsigned_val_many_flags);
  tcase_add_test(s21_string_TC, sprintf_unsigned_val_short);
  tcase_add_test(s21_string_TC, sprintf_unsigned_val_long);
  tcase_add_test(s21_string_TC, sprintf_unsigned_val_many);
  tcase_add_test(s21_string_TC, sprintf_octal_width);
  tcase_add_test(s21_string_TC, sprintf_octal_flags);
  tcase_add_test(s21_string_TC, sprintf_octal_precision);
  tcase_add_test(s21_string_TC, sprintf_octal_many_flags);
  tcase_add_test(s21_string_TC, sprintf_octal_short);
  tcase_add_test(s21_string_TC, sprintf_octal_long);
  tcase_add_test(s21_string_TC, sprintf_octal_many);
  tcase_add_test(s21_string_TC, sprintf_octal);
  tcase_add_test(s21_string_TC, sprintf_octal_zero);
  tcase_add_test(s21_string_TC, sprintf_octal_hash);
  tcase_add_test(s21_string_TC, sprintf_unsigned_zero);
  tcase_add_test(s21_string_TC, sprintf_hex_width);
  tcase_add_test(s21_string_TC, sprintf_hex_flags);
  tcase_add_test(s21_string_TC, sprintf_hex_precision);
  tcase_add_test(s21_string_TC, sprintf_hex_many);
  tcase_add_test(s21_string_TC, sprintf_hex_many_flags);
  tcase_add_test(s21_string_TC, sprintf_hex_zero);
  tcase_add_test(s21_string_TC, sprintf_hex_huge);
  tcase_add_test(s21_string_TC, sprintf_hex_short);
  tcase_add_test(s21_string_TC, sprintf_hex_long);
  tcase_add_test(s21_string_TC, sprintf_hex_one_longer_width);
  tcase_add_test(s21_string_TC, sprintf_hex_two_longer_width);
  tcase_add_test(s21_string_TC, sprintf_one_char);
  tcase_add_test(s21_string_TC, sprintf_one_precision);
  tcase_add_test(s21_string_TC, sprintf_one_flags);
  tcase_add_test(s21_string_TC, sprintf_one_width);
  tcase_add_test(s21_string_TC, sprintf_one_many);
  tcase_add_test(s21_string_TC, sprintf_one_many_flags);
  tcase_add_test(s21_string_TC, sprintf_string);
  tcase_add_test(s21_string_TC, sprintf_string_precision);
  tcase_add_test(s21_string_TC, sprintf_string_width);
  tcase_add_test(s21_string_TC, sprintf_string_flags);
  tcase_add_test(s21_string_TC, sprintf_string_long);
  tcase_add_test(s21_string_TC, sprintf_string_many);
  tcase_add_test(s21_string_TC, sprintf_ptr_width);
  tcase_add_test(s21_string_TC, sprintf_n_specifier);
  tcase_add_test(s21_string_TC, sprintf_string_width_huge);
  tcase_add_test(s21_string_TC, sprintf_float_precision);
  tcase_add_test(s21_string_TC, sprintf_float_width);
  tcase_add_test(s21_string_TC, sprintf_float_precision_zero);
  tcase_add_test(s21_string_TC, sprintf_float_precision_empty);
  tcase_add_test(s21_string_TC, sprintf_float_precision_huge);
  tcase_add_test(s21_string_TC, sprintf_float_precision_huge_negative);
  tcase_add_test(s21_string_TC, sprintf_float_huge);
  tcase_add_test(s21_string_TC, sprintf_float_flags);
  tcase_add_test(s21_string_TC, sprintf_float_many);
  tcase_add_test(s21_string_TC, sprintf_e_precision_zero);
  tcase_add_test(s21_string_TC, sprintf_e_precision_empty);
  tcase_add_test(s21_string_TC, sprintf_e_precision_huge);
  tcase_add_test(s21_string_TC, sprintf_e_precision_huge_negative);
  tcase_add_test(s21_string_TC, sprintf_e_huge);
  tcase_add_test(s21_string_TC, sprintf_e_many);
  tcase_add_test(s21_string_TC, sprintf_e_width);
  tcase_add_test(s21_string_TC, sprintf_e_flags);
  tcase_add_test(s21_string_TC, sprintf_all_empty);
  tcase_add_test(s21_string_TC, sprintf_empty_format_and_parameters);
  tcase_add_test(s21_string_TC, sprintf_test_one_char);
  tcase_add_test(s21_string_TC, sprintf_test_many_char);
  tcase_add_test(s21_string_TC, sprintf_test_one_string);
  tcase_add_test(s21_string_TC, sprintf_test_many_string);
  tcase_add_test(s21_string_TC, sprintf_test_one_dec);
  tcase_add_test(s21_string_TC, sprintf_test_many_dec);
  tcase_add_test(s21_string_TC, sprintf_test_one_int);
  tcase_add_test(s21_string_TC, sprintf_test_many_int);
  tcase_add_test(s21_string_TC, sprintf_test_one_float);
  tcase_add_test(s21_string_TC, sprintf_test_many_float);
  tcase_add_test(s21_string_TC, sprintf_test_one_unsigned_dec);
  tcase_add_test(s21_string_TC, sprintf_test_many_unsigned_dec);
  tcase_add_test(s21_string_TC, sprintf_test_one_char_with_alignment_left);
  tcase_add_test(s21_string_TC, sprintf_test_one_char_with_alignment_right);
  tcase_add_test(s21_string_TC, sprintf_test_many_char_with_alignment);
  tcase_add_test(s21_string_TC, sprintf_test_one_hex_lower);
  tcase_add_test(s21_string_TC, sprintf_test_one_hex_upper);
  tcase_add_test(s21_string_TC, sprintf_test_many_hex_lower);
  tcase_add_test(s21_string_TC, sprintf_test_many_hex_upper);
  tcase_add_test(s21_string_TC, sprintf_test_one_hex_lower_with_alignment_left);
  tcase_add_test(s21_string_TC,
                 sprintf_test_one_hex_lower_with_alignment_right);
  tcase_add_test(s21_string_TC, sprintf_test_one_hex_upper_with_alignment_left);
  tcase_add_test(s21_string_TC,
                 sprintf_test_one_hex_upper_with_alignment_right);
  tcase_add_test(s21_string_TC, sprintf_test_many_hex_lower_with_alignment);
  tcase_add_test(s21_string_TC, sprintf_test_many_hex_upper_with_alignment);
  tcase_add_test(s21_string_TC, sprintf_test_one_hex_with_hashtag);
  tcase_add_test(s21_string_TC, sprintf_test_one_hex_upper_with_hashtag);
  tcase_add_test(s21_string_TC,
                 sprintf_test_many_hex_lower_with_hashtag_and_alignm);
  tcase_add_test(s21_string_TC,
                 sprintf_test_many_hex_upper_with_hashtag_and_alignm);
  tcase_add_test(s21_string_TC, sprintf_test_one_hex_lower_with_width_star);
  tcase_add_test(s21_string_TC, sprintf_test_one_hex_upper_with_width_star);
  tcase_add_test(
      s21_string_TC,
      sprintf_test_many_hex_lower_with_width_star_and_align_and_hashtag);
  tcase_add_test(s21_string_TC, sprintf_test_many_hex_upper_with_width_star);
  tcase_add_test(s21_string_TC, sprintf_test_one_hex_lower_with_precision);
  tcase_add_test(s21_string_TC, sprintf_test_one_hex_upper_with_precision);
  tcase_add_test(s21_string_TC,
                 sprintf_test_many_hex_lower_with_precision_and_other);
  tcase_add_test(s21_string_TC,
                 sprintf_test_many_hex_upper_with_precision_and_other);
  tcase_add_test(s21_string_TC, sprintf_test_one_hex_lower_with_length);
  tcase_add_test(s21_string_TC, sprintf_test_one_hex_upper_with_length);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf1);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf2);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf3);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf4);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf6);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf7);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf8);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf9);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf10);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf11);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf14);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf15);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf16);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf17);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf18);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf19);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf20);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf24);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf25);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf28);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf29);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf30);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf31);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf32);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf33);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf35);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf36);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf37);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf38);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf39);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf40);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf41);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf42);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf43);
  tcase_add_test(s21_string_TC, sprintf_test_sprintf44);
  tcase_add_test(s21_string_TC, sprintf_g_trailing_zero);
  tcase_add_test(s21_string_TC, sprintf_g_large);
  tcase_add_test(s21_string_TC, sprintf_g_small);
  tcase_add_test(s21_string_TC, sprintf_g_precision);
  tcase_add_test(s21_string_TC, sprintf_g_precision_zero);
  tcase_add_test(s21_string_TC, sprintf_g_one_zero);
  tcase_add_test(s21_string_TC, sprintf_g_short_no_mantiss);
  tcase_add_test(s21_string_TC, sprintf_g_zero);
  tcase_add_test(s21_string_TC, sprintf_hd_plus);
  tcase_add_test(s21_string_TC, sprintf_ld_negative_num);
  tcase_add_test(s21_string_TC, sprintf_ge_intpart_andsmth);
  tcase_add_test(s21_string_TC, sprintf_ge_accnull1);
  tcase_add_test(s21_string_TC, sprintf_ge_accnull2);
  tcase_add_test(s21_string_TC, sprintf_lge_accnull2);
  tcase_add_test(s21_string_TC, sprintf_lge_1);
  tcase_add_test(s21_string_TC, sprintf_float_smth);
  tcase_add_test(s21_string_TC, sprintf_gspec_smth);
  tcase_add_test(s21_string_TC, sprintf_percent);
  tcase_add_test(s21_string_TC, sprintf_lge_last_nulls);
  tcase_add_test(s21_string_TC, sprintf_lho_precision);
  tcase_add_test(s21_string_TC, sprintf_lhux_precision);

  return s21_sprintf_test;
}