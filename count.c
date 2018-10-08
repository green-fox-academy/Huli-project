#include <stdio.h>
#include <stdlib.h>

void count();

int main()
{
    int my_age = 30;
    count();
    return 0;
    printf("Counting the countless parameter");
}

void count(int age)
{
    printf("My age is %d\n", age);
	printf("%d", 12);
}
