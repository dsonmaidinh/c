#include <stdio.h>
#include <math.h>

int snt(int n){
    for (int i=2; i <= sqrt(n);i++) if (n % i==0) return 0;
    return n > 1;
}
int tinh_tong_1_toi_x(int x){
    int tong = 0;
    for ( int i = 0; i<=x ; i++) tong+=i;
    return tong;
}
int tong_mang_1_chieu(int a[],int n){
    int sum=0;
    for (int i=0; i<n; i++) sum+=a[i];
    return sum;
}
void nhap_mang_1_chieu(int a[], int n){
    printf("Nhap phan tu cho mang: ");
    for (int i = 0; i < n; i++) scanf("%d",&a[i]);
}
void in_mang_1_chieu(int a[],int n){
    for (int i=0; i<n ;i++) printf("%d ",a[i]);
    printf("\n");
}
void tim_kiem_trong_mang_1_chieu(int a[], int n, int x){
    for ( int i=0 ; i<n ; i++){
        if (x==a[i]) {
            printf("vi tri: %d",i);
            break;
        }
    }
}
void tim_max(int a[], int n){
    int max=0;
    for ( int i=0 ; i<n ; i++){
        if (a[i]>max) max = a[i];

    }
    printf("tim thay: %d",max);
}
void nhap_mang_2_chieu(int b[][100], int hang, int cot){
    for (int i=0; i<hang ; i++){
        printf("Nhap gtri cho hang %d: ",i);
        for (int j=0; j<cot; j++) scanf("%d",&b[i][j]);
    }
}
void in_mang_2_chieu(int b[][100], int hang, int cot){
    for (int i=0; i<hang; i++){
        for (int j=0; j<cot; j++) printf("%d ",b[i][j]);
        printf("\n");
    }
}
void bb_sort(int a[], int start, int end){
    while(end>0){
        for( int i=start;i<=end;i++){
            if (a[i]>a[i+1]){
                int c =a[i];
                a[i]=a[i+1];
                a[i+1]=c;
            }
        }
        end--;
    }
}
void select_sort(int a[], int start, int end){
    while(start < end){
        int b=0;
        int min=start;
        for (int i=start; i<=end;i++){
            if (a[i]<a[min]){
                min=i;
            }
        }
        b=a[start];
        a[start]=a[min];
        a[min]=b;
        start++;
    }
}
void insert_sort(int a[], int start, int end){
    for ( int i= start; i<=end; i++){
        for (int j=i; j>0;j--){
            if (a[j]<a[j-1]){
                int b=a[j-1];
                a[j-1]=a[j];
                a[j]=b;
            }
        }
    }
}

int main()
{
    int a[]={2,8,5,3,9,4},n;
    n = sizeof(a)/sizeof(a[0]);
    int start=1, end = n-1,b;
    
    in_mang_1_chieu(a,n);
    return 0;
}