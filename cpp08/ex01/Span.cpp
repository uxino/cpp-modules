#include "Span.hpp"

Span::Span(unsigned int N)
{
    this->N = N;
}

Span::Span()
{
    this->N = 0;
}

void Span::addNumber(int number)
{
    try
    {
        if (this->vec.size() >= this->N)
            throw FullException();
        this->vec.push_back(number);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

int Span::shortestSpan()
{
    std::vector<int>::iterator
    if (this->vec.size() <= 1)
        throw VectorIsEmptyException();

    return (std::min(this->vec));
}

const char *FullException::what() const throw()
{
    return ("Capacity Full!!");
}

const char *VectorIsEmptyException::what() const throw()
{
    return ("Vector is empty!!");
}

int Span::longestSpan()
{
    std::vector<int>::iterator maxElements = std::max_element(this->vec.begin(), this->vec.end());
    std::vector<int>::iterator minElements = std::min_element(this->vec.begin(), this->vec.end());
    if (this->vec.size() == 1 || this->vec.size() == 0)
        throw VectorIsEmptyException();
    return (*maxElements - *minElements);
}

const std::vector<int> Span::getArray()
{
    return (this->vec);
}


Span::Span(const Span &copy)
{
    this->vec = copy.vec;
    this->N = copy.N;
};

Span& Span::operator=(const Span &copy)
{
    this->vec = copy.vec;
    this->N = copy.N;
    return (*this);
}

std::ostream& operator<<(std::ostream& output, const Span& span)
{
    const std::vector<int> numbers = span.getArray();
    for (std::vector<int>::const_iterator i = numbers.begin(); i != numbers.end(); ++i)
    {
        output << *i << std::endl;
    }
    return output;
}


Span::~Span()
{
}