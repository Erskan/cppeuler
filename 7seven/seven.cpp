#include <iostream>
#include <limits>
#include <cmath>

#define TARGET_PRIME 10001

int main(int argc, char* argv[]) {
    // Don't know how far we need to go. Trial and error approach...
    unsigned int lim = 1000000;
    unsigned int foundPrimes = 0;

    char* primes = new char[lim];

    // Sieve of Eratosthenes
    for(unsigned int currNum = 2; currNum < lim; currNum++) {
        if(!primes[currNum]) {
            for(unsigned int notPrime = pow(currNum, 2); notPrime < lim; notPrime += currNum ) {
                primes[notPrime] = '1';
            }
        }
    }

    std::cout << "Primes generated." << std::endl;

    for(unsigned int iterator = 0; iterator < lim; iterator++){
        if(!primes[iterator]) {
            foundPrimes++;
            //std::cout << "Prime nr [" << foundPrimes << "] is [" << iterator << "]" << std::endl;
        }
        if(foundPrimes == TARGET_PRIME) {
            std::cout << "Prime nr 10001: " << iterator << std::endl;
            break;
        }
    }

    return 0;
}
