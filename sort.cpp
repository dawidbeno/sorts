
class Sort {

	protected:
		int size = -1;
		int *array;
		void swapElements(int x, int y);

	public:
		Sort(int *arr, int size) {
			Sort::size = size;
			Sort::array = arr;
		}
		void setSize(int n);
		void setArray(int *arr);
		int getSize();
		int* getArray();

};


void Sort::swapElements(int x, int y) {
	int help = array[x];
	array[x] = array[y];
	array[y] = help;
}

void Sort::setSize(int n){
    Sort::size = n;
}
void Sort::setArray(int *arr){
    Sort::array = arr;
}
int Sort::getSize(){
    return Sort::size;
}
int* Sort::getArray(){
    return Sort::array;
}
