//
// Created by rei on 05.09.2017.
//

#ifndef LAB1_ARRAYLIST_H
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <time.h>
#define LAB1_ARRAYLIST_H


class ArrayList {
protected:
    int *array;
    int length;
public:
    ArrayList();
    ~ArrayList();
    explicit ArrayList(int inputLength);
    ArrayList(int inputLength, int* copyArray);

    int getLength();

    void fillArrayList();
    void printArrayList();
    void add(int value);
    void deletePart(int sIndex, int eIndex);
    long composition();
};


#endif //LAB1_ARRAYLIST_H
