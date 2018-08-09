#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	printf("Enter the interger you want to test\n");
	scanf("%d", &num);

	int store, mod;
	int result = 0;

	store = num;
	 while (num != 0)
	 {
	 	mod = num%10;
	 	result = (result * 10) + mod;
	 	num = num/10;

	 	/*result = num*10;
	 	result = result + num%10;
	 	num = num/10;*/

	 }

	 if (store == result)
	 {
	 	printf("%d is a PALINDROME\n",store);
	 }
	 else
	 	printf("%d is not a PALINDROME\n",store);

	return 0;
}
