#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age < 18)
    {
        printf("You are not eligible to vote");
    }
    else
    {
        printf("Yeah, You can!!");
    }

    return 0;
}