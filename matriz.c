#include <stdio.h>
#include <conio.h>
int main()
{
    int i,j;
    int n;
    
    scanf("%d", &n);
 
    
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i==j)
                printf("x");
            else
                printf("+");
        }
     printf("\n");
    }  
    return 0;
}
