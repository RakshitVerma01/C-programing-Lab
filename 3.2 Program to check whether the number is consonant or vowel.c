#include <stdio.h>
int main()
{
	char ch;
    printf("Enter the alphabet");
    scanf("%s",&ch);
	if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E'
		|| ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O'
		|| ch == 'u' || ch == 'U') {

		printf("It is vowel.\n", ch);
	}
	else {
		printf("It is consonent.\n", ch);
	}
}
