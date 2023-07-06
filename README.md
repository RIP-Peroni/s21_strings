# s21_strings

## Notes

---
Package check was not found in the pkg-config search path.
Perhaps you should add the directory containing `check.pc'
to the PKG_CONFIG_PATH environment variable
No package 'check' found
gcc *.c s21_string.a -lcheck  -lpthread -lrt -lsubunit -lm -o test
In file included from sprintf_tests.c:1:
test_main.h:4:10: fatal error: check.h: No such file or directory

    4 | #include <check.h>
      |          ^~~~~~~~~

УДАЛОСЬ РЕШИТЬ ПРИ ПОМОЩИ

```sudo apt-get install check```

---

rm -rf *.o *.out *.a *.gcno *.gcda *.gcov *.html *.css *.info test report test.dSYM 
gcc s21_*.c -c 
ar rc s21_string.a s21_*.o
ranlib s21_string.a
rm -rf *.o
gcc -fprofile-arcs -ftest-coverage *.c -o report.out -lcheck -pthread -lcheck_pic -pthread -lrt -lm -lsubunit -lpthread -lrt -lsubunit -lm
./report.out
Running suite(s): s21_string_suite
100%: Checks: 231, Failures: 0, Errors: 0
Running suite(s): s21_sprintf_suite
100%: Checks: 237, Failures: 0, Errors: 0
lcov -t "report" -o report.info -c -d .
/bin/sh: 1: lcov: not found
make: *** [Makefile:34: gcov_report] Error 127

УДАЛОСЬ РЕШИТЬ ПРИ ПОМОЩИ

```sudo apt-get install lcov```

---

Я:

*привет, Паш*
*это же ты рассказывал, что у вас на проекте вертер упал на библиотеке check.h?*

Павел Парамонов:

*В хедер check не прописывай, только в main*

Если что, попробовал - не компилится. Оставил как было.

---

Тут пока что просто комменты к коду. Отредаченный Makefile на маке и на домашнем ноуте.