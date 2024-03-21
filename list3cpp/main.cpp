#include <iostream>
#include "Pascal.hpp"

int main(const int argc, const char* const argv[]){
    if(argc < 2){
        return 0;
    }
    int n;
    try{
        n = std::stoi(argv[1]);
    }catch(std::invalid_argument const& e){
        std::cout << "That is not a number now, is it?" << std::endl;
        return 0;
    }
    if(n<0){
        std::cout << "number needs to be positive" << std::endl;
        return 0;
    }

    Pascal pascal(n);
    try{
        pascal.generate();
    }catch(std::invalid_argument const& e){
            std::cout << e.what() << std::endl;
            return 0;
    }

    for(unsigned long long i = 0; i < static_cast<unsigned long long>(n+1); i++){
            std::cout << pascal[static_cast<std::size_t>(i)] << std::endl;
    }


    // for(int i = 2; i < argc; i++){
    //     int m;
    //     try{
    //         m = std::stoi(argv[i]);
    //     }catch(std::invalid_argument const& e){
    //         std::cout << "That is not a number now, is it?" << std::endl;
    //         continue;
    //     }
    //     try{
    //         std::cout << pascal[static_cast<std::size_t>(m)] << std::endl;;
    //     }catch(std::invalid_argument const& e){
    //         std::cout << e.what() << std::endl;
    //     }
    // }
    return 0;
}