#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int size =2*n-1;
    int strt=0;
    int end =size-1;
    int a[size][size];
    
    while(n!=0){
    for(int i=strt ; i<=end ; i++){
        for(int j=strt; j<=end ; j++){
            
            if(i==strt || i== end || j==strt || j==end)
           a[i][j]=n;
              printf("%d",a[i][j]);
        }
    }
    strt++;
    end--;
    n--;
    
    }
    
    return 0;
}