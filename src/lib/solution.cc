#include "solution.h"

void Custom_list_lib::append_node(list_t *list_ptr, void *node_val_ptr)
{
  if (!list_ptr || !node_val_ptr) {
    return;
  }
  if (!((*list_ptr).list_size)) {
    list_nodes_init(list_ptr);
    list_ptr->first_node->data_ptr = node_val_ptr;
  } else {
    node_t *new_last_node = new node_t(node_val_ptr, list_ptr->last_node->next, list_ptr->last_node);
    list_ptr->last_node->next = new_last_node;
    list_ptr->last_node = new_last_node;
  }
  list_ptr->list_size++;
}

void Custom_list_lib::list_nodes_init(list_t *list_ptr)
{
  node_t *new_list_node = new node_t;
  list_ptr->first_node = new_list_node;
  list_ptr->last_node = new_list_node;
}

void Custom_list_lib::create_list(list_t *list_ptr, void *vector_ptr, unsigned int num_items, int each_item_size) 
{ 
  if (!num_items) {
    return;
  }
  for (unsigned int i = 0; i < num_items; i++) {
    char *item_val_ptr = new char[each_item_size];
    std::memcpy(item_val_ptr, (vector_ptr + i*each_item_size), sizeof(char)*each_item_size);
    append_node(list_ptr, (void*)item_val_ptr);
  }
}

