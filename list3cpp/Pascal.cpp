#include <stdexcept>

#include "Pascal.hpp"
#include "Binomial.hpp"

Pascal::Pascal(const int n){
    this->n = n;
    this->v.resize(static_cast<std::size_t>(n+1));
}

void Pascal::generate(void){
    for(unsigned long long i = 0; 2*i <= this->n; i++){
        this->v[i] = this->v[this->n-i] = Binomial::binomial(this->n, i);
    }
}

unsigned long long Pascal::operator[](std::size_t i) noexcept(false){
    if(i >= 0 && i < static_cast<std::size_t>(this->n+1)){
        return this->v.at(i);
    }else{
        throw std::invalid_argument("Index out of range");
    }
}