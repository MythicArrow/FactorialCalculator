#include <iostream>
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    std::cout<<"Write a number"<<endl;
    std::cin>>n;
    int fact = factorial(n);
    std::cout << "Factorial of " << n << " is " << fact << std::endl;
    return 0;
}

