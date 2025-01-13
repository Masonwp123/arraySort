# Array Sort
Sort an array using the 'bubble sort' algorithm

## Functions

**printValues**
  
  `int* values`
    the array that the function is printing
  
  `int valueSize`
    the size of the input array
  
  + prints the first bracket to represent an array
  * iterates through the array values and prints them
  - prints the final bracket to close off the array

**swap**
  
  `int* x`
    the first value to swap, will become y
  
  `int* y`
    the second value to swap, will become x
  
  + sets a local called tempX to x
  * sets x to y
  - sets y to tempX

**sort**
  
  `int* values`
    the array the function is sorting
  
  `int valueSize`
    the size of the input array
  
  + iterates through the array twice to cover all possible values
  * sets local x and y to array values array + j and array + j + 1
  - if x is greater than y, swap them and print the array

**main**
  
  + creates local array values and integer valueSize
  * valueSize is set to the memory size of values array divided by memory size of an integer
  * prints initial array and it's values
  * creates local x and y and tests swapping them
  * calls `sort` to sort through the array values
  - prints the final result after `sort` has been called
