/*
Manna is extremely disappointed to find out that no one in his college knows his first name. 
Even his classmates call him only by his last name. Frustrated, he decides to make his fellow college students know 
his first name by forcing them to solve this question.

You are given a long string as input in each testcase, containing any ASCII character. 
Your task is to find out the number of times SUVO and SUVOJIT appears in it.

Input Format
The first line contains the number of testcases, T. Next, T lines follow each containing a long string S.

Output Format
For each long string S, display the no. of times SUVO and SUVOJIT appears in it.

Example:

Input:
3
SUVOJITSU
651SUVOMN
$$$$$SUVOSUVOJIT$$$$$

Output :
SUVO = 0, SUVOJIT = 1
SUVO = 1, SUVOJIT = 0
SUVO = 1, SUVOJIT = 1
*/

#include <stdio.h>
#include <string.h>

int search(const char* pattern, const char* text)
{
    int count = 0;
    int pattLen = strlen(pattern);
    int textLen = strlen(text);
    for (int i = 0; i <= textLen - pattLen; i++)
    {
        int j;
        for (j = 0; j < pattLen; j++)
        {
            if (pattern[j] != text[i + j])
                break;
        }
        if (j == pattLen)
            count++;
    }
    return count;
}

int main() {
    int num;
    char text[150];
    scanf("%d", &num);
    while (num--)
    {
        scanf("%s", text);
        int countSuvo, countSuvojit;
        countSuvo = search("SUVO", text);
        countSuvojit = search("SUVOJIT", text);
        countSuvo -= countSuvojit;
        printf("SUVO = %d, ", countSuvo);
        printf("SUVOJIT = %d\n", countSuvojit);

    }

}