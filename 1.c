#include <stdio.h>

int checkPrime(int num)
{
    // 0, 1 and negative numbers are not prime
    if(num < 2){
        return 0;
    }
    else {
        int x = num/2;
        for(int i = 2; i <=x; i++)
        {
            if(num % i == 0)
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int i, number = 10000000;
    
    for(i=1; i <= number; i++){
        if(checkPrime(i))
            printf("%d ",i);
    }
 
    return 0;
}
