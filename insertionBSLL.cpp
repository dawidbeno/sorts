
#include <iostream>
#include <stdio.h>

class InsertionBSLL : public InsertionSort {

    private:
        struct number {
            struct number* prev;
            struct number* next;
            int value;
        };

        struct number first;
        struct number *act;

        int binarySearch (int *arr, int toFind, int start, int end) {
            int mid = start + ((end - start) / 2);
            if(arr[mid] == toFind || start == mid || end == mid) {
                return mid;
            }
            if(arr[mid] < toFind) {
                return binarySearch(arr, toFind, mid, end);
            } else if (arr[mid] > toFind) {
                return binarySearch(arr, toFind, start, mid);
            }
        }
    
    public:
        InsertionBSLL (int *arr, int size) : InsertionSort(arr, size) {
            first.prev = NULL;
            first.next = NULL;
            first.value = arr[0];
            act = &first;
            for(int i=1; i<size; i++) {
                struct number *newNumber = new number();
                newNumber->value = arr[i];
                newNumber->prev = act;
                newNumber->next = NULL;
                act->next = newNumber;
                act = newNumber;
            }
        }

        void printLinkedList() {
            act = &first;
            std::cout << "Printed linked list:\n";
            while(act->next != NULL) {
                std::cout << act->value << " ";
                act = act->next;
            }
            std::cout << std::endl;
        }

        void sort() {
            int y, location;
			for(int i=1; i<size; i++) {
				y = i;
                location = binarySearch (array, array[i], 0, i);
				while(y > location) {
					swapElements(y-1, y);
					y--;
				}
                if(array[location] > array[location+1]) {
                    swapElements(location, location+1);
                }
			}
        }
};
