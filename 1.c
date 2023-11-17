#include <stdio.h>

void hello(char name[]) 
{
    printf("Hello %s\n", name);
}

int main()
{
    char name[] = "ayman";
    hello(name);
    return 0;
}
