#include <stdio.h>
enum DayOfWeek {  
    Sunday = 0, 
        Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main ()
{
enum DayOfWeek today = Sunday;
	enum DayOfWeek tomorrow = Monday;
	
	if (today == tomorrow)
	{
		printf("���ð� ������ ������ ����.");
	}
	else
	{
		printf("���ð� ������ ������ �ٸ���.");
	}
	return 0;
} 

 
