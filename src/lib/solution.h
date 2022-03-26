#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>

typedef struct list_node node_t;
struct list_node {
  void *data_ptr;
  list_node *next;
  list_node(): data_ptr(nullptr), next(nullptr) {}
  list_node(void *input_data): data_ptr(input_data), next(nullptr) {} 
  list_node(void *input_data, list_node *next_node): data_ptr(input_data), next(next_node) {}
};

typedef struct custom_list list_t;
struct custom_list {
  node_t *first_node;
  node_t *last_node;
  
};

class Solution {
public:
  std::string PrintHelloWorld();
};

#endif