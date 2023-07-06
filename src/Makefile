CC=gcc
CFLAGS=-Wall -Werror -Wextra -std=c11
PROJECT=s21_string
FLAGS_CHECK=-lcheck $(shell pkg-config --cflags --libs check)
FLAGS_GCOV=-fprofile-arcs -ftest-coverage

ifeq ($(shell uname), Linux)
 FLAGS_CHECK += -lpthread -lrt -lsubunit -lm
endif

all: $(PROJECT).a

clean:
	rm -rf *.o *.out *.a *.gcno *.gcda *.gcov *.html *.css *.info test report test.dSYM 

rebuild: clean all

$(PROJECT).a: 
	gcc s21_*.c -c 
	ar rc $(PROJECT).a s21_*.o
	ranlib $(PROJECT).a
	rm -rf *.o

test: $(PROJECT).a
	$(CC) *.c $(PROJECT).a $(FLAGS_CHECK) -o test
	./test

gcov_report: clean $(PROJECT).a
	$(CC) $(FLAGS_GCOV) *.c -o report.out $(FLAGS_CHECK)
	./report.out
	lcov -t "report" -o report.info -c -d .
	genhtml -o ./report report.info
	open ./report/index.html
	rm -f *.gcov *.gcda *.gcno *.info report.out 

format:
	clang-format -i -style=Google *.c *.h
	clang-format -n -style=Google *.c *.h