# Array Shuffling Program

This C++ program demonstrates how to shuffle an array of integers. The user specifies the length of the array, and the program generates a sequential array, shuffles it using random indices, and then displays both the original and shuffled arrays.

## Features

- Generates an array of integers from 1 to N.
- Shuffles the array using randomly generated indices.
- Prints both the original and shuffled arrays.

## How It Works

1. The user is prompted to enter the length of the array.
2. The program fills the array with numbers from 1 to N.
3. It generates a shuffled list of indices.
4. The original array is rearranged according to the shuffled indices.
5. Both arrays are printed to the console.

## Usage

1. Compile the code:
   ```
   g++ Solve.cpp -o Solve
   ```
2. Run the executable:
   ```
   ./Solve
   ```
3. Enter the desired array length when prompted.

## Example Output

```
Enter Your Array's Length : 5
The Array Is : 1  2  3  4  5  

The Shuffeled Array Is : 3  1  5  2  4  
```

## Notes

- The maximum supported array length is 100.
- The shuffling algorithm ensures all indices are unique.
- The random seed is set using the current time for different results on each run.

---
