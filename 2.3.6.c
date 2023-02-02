/*
Максимум из трех
Входные данные: Даны три целых числа, каждое записано в отдельной строке.
Выходные данные: Выведите наибольшее из данных чисел (программа должна вывести ровно одно целое число).
Sample Input:
3
5
9
Sample Output:
9
*/

#include <stdio.h>
int main ()
{
    int a = 0;
    int b = 0;
    int c = 0;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    (a>b && a>c) ? printf("%d\n",a) :
    (b>a && b>c) ? printf("%d\n",b) : 
    printf("%d\n",c);


    return 0;
}