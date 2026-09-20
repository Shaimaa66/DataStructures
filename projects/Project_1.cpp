#include <iostream>

int main() {
    int choice = 0;
    double a = 0.0, b = 0.0;
    std::cout << "Operation (1:+, 2:-, 3:*, 4:/): ";
    if (!(std::cin >> choice) || choice < 1 || choice > 4) {
        std::cout << "Invalid operation\n";
        return 1;
    }
    std::cout << "Enter two numbers: ";
    if (!(std::cin >> a >> b)) {
        std::cout << "Invalid numbers\n";
        return 1;
    }
    double answer = 0.0;
    switch (choice) {
        case 1: answer = a + b; break;
        case 2: answer = a - b; break;
        case 3: answer = a * b; break;
        case 4:
            if (b == 0.0) {
                std::cout << "Division by zero is not allowed\n";
                return 1;
            }
            answer = a / b;
            break;
    }
    std::cout << "Result = " << answer << '\n';
    return 0;
}
