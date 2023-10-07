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

int check_SNT(int n){
    for (int i=2; i <= sqrt(n);i++) if (n % i==0) return 0;
    return n > 1;
}


void tong_chu_so(){
    int x,tong,b;
    do{
        printf("nhap so nguyen duong: ");
        scanf("%d",&x);
        if (x<0) printf("vui long nhap lai!\n");
        else break;
    } while (x<0);
    while(x>0){
        b = x%10;
        tong +=b;
        x=x/10;
    }
    printf("tong cac chu so: %d",tong);  
}
void tong_nghich_dao(){
    int n;
    float tong;
    printf("nhap n: ");
    scanf("%d",&n);
    for ( int i=1; i<n+1; i++){
        tong = tong +  1.0/i;
    }
   
    printf("ket qua: %f",tong);
}
void cuu_chuong(){
    int x,b;
    do{
        printf("nhap gia tri trong khoang (2-9): ");
        scanf("%d",&x);
        if (x<2 || x>9) printf("vui long nhap lai!\n");
        else break;
    } while( x<2 || x >9);
    
 
    for( int i=1; i<11; i++){
        b = x*i;
        printf("\t %d * %d = %d\n",x,i,b);
    }
}
void tim(){
    int a,b,min,max,ucln,bcnn,tim1=0,tim2=0;
    printf("nhap a va b: ");
    scanf("%d %d",&a,&b);

    if (a>b){
        max=a;
        min=b;
    }
    else{
        max=b;
        min=a;
    }
    for (int i=min;i>0;i--){
        tim1++;
        if(a%i==0 && b%i==0){
            ucln=i;
            break;
        }
    }
    for (int i=max;i<=a*b;i++){
        tim2++;
        if (i%a==0 && i%b==0){
            bcnn=i;
            break;
        }
    }
    printf("ucln: %d, bcnn: %d",ucln,bcnn);
    printf("\ntim1: %d, tim2: %d",tim1,tim2);
}
void doi_do(){
    float F, C;
    int chon;
    printf("(1) do C, (0) do F: ");
    scanf("%d",&chon);
    if (chon==1){
        printf("nhap do C: ");
        scanf("%f",&C);
        F = (C*1.8) + 32;
        printf("%f do C = %f do F",C,F);
    }
    else{
        printf("nhap do F: ");
        scanf("%f",&F);
        C = (F-32)/1.8;
        printf("%f do F = %f do C",F,C);
    }

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
void in_snt(){
    int n,dem,count=0;
    printf("nhap n: ");
    scanf("%d",&n);

    if (n<2) printf("k co snt trong khoang [0,%d]",n);
    else
    printf("snt trong khoang [0,%d] la: ",n);
        for (int i=2;i<=n;i++){
            dem=0;
            for (int j=2;j<=n;j++){
                count++;
                if (i%j==0) dem++;
                if (dem==2) break;
            }
            if (dem==1) printf("%d ",i);
        } 
        printf("\nso lan: %d",count);
}
void snt_pro_max(){
    int n,uoc,count1=0;
    printf("nhap n: ");
    scanf("%d",&n);

    if (n<2) printf("k co snt trong khoang [0,%d]",n);
    else
    printf("snt trong khoang [0,%d] la: ",n);
    for (int i=2; i<=n;i++){
        uoc =0;
        for (int j=2;  j<= sqrt(i); j++){
            count1++;
            if (i%j==0){
                uoc =1;
                break;
            }

        }
        if ( uoc==0) printf("%d ",i);
    }
    printf("\nso lan thu nhat: %d\n",count1+1);
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
int main(){
    int n,dem1 =0,dem2=0, uoc1=0,uoc2=0;
    printf("nhap n: ");
    scanf("%d",&n);

    for (int i=1; i<=n;i++){
        dem1++;
        if (n%i==0) uoc1++;
       }
    if (uoc1==2) printf("%d la snt",n);
    else printf("%d k la snt",n);
         
    printf("\n%d lan\n",dem1);
    for (int i=2;i<=sqrt(n);i++){
        dem2++;
        if (n%i==0) uoc2++;
    }
    if (uoc2==0) printf("%d la snt",n);
    else printf("%d k la snt",n);
         
    printf("\n%d lan",dem2);
    return 0;
}