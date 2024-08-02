#include <iostream>
using namespace std;
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    cout<<"Write a number"<<endl;
    cin>>n;
    int fact = factorial(n);
    std::cout << "Factorial of " << n << " is " << fact << std::endl;
    return 0;
}

