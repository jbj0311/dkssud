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
		printf("오늘과 내일의 요일은 같다.");
	}
	else
	{
		printf("오늘과 내일의 요일은 다르다.");
	}
	return 0;
} 

 
