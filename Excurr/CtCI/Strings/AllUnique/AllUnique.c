#include <stdio.h>
#include <string.h>


/*
**	O(n) Time   |   O(n) Space
**	Create an Array of Boolean values
**	Initialize to Zeros
**	If a new char is found, set array of ascii value's index to 1 (found)
**	If char has been encountered -> function will return false;
*/
int isAllUnique1(char *str) {
	int curr = -1;
	int arr[128];
	while (++curr < 128) {
		arr[curr] = 0;
	}
	
	curr = -1;
	while(++curr < (int)strlen(str)) {
		if (arr[(int)str[curr]]) {
			return (0);
		}
		arr[(int)str[curr]] = 1;
	}

	return (1);
}


/*
**	O(n^2) Time   |   O(1) Space
**	Compare each char to the rest of the chars in the string
*/

int isAllUnique2(char *str)
{
	int curr1 = -1;
	int curr2 = -1;
	int	len = (int)strlen(str);
	
	while (++curr1 < len) {
		curr2 = curr1;
		while (++curr2 < len) {
			if (str[curr1] == str[curr2]) {
				return (0);
			}
		}

	}

	return (1);
}

int main(void)
{
	
	char *str1 = "1234567890-qwertyuiopasdfghjkl;zxcvbnm,";
	char *str2 = "1d3223";
	char *str3 = "1234567890-qwertyuiopasdfghjkl;zxcvbnm,i";
	char *str4 = "234567890-=qwertyuiop[]sdfghjkl;'zxcvbnm,./";

	printf("\nMethod 1\n");
	printf("(should be 1)Result1=|%d|\n", isAllUnique1(str1));
	printf("(should be 0)Result2=|%d|\n", isAllUnique1(str2));	
	printf("(should be 0)Result3=|%d|\n", isAllUnique1(str3));
	printf("(should be 1)Result4=|%d|\n", isAllUnique1(str4));

	printf("\nMethod 2\n");
	printf("(should be 1)Result1=|%d|\n", isAllUnique2(str1));
	printf("(should be 0)Result2=|%d|\n", isAllUnique2(str2));	
	printf("(should be 0)Result3=|%d|\n", isAllUnique2(str3));
	printf("(should be 1)Result4=|%d|\n", isAllUnique2(str4));	

	return (0);
}
