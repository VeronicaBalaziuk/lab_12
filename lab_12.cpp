#include "text_processor.h"
#include <iostream>

int main() {
    TextProcessor::setTextFromInput();

    int indexToRemove = TextProcessor::getRandomWordIndex();
    std::cout << "Випадково вибране слово для вилучення: " << indexToRemove + 1 << std::endl;

    TextProcessor::removeWord(indexToRemove);
    TextProcessor::printText();

    return 0;
}