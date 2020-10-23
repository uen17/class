#include <cstdio>
#include <cstdlib>

using namespace std;

int data[100];
int sum = 0;

void bubble_sort(int* d, int n)
{
	for (int k = 0; k < n; k++)
	{
		++sum;
		for (int i = 0; i < n; i++)
		{
			if (d[i] < d[i - 1])
			{
				
				int temp = d[i];
				d[i] = d[i - 1];
				d[i - 1] = temp;
			}
		}
	}
}

int main()
{
	for (int i = 0; i < 100; i++)
	{
		data[i] = rand();
	}

	bubble_sort(data, 100);

	
	for (int i = 0; i < 100; i++)
	{
		printf("%d\n", data[i]);
	}
	printf("总数%d", sum);

	return 0;
}
