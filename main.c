#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char buff[10];

    char s1[16] = "I owe you $1000";
    char s2[17] = "I don't know you";
    printf("Original 's1': %s\n\n", s1);


    //Example input that would cause overflow: "Joker67890I_owe_you_$2000 "
    printf("What's your name?: ");
    scanf("%s", buff);

    printf("%p\n%p\n%p\n\n", &buff, &s1, &s2);

    printf("%s\n", s1);
}