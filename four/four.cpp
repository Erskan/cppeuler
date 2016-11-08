#include <iostream>
#include <string>
#include <sstream>

bool IsPalindrome(unsigned long num) {
    
    // Convert to string
    std::string numStr;
    std::stringstream strStream;
    strStream << num;
    strStream >> numStr;

    //Check if palindrome
    int low, high;
    low = 0;
    high = numStr.length() - 1;
    while(high > low) {
        if(numStr.at(high) != numStr.at(low))
            return false;
        high--;
        low++;
    }

    return true;
}

int main(int argc, char* argv[]) {
    unsigned long firstnum = 999;
    unsigned long secondnum = 999;
    
    unsigned long largestPalindrome = 0;

    // Traverse backwards and break on first
    for(firstnum; firstnum >= 100; firstnum--) {
        secondnum = 999;
        for(secondnum; secondnum >= firstnum; secondnum--) {
            if(IsPalindrome(firstnum*secondnum)) {
                if(firstnum*secondnum > largestPalindrome) largestPalindrome = firstnum*secondnum;
                continue;
            }
        }
    }

    std::cout << "ANSWER: " << largestPalindrome << std::endl;

    return 0;
}
