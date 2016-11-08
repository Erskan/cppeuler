#include <iostream>

#define MAX_FIB_NUM 4000000

bool IsEven(long num) {
    return (num % 2 == 0);
}

int main(int argc, char* argv[]) {
    long finalsum = 0;
    long previous = 1;
    long current = 1;
    while(current < MAX_FIB_NUM) {
        finalsum += (IsEven(current)) ? current : 0;
        long next = current + previous;
        previous = current;
        current = next;
    }
    std::cout << finalsum << std::endl;
    return 0;
}
