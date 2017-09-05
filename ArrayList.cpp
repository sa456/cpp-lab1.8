//
// Created by rei on 05.09.2017.
//

#include "ArrayList.h"

//CONSTRUCTORS
ArrayList::ArrayList() = default;

ArrayList::~ArrayList() {
    delete[](array);
}

ArrayList::ArrayList(int inputLength) {
    if (inputLength >= 0) {
        length = inputLength;
        array = new int[inputLength];
        for (int i = 0; i < length; i++) {
            array[i] = 0;
        }
    } else std::cout << "Incorrect input value." << std::endl;
}

ArrayList::ArrayList(int inputLength, int *copyArray) {
    if (inputLength >= 0) {
        length = inputLength;
        array = new int[inputLength];
        for (int i = 0; i < length; i++) {
            array[i] = copyArray[i];
        }
    }
}


//SET GET
int ArrayList::getLength() {
    return length;
}


//FUNCTIONS
void ArrayList::fillArrayList() {
    std::cout << std::endl << "Input valuse:" << std::endl;
    for (int i = 0; i < length; i++) {
        std::cin >> array[i];
    }
}

void ArrayList::printArrayList() {
    std::cout << std::endl << "Array:" << std::endl;
    for (int i = 0; i < length; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void ArrayList::add(int value) {
    int *temp = new int[length + 1];
    for (int i = 0; i < length; i++) {
        temp[i] = array[i];
    }
    temp[length] = value;

    length++;
    delete[](array);
    array = temp;
}

void ArrayList::deletePart(int sIndex, int eIndex) {
    eIndex++;
    int *temp = new int[length - (eIndex - sIndex)];
    for (int i = 0; i < sIndex; i++) {
        temp[i] = array[i];
    }
    for (int i = eIndex; i < length; i++) {
        temp[i - (eIndex - sIndex)] = array[i];
    }
    delete[](array);
    array = temp;
    length -= eIndex - sIndex;
}

long ArrayList::composition() {
    long comp = 1;
    for (int i = 0; i < length; ++i) {
        comp *= array[i];
    }
    return comp;
}

