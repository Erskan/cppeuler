#include <iostream>
#include <cmath>

const unsigned long long PRIME_NUM = 600851475143;

int main(int argc, char* argv[]) {
    unsigned long long limsqrt = sqrt(PRIME_NUM);
    
    char* primes = new char[limsqrt+1];

    std::cout << "Generating primes up to sqrt(PRIME_NUM)" << std::endl;

    // Sieve of Eratosthenes
    for(unsigned long long currNum = 2; currNum < limsqrt; currNum++) {
        if(!primes[currNum]) {
            for(unsigned long long notPrime = pow(currNum, 2); notPrime < limsqrt; notPrime += currNum ) {
                primes[notPrime] = '1';
            }
        }
    }
    
    // Find the 1 at the highest position remaining in the array. Traverse backwards stop at first.
    for(unsigned long long highestPrime = limsqrt; highestPrime >= 0; highestPrime--) {
        if(!primes[highestPrime] && (PRIME_NUM % highestPrime == 0)) {
            std::cout << "Highest found prime: " << highestPrime << std::endl;
            return 0;
        }
    }

    return 0;
}
