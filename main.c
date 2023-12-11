#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num;
    scanf("%d",&num);
    int count = 0;
    while(num)
    {
        count += num&1;
        num = num>>1;
    }
    printf("count of set bits %i",count);
    return 0;
}
    
