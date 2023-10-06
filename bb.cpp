#include <stdio.h>

int main(){
    int a[]={5,4,3,2,1};
    int n= sizeof(a)/sizeof(a[0]);
    int start=0, end=n-1,c,b;
    
    while(start<end){
       int min = 1e9;
       for (int i= start; i<=end; i++){
        if (min > a[i]) min =i;
       }
        printf("%d ",min);
        b= a[start];
        a[start]=a[min];
        a[min]=b;
        break;
        start++;
    }
    printf("\n");
    for (int i=0; i<= end;i++) printf("%d ",a[i]);

    return 0;
}