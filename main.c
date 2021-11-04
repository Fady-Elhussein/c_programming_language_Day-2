#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter the number of seconds you want to convert: ");
    scanf("%d", &x);
    printf("Hours : %d\n",x/3600);
    x%=3600;// using Assignment operation x%=3600 equal x=x%3600
    printf("Minutes: %d\n",x/60);
    x%=60;
    printf("Seconds: %d",x);

    return 0;
}
