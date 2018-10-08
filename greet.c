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

void greet_2(char name){
    printf("Greetings");
}

void greet_3(char name){
    printf("%s AKA STADD\n", name);
}
