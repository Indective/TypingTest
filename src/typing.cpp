#include "typing.h"
#include <iostream>
#include <random>
#include <vector>
#include <string>
#include <ctime>

std::string typing::picksentence(const std::string difficulty) {
    std::vector<std::string> easySentences = {
        "Hello, world!",
        "I love coding.",
        "C++ is fun!",
        "Typing is easy.",
        "This is a test.",
        "Let's write code.",
        "The sun is bright.",
        "Good morning, everyone.",
        "Keep practicing daily.",
        "Learning never stops."
    };

    std::vector<std::string> mediumSentences = {
        "The quick brown fox jumps over the lazy dog.",
        "C++ allows both procedural and object-oriented programming.",
        "Typing fast requires practice and accuracy.",
        "Debugging is an essential skill for developers.",
        "A loop executes a block of code repeatedly.",
        "Functions help organize code and reduce redundancy.",
        "Memory management is crucial in C++ programming.",
        "The weather today is perfect for a long walk.",
        "Never stop learning, no matter the challenge.",
        "Efficiency matters when writing clean, readable code."
    };

    std::vector<std::string> hardSentences = {
        "Concurrency in C++ requires careful synchronization to avoid race conditions.",
        "A well-optimized algorithm can significantly reduce execution time and complexity.",
        "Exception handling ensures robust and error-free program execution.",
        "Templates provide flexibility and reusability in generic programming.",
        "Understanding pointers and references is fundamental in C++.",
        "Deep and shallow copies behave differently with dynamic memory allocation.",
        "Compilers translate source code into machine-readable instructions.",
        "Object-oriented principles include encapsulation, inheritance, and polymorphism.",
        "Recursion can be an elegant but memory-intensive solution for certain problems.",
        "Efficiently managing resources like memory and file handles prevents memory leaks."
    };
    srand(time(0));
    int num;
    if (difficulty == "easy") {
        num = rand() % easySentences.size();
        return easySentences[num];
    } else if (difficulty == "medium") {
        num = rand() % mediumSentences.size();
        return mediumSentences[num];
    } else if (difficulty == "hard") {
        num = rand() % hardSentences.size();
        return hardSentences[num];
    }
    return "";
}

void typing::typingtest(const std::string sentence,const std::string difficulty)
{   
    std::string input;
    int errors = 0;
    
    std::cout << "Type the following sentence:\n" << sentence << std::endl;
    while(sentence.length() > input.length())
    {
        std::getline(std::cin, input);
    }

    if (input == sentence) {
        std::cout << "Congratulations! You typed the sentence correctly." << std::endl;
    } else {
        int sentencelength = sentence.length();
        for (int i = 0; i < sentencelength; i++) {
            if (i >= input.length() || input[i] != sentence[i]) {
                errors++;
                std::cout << "Error at position " << i + 1 
                          << ": expected '" << sentence[i] << "'"
                          << (i < input.length() ? ", but got '" + std::string(1, input[i]) + "'" : ", but got nothing")
                          << std::endl;
            }
        }
        std::cout << "You made " << errors << " error(s)"  << " while typing the sentence." << std::endl;
    }
}

