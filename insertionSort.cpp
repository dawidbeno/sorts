
class InsertionSort : public Sort {
	
	public:
		InsertionSort (int *arr, int size) : Sort(arr, size) {}

		void sort(){
			int y;
			for(int i=1; i<size; i++) {
				y = i;
				while(array[y-1] > array[y] && (y-1) >= 0) {
					swapElements(y-1, y);
					y--;
				}
			}
		}

};
