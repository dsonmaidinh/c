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