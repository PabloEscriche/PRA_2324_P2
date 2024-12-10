#ifndef DYV_H
#define DYV_H

#include <vector>
#include <iostream>

template <typename T>
int BusquedaBinaria(const T& x, const std::vector<T>& v, int ini, int fin) {
    if (ini > fin) {
        return -1; // No encontrado
    }
    int medio = (ini + fin) / 2;
    if (v[medio] == x) {
        return medio;
    } else if (v[medio] > x) {
        return BusquedaBinaria(x, v, ini, medio - 1);
    } else {
        return BusquedaBinaria(x, v, medio + 1, fin);
    }
}

int BusquedaBinaria_INV(const T& x, const std::vector<T>& v, int ini, int fin) {
    if (ini > fin) {
        return -1; // No encontrado
    }
    int medio = (ini + fin) / 2;
    if (v[medio] == x) {
        return medio;
    } else if (v[medio] < x) {
        return BusquedaBinaria_INV(x, v, ini, medio - 1);
    } else {
        return BusquedaBinaria_INV(x, v, medio + 1, fin);
    }
}

#endif

