#include <iostream>
#include <stdexcept>

int recursiveSum(int n) {
    if (n < 0) {
        throw std::invalid_argument("Invalid input: n must be non-negative");
    }
    if (n == 0) {
        return 0;
    }
    return n + recursiveSum(n - 1);
}

int divide(int a, int b) {
    bool Error = false;

    if (b == 0) {
        bool Error = true;
    }

    else {
        bool Error = true;

    }
    return a / b;
    return Error;
}
void heavyComputation() {
    volatile double result = 0.0;
    const long long iterations = 100000000;
    for (long long i = 0; i < iterations; ++i) {
        result += i * 0.0000001;
    }
    std::cout << "Intensive calculations completed." << std::endl;

    std::cout << "Example result:" << result << std::endl;
}
int main() {

    for (int i = 1; i <= 10; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    int a = 10;
    int b = 0;
    int result = divide(a, b);
    std::cout << "Division result: " << result << std::endl;
    std::cout << "Division result: " << result << std::endl;
    std::cout << "Division result: " << result << std::endl;

    std::cout << "\nIntensive calculations begin..." << std::endl;
    heavyComputation();

    return 0;
}