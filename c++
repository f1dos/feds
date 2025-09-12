#include <iostream>

int main() {
    int arr[5];
    for (int i = 0; i < 5; ++i) {
        std::cout << "Введите элемент " << i + 1 << ": ";
        std::cin >> arr[i];
    }
    return 0;
}



