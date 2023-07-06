#include "test_main.h"

int main(void) {
  int failed_amount;

  Suite *s_s21_string[] = {s21_string_suite(), s21_sprintf_suite(), NULL};

  for (Suite **all_tests = s_s21_string; *all_tests != NULL; all_tests++) {
    SRunner *sr_s21_string = srunner_create(*all_tests);
    srunner_run_all(sr_s21_string, CK_NORMAL);
    failed_amount = srunner_ntests_failed(sr_s21_string);
    srunner_free(sr_s21_string);
  }

  return (0 == failed_amount) ? EXIT_SUCCESS : EXIT_FAILURE;
}