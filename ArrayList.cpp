//
// Created by rei on 05.09.2017.
//

#include "ArrayList.h"

//CONSTRUCTORS

/**
 * конструктор по умолчанию
 */
ArrayList::ArrayList() = default;

/**
 * деструктор, освобождение памяти
 */
ArrayList::~ArrayList() {
    delete[](array);
}

/**
 * Конструктор создают массив указанной длинены и обнуяет его
 * @param inputLength вхлдная длинна
 */
ArrayList::ArrayList(int inputLength) {
    if (inputLength >= 0) {
        length = inputLength;
        array = new int[inputLength];
        for (int i = 0; i < length; i++) {
            array[i] = 0;
        }
    } else std::cout << "Incorrect input value." << std::endl;
}

/**
 * Конструктор создает массив на основе указанной длинны и указателя на уже готовый массив вида int[]
 * @param inputLength длинна
 * @param copyArray указатель на существующий массив
 */
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
/**
 * Заполняет массив класса с последовательно с клавиатуры
 */
void ArrayList::fillArrayList() {
    std::cout << std::endl << "Input valuse:" << std::endl;
    for (int i = 0; i < length; i++) {
        std::cin >> array[i];
    }
}

/**
 * Выводит массив в консоль
 */
void ArrayList::printArrayList() {
    std::cout << std::endl << "Array:" << std::endl;
    for (int i = 0; i < length; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

/**
 * Добавляет в конец значение
 * @param value значение
 */
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

/**
 * Удаляет элементы массива с sIndex по eIndex
 * @param sIndex начало удаления
 * @param eIndex конец удаления
 */
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

/**
 * Считает произведение элементов
 * @return произведение
 */
long ArrayList::composition() {
    long comp = 1;
    for (int i = 0; i < length; ++i) {
        comp *= array[i];
    }
    return comp;
}

