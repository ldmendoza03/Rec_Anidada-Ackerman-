#ifndef OPERACIONES_H
#define OPERACIONES_H

template<typename T>
T ackermann(T m, T n) {
    if (m == 0) return n + 1;
    if (n == 0) return ackermann(m - 1, 1);
    return ackermann(m - 1, ackermann(m, n - 1));
}

#endif // OPERACIONES_H
