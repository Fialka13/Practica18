 #include <iostream>
#include <stdexcept>

void recursivePrint(int count) {
    if (count > 10)
        return;
    std::cout << count << std::endl;
    recursivePrint(count + 1);
}

int main() {
    std::cout << "Cycle from 1 to 10:" << std::endl;
    for (int i = 1; i <= 10; ++i) {
        std::cout << i << std::endl;
    }

    std::cout << "\nRecursive output:" << std::endl;
    recursivePrint(1);

    try {
        int a = 10;
        int b = 0;
        if (b == 0) {
            throw std::runtime_error("Деление на ноль!");
        }
        int result = a / b;
        std::cout << "Division result:" << result << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Exception handling:" << e.what() << std::endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
int main() {
    for (int i = 1, i <= 10; i++) {
        cout << "i = " << i << endl;
    }
    int num = 5;
    cout << "Factorial " <<
}
return 0;
}