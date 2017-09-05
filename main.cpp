#include "ArrayList.h"

int main() {
    srand(static_cast<unsigned int>(time(0)));

    std::cout << "Length:" << std::endl;
    int len;
    std::cin >> len;
    ArrayList arrayList(len);

    arrayList.fillArrayList();
    arrayList.printArrayList();

    int addValue = rand() % 20 + 1;
    printf("\nAdded %d", addValue);
    arrayList.add(addValue);
    arrayList.printArrayList();

    std::cout << "\nDeleted 2-4";
    arrayList.deletePart(2, 4);
    arrayList.printArrayList();

    std::cout << "\nGenerated array:\n";
    int N = rand() % 10 + 1;
    int *temp = new int[N];
    for (int i = 0; i < N; i++) {
        temp[i] = rand() % 15 + 1;
        std::cout << temp[i] << " ";
    }
    ArrayList copyList(N, temp);
    copyList.printArrayList();

    std::cout << "Array`s composition: " << copyList.composition();
    return 0;
}