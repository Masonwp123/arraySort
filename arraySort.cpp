#include <iostream>
#include <vector>

//iterate through the array and print it's values
void printValues(std::vector<int> array) {
	std::cout<<"[";
	for (int i : array) {
		std::cout<<" "<<i;
	}
	std::cout<<" ]"<<std::endl;
}

//sort array using bubble sort algorithm
void sort(std::vector<int> array) {
	int counter = 0;
	for (int i = 0; i < array.size() - 1; ++i) {
		// - i halves iterations from original method
		for (int j = 0; j < array.size() - i - 1; ++j) {
			int& x = array[j];
			int& y = array[j + 1];
			if (x > y) {
				std::swap<int>(x,y);
				printValues(array);
			}
			counter++;
		}
	}
	std::cout<<"Sort took "<<counter<<" iteration(s)."<<std::endl;
}

int main() {
	std::vector<int> array{7, 3, 9, 4, 6, 1, 2, 8, 5};

	//print initial values
	std::cout<<"Before:"<<std::endl;
	printValues(array);

	//sort values and print each iteration
	sort(array);

	//print result
	std::cout<<"After:"<<std::endl;
	printValues(array);

	return 0;
} // end main
