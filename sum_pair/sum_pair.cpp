// https://www.youtube.com/watch?v=XKu_SEDAykw&feature=em-subs_digest

#include "stdafx.h"

bool is_sum_element(int data[], int start, int end, int accumulated_sum, int target_sum)
{
	bool found[2];

	if (start > end)
		return false;

	accumulated_sum += data[start];
	if (accumulated_sum == target_sum)
		return true;

	found[0] = is_sum_element(data, start + 1, end, accumulated_sum, target_sum);
	found[1] = is_sum_element(data, start + 1, end, accumulated_sum - data[start], target_sum);

	return (found[0] || found[1]);
}

int _tmain(int argc, _TCHAR* argv[])
{
	int data1[] = { 1, 2, 3, 9 };
	int data2[] = { 1, 2, 4, 4 };

	bool found;
	int sum = 8;

	if (is_sum_element(data1, 0, 3, 0, sum) == true)
		printf("Found\n");

	if (is_sum_element(data2, 0, 3, 0, sum) == true)
		printf("Found\n");

	return 0;
}
