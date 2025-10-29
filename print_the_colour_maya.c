#include<stdio.h>
int main()
{
char ch,V, I,B,G, Y,O,R,v, i, b, g, y, o, r;
scanf("%c",&ch,&V,&I,&B,&G,&Y,&O, &R);
if(ch == 'V'| |ch == 'v')
printf("Violet
else if(ch == 'I'| |ch == 'i')
printf("Indigo");
else if(ch == 'B' | |ch == 'b')
printf("Blue");
else if(ch == 'G' | |ch == 'g')
printf("Green");
else if(ch == 'Y' | |ch == 'y')
printf("Yellow");
else if(ch == '0' | |ch == 'o')
printf("Orange");
else if(ch='R' | ch='r' )
printf("Red");
else
{
printf("-1");
}
return 0;
}
