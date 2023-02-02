/*
Знак числа
В математике функция sign(x) (знак числа) определена так: 
sign(x) = 1,   если x > 0, 
sign(x) = -1, если x < 0, 
sign(x) = 0,   если x = 0.

Для данного числа x выведите значение sign(x).

Входные данные

Вводится число x.

Выходные данные

Выведите ответ на задачу.

Sample Input:

115
Sample Output:

1

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int	n = 0;
	scanf("%d", &n);
	if (n < 0) {
		printf("%d\n", -1);	
	}
	else if (n > 0) {
		printf("%d\n", 1);	
	}else {
		printf("%d\n", 0);	
	}	
	

	return 0;
}
