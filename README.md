# s21_strings

## Notes

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