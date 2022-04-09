#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <cstring>
#include <cstdint>
#include <iostream>

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
  void list_integers_display(list_t *list_ptr);
  void list_nodes_init(list_t *list_ptr);
  bool list_is_empty(list_t *list_ptr);
  unsigned int list_size_get(list_t *list_ptr);
  void list_node_prepend(list_t *list_ptr, void *node_val_ptr);
  void list_node_append(list_t *list_ptr, void *node_val_ptr);
  void list_nodes_add_before_head(list_t *list_ptr, void *array_ptr, unsigned int num_items);
  void list_nodes_add_after_tail(list_t *list_ptr, void *array_ptr, unsigned int num_items);
  void list_nodes_create_and_add(list_t *list_ptr, void *array_ptr, unsigned int num_items, int each_item_size);
};

#endif