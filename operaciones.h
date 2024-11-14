#ifndef OPERACIONES_H
#define OPERACIONES_H

template<typename T>
bool is_odd(T n);

template<typename T>
bool is_even(T n) {
    if (n == 0) return true;
    return is_odd(n - 1);
}

template<typename T>
bool is_odd(T n) {
    if (n == 0) return false;
    return is_even(n - 1);
}

#endif // OPERACIONES_H
