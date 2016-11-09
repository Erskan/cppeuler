#include <iostream>

bool CheckPythTri(unsigned int a, unsigned int b, unsigned int c) {
    //std::cout << "Checking if [" << a << "] [" << b << "] [" << c << "] is a Pythagorean triplet.\n";
    if( a + b + c != 1000 ) return false;
    if( (a*a) + (b*b) != (c*c) ) return false;
    return true;
}

int main(int argc, char* argv[]) {
    unsigned int abcProd = 0;

    for(unsigned int a = 1; a < 1000; a++) {
        for(unsigned int b = 2; b < 1000; b++) {
            for(unsigned int c = 3; c < 1000; c++) {
                if(CheckPythTri(a, b, c)) {
                    abcProd = a*b*c;
                    std::cout << "Product of abc for a+b+c=1000: " << abcProd << std::endl;
                    return 0;
                }
            }
        }
    }   

    std::cout << "No pythagorean triplet found!" << std::endl;
    return 0;
}
