#include "lab1.h"

void printEmployees(Employees employeeArr[NUM_EMP], int c) {
    // Iterate for "c" amount of employees
    for(int i = 0; i < c; i++) {
        // Print all the members within the struct for current employee
        printf("Employee %d:\n", i+1);
        printf("First Name: %s\n", employeeArr[i].fname);
        printf("Last Name: %s\n", employeeArr[i].lname);
        printf("ID: %d\n", employeeArr[i].id);
        printf("Dependents: ");
        for(int j = 0; j < NUM_EMP; j++) {
            printf("%s; ", employeeArr[i].dependents[j]);
        }
        printf("\n\n");
    }
}

void saveEmployees(Employees employeeArr[NUM_EMP], int c, char filename[SIZE]) {
    // Open the file for writing
    FILE* inputfile;
    inputfile = fopen(filename, "w");

    // Iterate for "c" amount of employees
    for(int i = 0; i < c; i++) {
        if(inputfile != NULL) {
            // Write fname, lname, id, and dependents for current employee to the file
            fprintf(inputfile, "%s %s %d ", employeeArr[i].fname, employeeArr[i].lname, employeeArr[i].id);
            for(int j = 0; j < NUM_EMP; j++) {
                fprintf(inputfile, "%s ", employeeArr[i].dependents[j]);
            }
            fprintf(inputfile, "\n");
        }
        else {
            printf("Error!");
            exit(1);
        }
    }

    fclose(inputfile);
}

int loadEmployees(Employees employeeArr[NUM_EMP], char filename[SIZE]) {
    int i = 0;

    // Open the file for reading
    FILE* inputfile;
    inputfile = fopen(filename, "r");
    
    // Iterate through the file
    while(!feof(inputfile)) {
        // Scan file into corresponding members
        fscanf(inputfile, "%s %s %d %s %s %s", employeeArr[i].fname, employeeArr[i].lname, &employeeArr[i].id, employeeArr[i].dependents[0], employeeArr[i].dependents[1], employeeArr[i].dependents[2]);
        i++;
    }

    fclose(inputfile);

    return i;
}

void swapEmployees(Employees* e1, Employees* e2) {
    // Swap employees, storing e1 into temp
    Employees temp = *e1;
    *e1 = *e2;
    *e2 = temp;
}
