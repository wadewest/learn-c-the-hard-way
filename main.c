#include <stdio.h>

// Code is broken to demostrate Valgrind

int main(int argc, char *argv[])
{
    int age = 10;
    int height;
    
    printf("I am %d years old.\n");
    printf("I am %d inches tall.\n", height);
    
    return 0;
}
