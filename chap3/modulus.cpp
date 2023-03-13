#include <iostream>

int main() {
    int x{10};
    int y{5};
    int result{};

    result = x % y;
    std::cout << result << std::endl;

    x = 7;
    y = 2;
    result = x & y;
    std::cout << result << std::endl;
}
