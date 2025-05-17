#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(x>y)
    
        printf("x is greater than y");
    
    else if(y>x) printf("y is greater than x");
    else printf("all are equal");
    return 0;
}