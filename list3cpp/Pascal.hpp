#ifndef PASCAL_H
#define PASCAL_H

#include <cstring>
#include <vector>

class Pascal{
private:
    std::vector<unsigned long long> v;
    int n;
public:
    Pascal(const int n);
    void generate(void);
    unsigned long long operator[](const std::size_t i); 
};

#endif /* PASCAL_H */