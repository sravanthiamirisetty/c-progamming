#include<stdio.h>
int main()
{
	int upper_case_vowel,
	lower_case_vowel;
	char ch;
	scanf("%c",&ch);
	lower_case_vowel=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
	upper_case_vowel=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
	if(upper_case_vowel||lower_case_vowel)
	printf("VOWEL");
	else
	printf("CONSONANT");
	return 0;
}