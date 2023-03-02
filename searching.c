#include <stdio.h>

int main() {
    int array[10] = {2, 4, 7, 9, 11, 14, 16, 19, 22, 25}; // array to search
    int searchValue = 11; // value to search for
    int found = 0; // flag to indicate whether value has been found
    int i;

    // loop through array and check each element for searchValue
    for (i = 0; i < 10; i++) {
        if (array[i] == searchValue) {
            found = 1; // set flag to indicate value has been found
            break; // exit loop
        }
    }

    // output result
    if (found) {
        printf("%d was found at index %d.\n", searchValue, i);
    } else {
        printf("%d was not found in the array.\n", searchValue);
    }

    return 0;
}
