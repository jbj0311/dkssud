#include <stdio.h>
int read(char A[22],char B[22],char C[22],char D[22],char E[22],char F[22],char G[22],char H[22],char I[22],char J[22],char K[22])
{
	printf("\n\n\n\n   0 1 2 3 4 5 6 7 8 9 10 \n a %s\n b %s\n c %s\n d %s\n e %s\n f %s\n g %s\n h %s\n i %s\n j %s\n k %s\n\n\n\n\n\n\n\n\n\n\n",A,B,C,D,E,F,G,H,I,J,K);
}

int find(char A[22],char B[22],char C[22],char D[22],char E[22],char F[22],char G[22],char H[22],char I[22],char J[22])
{
	int x;
	int y;
	int z;
	int w;
	
}

int main()
{
	printf("오목 by Kyoul\nMy first C game!");
	char A[22] = "+ + + + + + + + + + +";
	char B[22] = "+ + + + + + + + + + +";
	char C[22] = "+ + + + + + + + + + +";
	char D[22] = "+ + + + + + + + + + +";
	char E[22] = "+ + + + + + + + + + +";
	char F[22] = "+ + + + + + + + + + +";
	char G[22] = "+ + + + + + + + + + +";
	char H[22] = "+ + + + + + + + + + +";
	char I[22] = "+ + + + + + + + + + +";
	char J[22] = "+ + + + + + + + + + +";
	char K[22] = "+ + + + + + + + + + +";
	read (A,B,C,D,E,F,G,H,I,J,K);
	printf("주의사항: 반드시 [숫자,알파벳] 형태로 입력하세요\n아무 숫자나 입력하고 엔터로 시작\n");
	int turn = 0;
	int x;
	char y;
	int start;
	scanf("%d",&start);
	 
	for(;;)
	{
		read (A,B,C,D,E,F,G,H,I,J,K);
		if(turn == 0)
		{	printf("흑 차례\n\n");}
		else
		{	printf("백 차례\n\n");}
	
		scanf("%d,%c",&x,&y);
		x *= 2;
		
		if(y == 'a')
		{
			if(A[x] == '+')
			{
				if(turn == 0)
				{
					A[x] = 'O';
					turn = 1;
				}
				else
				{
					A[x] = '@';
					turn = 0;
				}
				
			}
			else
			{	printf("불가");}
		}
		
		if(y == 'b')
		{
			if(B[x] == '+')
			{
				if(turn == 0)
				{
					B[x] = 'O';
					turn = 1;
				}
				else
				{
					B[x] = '@';
					turn = 0;
				}
				
			}
			else
			{	printf("불가");}
		}
		
		if(y == 'c')
		{
			if(C[x] == '+')
			{
				if(turn == 0)
				{
					C[x] = 'O';
					turn = 1;
				}
				else
				{
					C[x] = '@';
					turn = 0;
				}
				
			}
			else
			{	printf("불가");}
		}
		
		if(y == 'd')
		{
			if(D[x] == '+')
			{
				if(turn == 0)
				{
					D[x] = 'O';
					turn = 1;
				}
				else
				{
					D[x] = '@';
					turn = 0;
				}
				
			}
			else
			{	printf("불가");}
		}
		
		if(y == 'e')
		{
			if(E[x] == '+')
			{
				if(turn == 0)
				{
					E[x] = 'O';
					turn = 1;
				}
				else
				{
					E[x] = '@';
					turn = 0;
				}
				
			}
			else
			{	printf("불가");}
		}
		
		if(y == 'f')
		{
			if(F[x] == '+')
			{
				if(turn == 0)
				{
					F[x] = 'O';
					turn = 1;
				}
				else
				{
					F[x] = '@';
					turn = 0;
				}
				
			}
			else
			{	printf("불가");}
		}
		
		if(y == 'g')
		{
			if(G[x] == '+')
			{
				if(turn == 0)
				{
					G[x] = 'O';
					turn = 1;
				}
				else
				{
					G[x] = '@';
					turn = 0;
				}
				
			}
			else
			{	printf("불가");}
		}
		
		if(y == 'h')
		{
			if(H[x] == '+')
			{
				if(turn == 0)
				{
					H[x] = 'O';
					turn = 1;
				}
				else
				{
					H[x] = '@';
					turn = 0;
				}
				
			}
			else
			{	printf("불가");}
		}
		
		if(y == 'i')
		{
			if(I[x] == '+')
			{
				if(turn == 0)
				{
					I[x] = 'O';
					turn = 1;
				}
				else
				{
					I[x] = '@';
					turn = 0;
				}
				
			}
			else
			{	printf("불가");}
		}
		
		if(y == 'j')
		{
			if(J[x] == '+')
			{
				if(turn == 0)
				{
					J[x] = 'O';
					turn = 1;
				}
				else
				{
					J[x] = '@';
					turn = 0;
				}
				
			}
			else
			{	printf("불가");}
		}
		if(y == 'k')
		{
			if(K[x] == '+')
			{
				if(turn == 0)
				{
					K[x] = 'O';
					turn = 1;
				}
				else
				{
					K[x] = '@';
					turn = 0;
				}
				
			}
			else
			{	printf("불가");}
		}
	}
	return 0;
}
