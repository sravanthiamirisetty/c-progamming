#include<stdio.h>
int main() 
{
int a, b;
// Input two integers
scanf("%d %d", &a, &b);
// Swap without using a temporary vari
a = a + b;
b = a - b;
a = a - b;
// Print the swapped values
printf ("%d %d, a, b) ;
return 0;
}
