#include <stdio.h>

void ter(int n){
    if(n==0)
        return ;
    ter(n-1);
        printf("%d ",n);
}
int main()
{
    ter(5);
    return 0;
}