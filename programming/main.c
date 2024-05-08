#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

// single-line comment
/*
* Multiple-line comment
*/

/**
    - This is a program that displays hello
**/

char global_name[10] = {'C', 'y', 'r', 'i', 'e', 'l'};

// function prototyping..
void displayName(char []);
void displayAverage(float);
// void displayAverage(float average);
float computeAverage(int []);

int main()
{
    char local_name[10] = {'C', 'y', 'r', 'i', 'e', 'l'};
    // displayName(local_name);
    int marks[5] = {1, 2, 5};
    int user_marks[5] = {0};
    int mark = 0;

    // scanf function to obtain/collect inputs from the user;
    //printf("Enter 5 marks to compute Average:");
    // printf("Input Mark: ");
  //   scanf("%d", &mark);
//    printf("You entered: %d\n\n\n", mark);

    for(int i=0; i<5; i++) {
        printf("Input Mark %i: ", i+1);
        scanf("%d", &mark);
        // User enters 5;
        // user_marks[i] = 5;
        user_marks[i] = mark;
    }

    // display the updated marks
   // printf("\nDisplaying the updated marks.\n");
    // for(int i=0; i<5; i++)
       // printf("Mark %i: %d\n", i+1 ,user_marks[i]);

    // compute average;
    float average = computeAverage(user_marks);
    displayAverage(average);
    return 0;
}

/**
    - This is a function that displays the name of a person
    - Return nothing
**/


// All functions moved to to functions.h
/*
void displayName(char name[5]) {

     for(int i=0; i<10; i++){
        printf("%c", name[i]);
        // some other statements.
    }
}
*/


/*
void displayAverage(float average){
    printf("AVERAGE: %.1f", average);
}

*/


/*
float computeAverage(int marks[5]) {
    int sum = 0; // hold the sum of marks
    // int = 4, char=1, float=4, double=8
    float average = 0; // hold the average for the marks
    int counter = 0; // this is our iterator, or loop variable..

    for(counter; counter<5; counter++){
        sum = sum + marks[counter];
    }

    //  int marks[10] = {1,2,5};
    // sum = 8..
    // average is of an integer type. 0.8
    // We end up 0 instead of 0.8
    // sum/10 = int with 0.
    // sum/10.0 = a float;
    average = sum/5.0;
    return average;
}

*/































































































