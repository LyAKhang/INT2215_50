#include <iostream>
#include <vector>
#include <string>

void generateStrings(std::vector<char>& characters, std::string currentString, int length) {
    if (length == 0) {
        std::cout << currentString << std::endl;
        return;
    }

    for (int i = 0; i < characters.size(); i++) {
        std::string newString = currentString + characters[i];
        generateStrings(characters, newString, length - 1);
    }
}

int main() {
    std::vector<char> characters = { 'a', 'b', 'c', 'd' };
    int length = 3;

    generateStrings(characters, "", length);

    return 0;
}
