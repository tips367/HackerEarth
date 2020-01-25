/*
Given a List of Distinct N number a1,a2,a3........an.
Find The Position Of Number K In The Given List.

Input Format

First Line Take Input Value Of N

Second Line Take Input N Space Separated Integer Value

Third Line Take Input Value Of K

Output Format

Position Of K In The Given List

Example:

Input: 
5
1 2 3 4 5
4
Output : 3
*/

#include <iostream>


int linearSearch(int arr[], int size, int key)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
			return i;
	}
}


int main() {
	int num, key;
	std::cin >> num;
	int *arr = new int[num];
	for (int i = 0; i < num; i++)
	{
		std::cin >> arr[i];
	}
	std::cin >> key;
	std::cout << linearSearch(arr, num, key);
}


