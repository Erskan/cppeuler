#include <iostream>
#include <cmath>
#include <cstdint>

int main(int argc, char* argv[]) {
    uint64_t sqSum = 0;
    uint64_t sumSq = 0;

    for(int iterator = 1; iterator <= 100; iterator++) {
        sumSq += pow(iterator, 2);
        sqSum += iterator;
    }

    std::cout << "Sum of squares: " << sumSq << std::endl;

    sqSum *= sqSum;

    std::cout << "Square of sum: " << sqSum << std::endl;

    std::cout << "Diff: " << sqSum - sumSq << std::endl;

    return 0;
}
