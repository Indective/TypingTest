#include "typing.h"
#include <iostream>

int main() {
    typing t;
    std::string difficulty;
    std::cout << "Enter difficulty (easy, medium, hard): ";
    std::cin >> difficulty;
    if (difficulty != "easy" && difficulty != "medium" && difficulty != "hard") {
        std::cout << "Invalid difficulty." << std::endl;
        return 0;
    }
    else{
        std::string sentence = t.picksentence(difficulty);
        t.typingtest(sentence, difficulty);
        return 0;
    }

}