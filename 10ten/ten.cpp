#include <iostream>
#include <cmath>

#define PRIME_LIMIT 2000000

int main(int argc, char* argv[]) {
    unsigned long long lim = PRIME_LIMIT;
    unsigned long long primeSum = 0;

    char* primes = new char[lim];

    // Sieve of Eratosthenes
    for(unsigned long long currNum = 2; currNum < lim; currNum++) {
        if(!primes[currNum]) {
            for(unsigned long long notPrime = pow(currNum, 2); notPrime < lim; notPrime += currNum ) {
                primes[notPrime] = '1';
            }
        }
    }

    for(unsigned long long iterator = 2; iterator < lim; iterator++) {
        if(!primes[iterator]) {
            primeSum += iterator;
        }
    }

    std::cout << "Sum of primes below 2000000: " << primeSum << std::endl;

    return 0;
}
