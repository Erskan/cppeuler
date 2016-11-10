#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
#include <cstdlib>

#define DATA_FILE "data.txt"

std::string StringAdd(std::string &num1, std::string &num2) {
    int carry(0), sum, itr;
    std::string min=num1, max=num2, result="";

    if(num1.length() > num2.length()) {
        max = num1;
        min = num2;
    }

    for(itr = min.length()-1; itr >= 0; itr--) {
        sum = min[itr] + max[itr + max.length() - min.length()] + carry - 2*'0';
        carry = sum/10;
        sum %= 10;
        result = static_cast<char>(sum + '0') + result;
    }

    itr = max.length() - min.length() - 1;

    while(itr >= 0) {
        sum = max[itr] + carry - '0';
        carry = sum/10;
        sum %= 10;
        result = static_cast<char>(sum + '0') + result;
        itr--;
    }
    result = (carry == 0) ? result : static_cast<char>(carry + '0') + result;

    return result;
}

int main(int argc, char* argv[]) {
    std::string line;
    std::ifstream file(DATA_FILE);
    std::string sum = "0";

    while(std::getline(file, line)) {
        sum = StringAdd(line, sum);
    }
    
    std::cout << "Total sum is: " << sum << std::endl;

    return 0;
}
