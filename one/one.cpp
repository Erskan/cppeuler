#include <iostream>

int CheckModulo(int num) {
    return ((num % 3 == 0) || (num % 5 == 0)) ? num : 0;
}

int main(int argc, char* argv[]) {
    int finalsum = 0;
    for(int count = 1; count < 1000; count++) {
        finalsum += CheckModulo(count);
    }
    std::cout << finalsum << std::endl;
    return 0;
}
