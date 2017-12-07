#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int end = 1;
char comm;
char str1[100];

double xArray[] = {};
double yArray[] = {};

int Random;

struct Star{                                                                // struct to define stars
    int starId;
    char name[100];
    double xPos;
    double yPos;
};

struct Pair{                                                                // struct to define pairs
    int pairId;
    int starId1;
    int starId2;                                                            // takes all data needed
    double xPos1;
    double xPos2;
    double yPos1;
    double yPos2;
    char name1[100];
    char name2[100];
};

int generatePositions(int number){
    int x;
    double i, j;
    x = 0;
    while (x <= number){
        i = rand() % 61;
        j = rand() % 31;
        printf("i: %f\n", i);
        printf("j: %f\n", j);
        xArray[x] = i;
        yArray[x] = j;
        printf("xArray[%i]:     %f\n", x, xArray[x]);
        printf("yArray[%i]:     %f\n", x, yArray[x]);
        x++;
    }
    return 0;
}

// do two random numbers then do x * y to get position of stars, create struct and pass in vars
int bang(int number) {
    printf("BANG!\n");
    for(int i=1; i<=30; i++)
    {
        /* Iterate over columns */
        for(int j=1; j<=60; j++)
        {
            /* Print star for each column */
            printf("*");
        }

        /* Move to the next line/row */
        printf("\n");
    }
    Random = rand();
    printf("%i\n", Random % 61);
    printf("%i\n", Random % 31);
    return 0;
}

int list(){
    printf("list\n");
    return 0;
}

int name(){
    printf("name\n");
    return 0;
}

int pairs(){
    printf("pairs\n");
    return 0;
}

int show(){
    printf("show\n");
    return 0;
}

int save(){
    printf("save\n");
    return 0;
}

int load(){
    printf("load\n");
    return 0;
}

//int draw(){
//    printf("draw\n");
//    return 0;
//}

void quit(){
    printf("quitting the program\n");
    exit(0);
}

int main() {
    printf("Hello, World!\n");
    while (end != 0){
        printf("What would you like to do?");
        fgets(str1, 8, stdin);


        if(strcmp(str1, "quit\n") == 0){
            quit();
        }
        else if(strcmp(str1, "bang\n") == 0){
            bang(100);
        }
        else if(strcmp(str1, "show\n") == 0){
            show();
        }
        else if(strcmp(str1, "list\n") == 0){
            list();
        }
        else if(strcmp(str1, "name\n") == 0){
            name();
        }
        else if(strcmp(str1, "pairs\n") == 0){
            pairs();
        }
        else if(strcmp(str1, "save\n") == 0){
            save();
        }
        else if(strcmp(str1, "load\n") == 0){
            load();
        }
        else if(strcmp(str1, "pos\n") == 0){
            generatePositions(10);
        }
        else{
            continue;
        }

    }
    return 0;
}

