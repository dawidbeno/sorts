
class SelectionSort : public Sort {

	private:
		int findMinimum(int k){
			int min = k;
			for(int i=k; i<Sort::size; i++) {
				if(Sort::array[i] <= Sort::array[min]){
					min = i;
				}
			}
			return min;
		}

	public:
		SelectionSort (int *arr, int size) : Sort(arr, size) {}

		void sort(){
			int minIndex = 0;
           	for(int i=0; i<Sort::size; i++) {
				minIndex = findMinimum(i);
			   	Sort::swapElements(i, minIndex);
		   	}
		}
};


