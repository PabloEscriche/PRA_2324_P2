#include <iostream>
#include "DyV.h"

int main() {
    std::vector<int> v = {1, 3, 5, 7, 9, 11};
    int target = 7;
 // int index = BusquedaBinaria(target, v, 0, v.size() - 1);
    int index_desc = BusquedaBinaria_INV(target_desc, v_desc, 0, v_desc.size() - 1);

/*if (index != -1) {
        std::cout << "Encontrado en la posición: " << index << std::endl;
    } else {
        std::cout << "No encontrado" << std::endl;
    }*/

if (index_desc != -1) {
    std::cout << "Encontrado en la posición (desc): " << index_desc << std::endl;
} else {
    std::cout << "No encontrado (desc)" << std::endl;
}

    return 0;
}

