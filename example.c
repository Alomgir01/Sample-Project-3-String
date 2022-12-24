#include<stdio.h>
int main()
{

char greetings[] = {'H','e','l','l','o',' ','W','o','r','l','d','\0'};
char greetings2[]= "hello world";
printf("%lu\n", sizeof(greetings));
printf("%lu", sizeof(greetings2));





    return 0;
}
