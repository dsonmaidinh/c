#include <stdio.h>
#include <math.h>

void tong_tro(){
    //khai báo biến
    int C, L, f;
    float Z;
    
    printf("nhap gia tri dien dung, dien cam, tan so: ");
    scanf("%d %d %d",&C,&L,&f);

    //tính toán
    Z = abs((2*M_PI*f*L)-1/(2*M_PI*f*C));
    printf("tong tro cua mach la: %f",Z);

}
void tan_so_cong_huong(){
    //khai báo biến
    int C, L;
    float F;
    
    printf("nhap gia tri dien dung, dien cam: ");
    scanf("%d %d",&C,&L);

    //tính toán
    F = 1/(2*M_PI*sqrt(L*C));
    printf("tong tro cua mach la: %f",F);
}
void doi_do_2(){
    float kq,giatri=0;
    char chon;
    printf("chon gia tri dau vao (C) hoac (F): ");
    scanf("%c",&chon);
    if (chon=='C'){
        printf("nhap gia tri can doi (C)-->(F): ");
        scanf("%f",&giatri);
        kq = (giatri*1.8) + 32;
        printf("%f (C) = %f (F)",giatri,kq);
    }
    else{
        printf("nhap do F: ");
        scanf("%f",&giatri);
        kq = (giatri-32)/1.8;
        printf("%f do F = %f do C",giatri,kq);}
}
void check_snt(){
    int n,uoc=0;
    printf("nhap so can kt: ");
    scanf("%d",&n);
    if (n<2) printf("%d k phai la snt",n);
    
    for (int i=2; i<= sqrt(n);i++){
        if (n%i==0) uoc++;
    }
    if (uoc ==0) printf("%d la snt",n);
    else
    printf("%d k la snt",n);
}
void in_snt(){
    int n,uoc;
    printf("nhap n: ");
    scanf("%d",&n);
    if (n<2) printf("k co snt nao trong khoang [0,%d]",n);
    else{
        printf("snt trong khoang [0,%d]: ",n);
        for(int i=2;i<=n;i++){
            uoc=0;
            for (int j=2;j<=sqrt(i);j++){
                if (i%j==0){
                    uoc++;
                    break;
                }
            }
            if (uoc==0) printf("%d ",i);
        }
    }
}
void tim(){
    int a,b,max,min,ucln,bcnn;
    printf("nhap a va b: ");
    scanf("%d%d",&a,&b);
    if (a>b){
        max=a;
        min=b;
    }
    else{
        max=b;
        min=a;
    }
    for (int i=max;i<max*min;i++){
        if (i%a==0 && i%b==0) {
            printf("bcnn la %d",i);
            break;
        }
    }
    for (int i=min;i>0;i--){
        if (a%i==0 && b%i==0){
            printf("\nucln la %d",i);
            break;
        }
    }    
}
void tong(){
    int n,tong,b;
    do{
        printf("nhap n: ");
        scanf("%d",&n);
        if (n<0) printf("vui long nhap lai !!!\n");
        else break;
    }while(n<0);
    while(n>0){
        b=n%10;
        tong+=b;
        n=n/10;
    }
    printf("tong bang: %d",tong);
}
void tien(){
    int tong;
    do{
        printf("\nnhap so tien ban co: ");
        scanf("%d",&tong);
        if (tong<1000) printf("k co tien a!!\n"); 
        for (int i=0; i <=tong/5000; i++) for(int j=0; j<=tong /2000; j++) for (int k=0; k<=tong/1000; k++){
            if(i*5000 + j*2000+ k*1000 ==tong){
                printf("\nphuong an: %d to 1000, %d to 2000, %d to 5000",k,j,i);}

            }

        }
    
    while (1); 
}
void nghich_dao(){
    int n;
    printf("nhap n: ");
    scanf("%d",&n);
    double tong=0;
    for (int i=1;i<=n;i++){
        tong=tong + 1.0/i;
    }
    printf("tong la %lf",tong);
}
void cuu_chuong(){
    int n;
    do
    {
        printf("nhap gia tri trong khoang (2,9): ");
        scanf("%d",&n);
        if (n<2 || n>9) printf("vui long nhap lai !!!\n");
        else break;
    } while (1);
    int b;
    for (int i=1;i<11;i++){
        b=n*i;
        printf("%d * %d = %d\n",n,i,b);
    }
    
}
int main(){
    in_snt();

    return 0;
}