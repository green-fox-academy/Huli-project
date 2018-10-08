#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20] = "Balazs";
	int age = 19;
    return 0;
}

void greet(char name, int age){
    printf("Name: %s\t Age: %d", name, age);
    greet();
}

void greet(char name){
    printf("Greetings");
}
