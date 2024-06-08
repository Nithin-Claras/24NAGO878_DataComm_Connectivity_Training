#include <stdio.h>

int add(int a, int b, int c);

int main()
{
        int sum = add(5 , 3, 8);

        printf(" %d " , sum);
}

 

int add(int a,int b, int c)
{
        return a + b + c;
}
