#include <stdio.h>
#include <math.h>

//Function  prototype
float sigmoidFunc(int x);

int main()
{
	int k;
	for (k=-5; k<5; ++k)
	{
		float y=sigmoidFunc(k);
		printf("\n %d %f", k, y);
	}
}





float sigmoidFunc(int x)
{
	float result = 1/(1+exp(-x));
	return result;
}

