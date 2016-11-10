#include <iostream>

unsigned long long OddStep(unsigned long long num) {
    return 3 * num + 1;
}

unsigned long long EvenStep(unsigned long long num) {
    return num / 2;
}

int main(int argc, char* arv[]) {
    unsigned long long longestCollatz = 0, maxLen = 0;

    for(unsigned long long iterator = 1; iterator < 1000000; iterator++) {
        unsigned long long collatz = iterator, len = 0;
        while(collatz != 1) {
            collatz = (collatz % 2 == 0) ? EvenStep(collatz) : OddStep(collatz);
            len++;
        }
        if(len > maxLen) {
            maxLen = len;
            longestCollatz = iterator;
        }
    }

    std::cout << "Longest Collatz sequence starter sub 1 mil: " << longestCollatz << " Gives a collatz chain length of: " << maxLen << std::endl;
    return 0;
}
