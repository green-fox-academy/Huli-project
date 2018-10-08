#include <stdio.h>
#include <stdlib.h>

void count();

int main()
{
    int my_age = 30;
    char *month = "January";
    count(my_age, month);
    return 0;
    printf("Counting the countless parameter");
}

void count(int age, char *month)
{
    printf("My age is %d and I borned in %s \n", age, month);
	printf("%d", 12);
}
