#pragma once

#include "iostream"

class Brain
{
    private:
        std::string idea[100];
    public:
        Brain();
        Brain& operator=(const Brain &cpy);
        Brain(const Brain &cpy);
        virtual ~Brain();
};