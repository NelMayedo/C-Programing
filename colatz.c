#include<stdio.h>

//Function prototype

int getStart();
int nextCollats(int);

// entry point

int main()
{
	int length = 0;
	int seq = 0;
	int num = getStart();

	while (num != 1){
		num = nextCollats(num);
		++ length;
		printf("Collats sequence : %d\n", num);
	}		
	
	printf("Length : %d\n", length);
	return 0;

}

//Function definition

int getStart()
{
	int n;
	printf("Enter the starting integer number : ");
	scanf("%d", &n);
	if (n<0){
		printf("Enter a possitive number : ");
		scanf("%d", &n);
	}

	return n;
}

int nextCollats(int x)
{
	int y;
	if (x % 2 == 0)
		y = x/2;
	else
		y = x * 3 + 1;
	return y;
}
