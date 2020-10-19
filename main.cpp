#include <iostream>
#include <string>
#include "sort.cpp"
#include "insertionSort.cpp"
#include "selectionSort.cpp"

using namespace std;

void printArray(int *arr, int size, string message);

int main() {

    cout << "Compare algorithm program" << endl;

    int toSortArrayInsertion[10] = {445,4,48,3,45,2,7,91,12,64};
    int toSortArraySelection[10] = {445,4,48,3,45,2,7,91,12,64};
    int size = 10;

    InsertionSort insertion(toSortArrayInsertion, size);
    SelectionSort selection(toSortArraySelection, size);

    printArray(toSortArrayInsertion, size, "Unsorted:           ");
    insertion.sort();
    printArray(insertion.getArray(), size, "Sorted (insertion): ");

    cout << endl;
    printArray(toSortArraySelection, size, "Unsorted:           ");
    selection.sort();
    printArray(selection.getArray(), size, "Sorted (selection): ");

    return 0;
}


void printArray(int *arr, int size, string message) {
    std::cout << message;
    for(int i=0; i<size; i++) {
        std::cout << " ";
        std::cout << arr[i];
    }
    std::cout << std::endl;
}