#include <iostream>

bool IsDivisible(unsigned int num, unsigned int div) {
    return (num % div == 0);
}

int main(int argc, char* argv[]) {
    unsigned int iterator = 19;
    bool foundTarget = false;
    
    while(!foundTarget) {
        iterator++;
        for(unsigned int div = 1; div <= 20; div++) {
            bool isDiv = IsDivisible(iterator, div);
            if(!isDiv) break;
            if(isDiv && div == 20) foundTarget = true;
        }
    }
    std::cout << "Smallest number divisible by 1-20 is: " << iterator << std::endl;
    return 0;
}
