#include "Binomial.hpp"

unsigned long long Binomial::binomial(const unsigned long long n, const unsigned long long k){
    
    unsigned long long out = 1;

    for(unsigned long long i = 1; i <= k; i++){
        out *= (n-i-1);
        out /= i;
    }
    
    return out;
}
