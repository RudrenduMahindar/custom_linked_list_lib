#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Custom_list_lib list_obj;
    list_t new_list;
    std::vector<int> v = {1, 2, 3, 4};
    list_obj.create_list(&new_list, &v, v.size(), v[0]);
    std::cout << "items in list = " << new_list.list_size << std::endl; 

    return EXIT_SUCCESS;
}