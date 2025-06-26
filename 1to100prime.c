#include<stdio.h>
int main()
{
	int i, j, num, count;
    printf("Enter the range: ");
    scanf("%d", &num);
    printf("The prime numbers in between the range 1 to %d are: ", num);
    
    for(i = 1; i <= num; i++) {
        count = 0;
        if (i < 2) continue; 
        
        for(j = 2; j <= i / 2; j++) 
		{
            if(i % j == 0) 
			{
                count++;
                break; 
        	}
        
        if(count == 0) 
		{
			    
	   		printf("%d ", i);
		}  
			}
	}
}

