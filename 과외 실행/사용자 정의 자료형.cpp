#include <stdio.h>

typedef struct {
	float x;
	float y;
}
Point; 

int main()
{
	Point A;
	Point B;
	A.x = 1;
	A.y = 2;
	B.x = 5;
	B.y = 5; 
	printf("(%f, %f) (%f, %f)", A.x, A.y, B.x, B.y );
	
	Point Mid;
	
	Mid.x = (A.x + B.x)/2;
	Mid.y = (A.y + B.y)/2;
	
	printf("중점의 좌표는 ( %f , %f )", Mid.x, Mid.y );
	
	return 0;
}

