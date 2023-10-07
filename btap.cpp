#include <stdio.h>
#include <math.h>

int nt(int x){
    for (int i=2; i<=sqrt(x);i++){
        if (x%i==0) return 0;
    }
    return x>1;
}

int main(){
    
    
    int a[5];
    printf("nhap phan tu cho mang: ");
    for (int i=0; i<5; i++) scanf("%d",&a[i]);
    
    printf("mang da nhap: ");
    for (int i=0; i<5; i++) printf("%d ",a[i]);
    printf("\n");
    int max=-1e9 -1, max1= -1e9 -1;
    for (int i=0; i<5; i++){
        if(a[i]>max) {
            max1 = max;
            max = a[i];
        }
        else if (a[i]>max1 && max1 < max) max1=a[i];
        else max1 = -1;
    }
    printf("%d %d",max,max1);
    
    return 0;
}