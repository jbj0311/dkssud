#include <stdio.h>
struct Point
{
	float x;
	float y;
}; 
int main ()
{
	struct Point A;
	struct Point B; 
	A.x = 2;
	A.y = 2;
	B.x = 9;
	B.y = 5; 
	printf("(%f, %f) (%f, %f)", A.x, A.y, B.x, B.y );
	
	struct Point Mid;
	
	Mid.x = (A.x + B.x)/2;
	Mid.y = (A.y + B.y)/2;
	
	printf("중점의 좌표는 ( %f , %f )", Mid.x, Mid.y );
	
	return 0;
}
