#include "src/lib/solution.h"

int main()
{
    Custom_list_lib list_obj;
    list_t new_list;
    int input_array[4] = {10, 20, 40, 60};
    list_obj.list_nodes_create_and_add(&new_list, &input_array, 4, sizeof(input_array[0]));
    list_obj.list_integers_display(&new_list);
    std::cout << "items in list = " << (list_obj.list_size_get(&new_list)) << std::endl; 
    std::cout << "first item = " << *(int*)(new_list.first_node->data_ptr) << std::endl;
    std::cout << "last item = " << *(int*)(new_list.last_node->data_ptr) << std::endl;
    return EXIT_SUCCESS;
}