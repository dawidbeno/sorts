#include <iostream>
#include <string>
#include "sort.cpp"
#include "insertionSort.cpp"
#include "selectionSort.cpp"
#include "insertionBinarySort.cpp"

using namespace std;

void printArray(int *arr, int size, string message);

int main() {

    cout << "Compare algorithm program" << endl;

    int toSortArrayInsertion[10] = {445,4,48,3,48,2,7,91,12,64};
    int toSortArraySelection[10] = {445,4,48,3,48,2,7,91,12,64};
    int toSortIBS[10] = {445,4,48,3,48,2,7,91,12,64};
    int size = 10;

    InsertionSort insertion(toSortArrayInsertion, size);
    SelectionSort selection(toSortArraySelection, size);
    InsertionBinarySort ibs(toSortArrayInsertion, size);

    printArray(toSortArraySelection, size, "Unsorted:           ");
    selection.sort();
    printArray(selection.getArray(), size, "Sorted (selection): ");

    cout << endl;
    printArray(toSortArraySelection, size, "Unsorted:           ");
    selection.sort();
    printArray(selection.getArray(), size, "Sorted (selection): ");

    cout << endl;
    printArray(toSortIBS, size, "Unsorted:           ");
    ibs.sort();
    printArray(ibs.getArray(), size, "Sorted (ibs):       ");

  


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