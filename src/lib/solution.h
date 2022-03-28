#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <cstring>
#include <cstdint>

typedef struct list_node node_t;
struct list_node {
  void *data_ptr;
  list_node *next;
  list_node *prev;
  list_node(): data_ptr(nullptr), next(nullptr), prev(nullptr) {}
  list_node(void *input_data): data_ptr(input_data), next(nullptr), prev(nullptr) {} 
  list_node(void *input_data, list_node *next_node, list_node *prev_node): data_ptr(input_data), next(next_node), prev(prev_node) {}
};

typedef struct custom_list list_t;
struct custom_list {
  node_t *first_node;
  node_t *last_node;
  unsigned int list_size;
  custom_list(): first_node(nullptr), last_node(nullptr), list_size(0) {}  
};

class Custom_list_lib {
public:
  void list_nodes_init(list_t *list_ptr);
  void append_node(list_t *list_ptr, void *node_val_ptr);
  void create_list(list_t *list_ptr, void *vector_ptr, unsigned int num_items, int each_item_size);
};

#endif