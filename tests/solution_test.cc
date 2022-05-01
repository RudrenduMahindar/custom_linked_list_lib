#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(List_size_check_valid, Return_list_size_get) {
  Custom_list_lib list_obj;
  list_t new_list;
  int input_array[] = {0, 1};
  list_obj.list_nodes_create_and_add(&new_list, &input_array, 2, sizeof(input_array[0]));
  int actual = list_obj.list_size_get(&new_list);
  int expected = 2;
  EXPECT_EQ(expected, actual);
}

TEST(List_size_check_invalid, Return_zero) {
  Custom_list_lib list_obj;
  list_t new_list;
  int input_array[] = {0, 1};
  list_obj.list_nodes_create_and_add(nullptr, &input_array, 2, sizeof(input_array[0]));
  int actual = list_obj.list_size_get(&new_list);
  int expected = 0;
  EXPECT_EQ(expected, actual);
}