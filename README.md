# Array Sort
Sort an array using the 'bubble sort' algorithm

## Functions

**printValues**
```
  array is an array of any type, arraySize is integer
  function printValues (array, arraySize):
    print "[" 
    create integer variable i
    for i from zero to arraySize - 1:
      print " " + array[i]
    print " ]"
```

**swap**
```
  both x and y should be the same type
  function swap (x, y):
    tempX = x
    x = y
    y = tempX
```

**sort**
```
  array is an array of any type, arraySize is an integer
  parameter arraySize should be equal to the amount of values in array
  function sort (array, arraySize):
    create integer variables i and j
    for i from zero to arraySize - 1:
      for j from zero to arraySize - 1:
        if array[j] > array[j + 1]:
          swap array[j] with array[j+1]
          call printArray(array, arraySize)
```

**main**
```
  function main ():
    create integer[] array with any amount of values
    create integer variable arraySize with the number of values in array
    print "Before:"
    call printValues(array, arraySize)

    create integer variables x and y with different values
    print x and y
    swap x with y
    print x and y

    call sort(array, arraySize)

    print "After:"
    call printValues(array, valueSize)
        
```

