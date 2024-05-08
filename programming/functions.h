// function prototyping..
// void displayName(char []);
//void displayAverage(float);
// void displayAverage(float average);
//float computeAverage(int []);

const SIZE = 5;

void displayName(char name[SIZE]) {

     for(int i=0; i<SIZE; i++){
        printf("%c", name[i]);
        // some other statements.
    }
}

void displayAverage(float average){
    printf("AVERAGE: %.1f", average);
}

float computeAverage(int marks[SIZE]) {
    int sum = 0; // hold the sum of marks
    // int = 4, char=1, float=4, double=8
    float average = 0; // hold the average for the marks
    int counter = 0; // this is our iterator, or loop variable..

    for(counter; counter<SIZE; counter++){
        sum = sum + marks[counter];
    }

    //  int marks[10] = {1,2,5};
    // sum = 8..
    // average is of an integer type. 0.8
    // We end up 0 instead of 0.8
    // sum/10 = int with 0.
    // sum/10.0 = a float;
    average = sum/5.0;
    getchar();
    return average;
}
