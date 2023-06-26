#include <iostream>

int main() {
    char s[100];

    std::cout << "Enter a string: ";
    std::cin >> s;

    int length = 0;
    while (s[length] != '\0') {
        length++;
    }

    std::cout << "The length of the string is: " << length << std::endl;

    return 0;
}
