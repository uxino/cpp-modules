#pragma once

template <typename T>

void iter(T *x, int len, void (*func)(const T&))
{
    for (int i = 0; i < len; ++i) {
        func(x[i]);
    }
}