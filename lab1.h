#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 25
#define NUM_EMP 3

// Struct definition
typedef struct employee {
    char fname[20];
    char lname[20];
    int id;
    char dependents[3][20];
} Employees;

// Function Declarations
void printEmployees(Employees[NUM_EMP], int c);

void saveEmployees(Employees[NUM_EMP], int c, char[SIZE]);

int loadEmployees(Employees[NUM_EMP], char[SIZE]);

void swapEmployees(Employees*, Employees*);

