#include "text_processor.h"
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <ctime>

namespace TextProcessor {
    std::string text;

    void setTextFromInput() {
        std::cout << "Введіть речення: ";
        std::getline(std::cin, text);
    }

    int getRandomWordIndex() {
        std::srand(std::time(nullptr));
        std::istringstream iss(text);
        std::string word;
        int count = 0;

        while (iss >> word) {
            ++count;
        }

        return count > 0 ? std::rand() % count : -1;
    }

    void removeWord(int wordIndex) {
        std::istringstream iss(text);
        std::ostringstream oss;
        std::string word;
        int count = 0;

        while (iss >> word) {
            if (count != wordIndex) {
                if (count > 0) oss << " ";
                oss << word;
            }
            ++count;
        }

        text = oss.str();
    }

    void printText() {
        std::cout << "Оновлений текст: " << text << std::endl;
    }
}