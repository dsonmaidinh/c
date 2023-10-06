#include <stdio.h>

void nhap_mang_2_chieu(int b[][5], int hang, int cot){
    for (int i=0; i<hang ; i++){
        printf("Nhap gtri cho hang %d: ",i);
        for (int j=0; j<cot; j++) scanf("%d",&b[i][j]);
    }
}

void hien_thi_mang_2_chieu(int b[][5], int hang, int cot){
    for (int i =0; i<hang; i++){
        for (int j=0; j<cot; j++) printf("%d ",b[i][j]);
        printf("\n");
    }
}
int main()
{
    int n, m, b[5][5];
    printf("nhap hang va cot: ");
    scanf("%d %d",&n,&m);
    nhap_mang_2_chieu(b, n, m);
    hien_thi_mang_2_chieu(b, n, m);


    return 0;
}