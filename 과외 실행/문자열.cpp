#include <stdio.h>

int main()
{
	char words[] = "hello world!";
		
	printf("�������� �ּҴ� %p\n", words);
	printf(words);
	
	for (int i = 0; i < 12; i++)
	{
		printf("\n%p�� �ִ� \'%c\'", &words[i], words[i]);
	}
	
	return 0;
}

