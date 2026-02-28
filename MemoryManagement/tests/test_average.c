#include "average.h"
#include "munit.h"

static MunitResult test_average_basic(const MunitParameter params[],
                                      void *data) {
  (void)params;
  (void)data;

  float result = get_average(3, 4, 5);
  munit_assert_double_equal(result, 4.0, 4);
  return MUNIT_OK;
}

static MunitTest tests[] = {
    {"/basic", test_average_basic, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL},
    {NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL}};

static const MunitSuite suite = {"/average", tests, NULL, 1,
                                 MUNIT_SUITE_OPTION_NONE};

int main(int argc, char *argv[]) {
  return munit_suite_main(&suite, NULL, argc, argv);
}
