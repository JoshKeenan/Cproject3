#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int end = 1;
char comm;
char str1[100];

int bang() {
    printf("Bang\n");
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

int draw(){
    printf("draw\n");
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

void quit(){
    printf("quitting the program\n");
    exit(0);
}

int main() {
    printf("Hello, World!\n");
    while (end != 0){
        printf("What would you like to do?");
        fgets(str1, 8, stdin);

        if (strcmp(str1, "quit\n") == 0){
            quit();
        }
        else if(strcmp(str1, "bang\n") == 0){
            bang();
        }
        else{
            load();
        }


    }
    return 0;
}

