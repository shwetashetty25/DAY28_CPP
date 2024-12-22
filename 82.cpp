// sum of all even numbers and the product of all odd numbers between 1 and n(inclusive):
#include <iostream>
void sumOfEvensAndProductOfOdds(int n) {
    int sumEvens = 0;
    long long productOdds = 1;
    bool oddFound = false; 

    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) { 
            sumEvens += i;
        } else { 
            productOdds *= i;
            oddFound = true;
        }
    }
    if (!oddFound) {
        productOdds = 0;
    }

    std::cout << "Sum of even numbers between 1 and " << n << ": " << sumEvens << std::endl;
    std::cout << "Product of odd numbers between 1 and " << n << ": " << productOdds << std::endl;
}
int main() {
    int n;
    std::cout << "Enter a positive integer n: ";
    std::cin >> n;
    sumOfEvensAndProductOfOdds(n);
    return 0;
}