// https://www.youtube.com/watch?v=XKu_SEDAykw&feature=em-subs_digest

#include "stdafx.h"

bool is_sum_element(int data[], int start, int end, int accumulated_sum, int target_sum)
{
	if (start >= end)
		return false;

	accumulated_sum += data[start];
	if (accumulated_sum == target_sum)
		return true;
	else if (accumulated_sum < target_sum)
		return is_sum_element(data, start + 1, end, accumulated_sum, target_sum);
	else
		return is_sum_element(data, start + 1, end, accumulated_sum - data[start], target_sum);
}

int _tmain(int argc, _TCHAR* argv[])
{
	int data1[] = { 1, 2, 5, 9 };
	int data2[] = { 1, 2, 4, 4 };

	bool found;
	int sum = 8;

	for (int i = 0; i < 3; i++)
	{
		found = is_sum_element(data1, i, sizeof(data1), 0, sum);
		if (found == true)
			printf("Found\n");
	}
	for (int i = 0; i < 3; i++)
	{
		found = is_sum_element(data2, i, sizeof(data1), 0, sum);
		if (found == true)
			printf("Found\n");
	}

	return 0;
}
