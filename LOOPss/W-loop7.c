#include<stdio.h>
int main(){
    int n,i=1;
    printf("Enter the all even number till:");
    scanf("%d",&n);

    printf("All even numbers from 1 to %d are\n",n);
    
    while (i<=n)
    {
        if (i%2==0)
        {
            printf("%d\n",i);
        }
        i++;
        
    }
    return 0;
    
}