#include <stdio.h>
#include <string.h>

//iterate through the array and print it's values
//can iterate through any size array with arraySize
void printValues(int* array, int arraySize) {
	printf("[");
	for (int* i = array; i < array + arraySize; ++i) {
		printf(" %d", *i);
	}
	printf(" ] \n");
}

//swap values of two integers
void swap(int* x, int* y) {
	int tempX = *x;
	*x = *y;
	*y = tempX;
}

//sort array using bubble sort algorithm
//arraySize is input so array can be added to without hassle
void sort(int* array, int arraySize) {
	int counter = 0;
	for (int i = 0; i < arraySize - 1; ++i) {
		// - i halves iterations from original method
		for (int* j = array; j < array + arraySize - i - 1; ++j) {
			if (*j > *(j + 1)) {
				swap(j,j + 1);
				printValues(array, arraySize);
			}
			counter++;
		}
	}
	printf("Sort took %d iteration(s).\n", counter);
}

int main() {
	int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
	
	//sizeof an array is # of values * memory of a single value
	int valueSize = sizeof(values) / sizeof(values[0]);
	
	//print initial values
	printf("Before: \n");
	printValues(values, valueSize);

	// test swap
	int x = 3;
	int y = 5;
	printf("x: %d, y: %d \n", x, y);
	swap(&x, &y);
	printf("x: %d, y: %d \n", x, y);

	//sort values and print each iteration
	sort(values, valueSize);

	//print result
	printf("After: \n");
	printValues(values, valueSize);

	return 0;
} // end main
