#include <stdio.h>
int findSum(int i,int j);
int main() {
    int num1,num2;
    scanf("%d %d", &num1, &num2);
    printf("%d", findSum(num1,num2));
    return 0;
}

int findSum(int i,int j) {
    if (i != j)
        return j + findSum(i,j - 1);
    else
        return j;
}
