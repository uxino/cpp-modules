#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    private:
        unsigned int N;
        std::vector<int> vec;
    public:
        Span();
        Span(unsigned int N);
        void addNumber(int number);
        int shortestSpan();
        int longestSpan();
        Span(const Span &copy);
        Span& operator=(const Span &copy);
        const std::vector<int> getArray() const;
		void addTestNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator last);
        ~Span();
        class FullException : public std::exception{
            public:
                virtual const char *what() const throw();
        };
        class VectorIsEmptyException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

std::ostream& operator << (std::ostream &of, const Span &r);