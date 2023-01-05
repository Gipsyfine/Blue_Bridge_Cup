#include<stdio.h>

int main(){
    int n,a,fz[50000],ans[50000]={1,1};
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=ans[0];j++) {
            ans[j]=ans[j]*i+fz[j];
            fz[j]=0;         
            if(ans[j]>9){
            fz[j+1]+=ans[j]/10;
            ans[j]%=10;
            if(j==ans[0]) {
                ++ans[0];
            } 
            }
        }
    }

    for(int i=ans[0];i>0;i--) {
        printf("%d",ans[i]);
    }
    printf("\n");
    return 0;
}

//不太懂
//20221020
