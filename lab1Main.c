#include "lab1.h"

int main(int argc, char * argv[]) {
    Employees arr[NUM_EMP];

    // Load employees into Employees array from command-line passed text file
    loadEmployees(arr, argv[1]);
    // Print the array to verify the load
    printEmployees(arr, 2);
    // Save employees into a separate text file "save.txt"
    saveEmployees(arr, 2, "save.txt");
    // Swap first two employees in array
    swapEmployees(&arr[0], &arr[1]);
    // Print employees to verify swap
    printEmployees(arr, 2);

    return 0;
}