// https://www.youtube.com/watch?v=LUm2ABqAs1w
// https://en.wikipedia.org/wiki/Cycle_detection#Tortoise_and_hare
// https://rosettacode.org/wiki/Cycle_detection#C

#include "stdafx.h"

bool floyd(int a[], int N)
{
	int p = 0;
	int q = 0;

	int mu;
	int lam;

	do
	{
		p += 1;
		q += 2;

		if (p >= N || q >= N)
			return false;
	} while (a[p] != a[q]);

	p = 0;
	printf("p: %d, q: %d \n", p, q);
	do 
	{
		p += 1;
		q += 1;
	} while (a[p] != a[q]);
	mu = p;
	printf("mu: %d \n", mu);

	p = mu;
	q = mu;
	lam = 0;
	do
	{
		lam++;
		q = mu + lam;
	} while (a[p] != a[q]);
	printf("lam: %d \n", lam);

	return true;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int a[] = { 3, 10, 101, 2, 5, 26, 167, 95, 101, 2, 5, 26, 167, 95, 101, 2, 5, 26, 167, 95, 101, 2, 5, 26, 167, 95, 101, 2, 5, 26, 167, 95, 101, 2, 5, 26, 167, 95, 101, 2, 5 };
	//int a[] = { 1, 2, 1, 3, 4, 8 };

	bool found = floyd(a, sizeof(a));

	return 0;
}

