#include <iostream>

unsigned long FindFactors(unsigned long num) {
    unsigned long facs = 1;
    unsigned long it = 2;
    for(; it*it < num; it++) {
        if( num % it == 0 ) facs++;
    }
    facs *= 2;
    if( it*it == num ) facs++;
    return facs;
}

int main(int argc, char* argv[]) {
    unsigned long factors = 0;
    unsigned long triNum = 0;
    unsigned long iterator = 0;
    while(factors < 500) {
        iterator++;
        triNum += iterator;
        factors = FindFactors(triNum);
    }
    std::cout << "First triangle number with > 500 factors is: " << triNum << std::endl;
    return 0;
}
