#include <stdio.h>

class InsertionBinarySort : public InsertionSort {

    private:
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
        InsertionBinarySort (int *arr, int size) : InsertionSort(arr, size) {}

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
