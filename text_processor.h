#pragma once
#include <string>

namespace TextProcessor {
    extern std::string text;
    void removeWord(int wordIndex);
    int getRandomWordIndex();
    void printText();
    void setTextFromInput();
}
