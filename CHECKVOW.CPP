#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
char n;

printf("Enter character:\n");
scanf("%c",&n);

switch(n)
{
case'a':
case'e':
case'i':
case'o':
case'u':
case'A':
case'E':
case'I':
case'O':
case'U':
printf("%c is vowel\n",n);
break;
default:
printf("%c is not vowel",n);
		      }
getch();
}