/*
Today, Monk went for a walk in a garden. There are many trees in the garden and each tree has an English alphabet on it. 
While Monk was walking, he noticed that all trees with vowels on it are not in good state. He decided to take care of them. 
So, he asked you to tell him the count of such trees in the garden.
Note : The following letters are vowels: 'A', 'E', 'I', 'O', 'U' ,'a','e','i','o' and 'u'.

Input:
The first line consists of an integer T denoting the number of test cases.
Each test case consists of only one string, each character of string denoting the alphabet (may be lowercase or uppercase) 
on a tree in the garden.

Output:
For each test case, print the count in a new line.

Example:

Input:
2
nBBZLaosnm
JHkIsnZtTL

Output : 
2
1
*/

#include <iostream>

int main() {
	int numTestCases;
	std::cin >> numTestCases;										
	for (int i = 0; i < numTestCases; i++)
	{
		int count = 0;
		std::string s;
		std::cin >> s;
		for (char c : s)
		{
			if (c >= 97)
			{
				c -= 32;
			}
			if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
				count++;
		}
		std::cout << count << std::endl;
	}
}