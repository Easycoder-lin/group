#include <stdio.h>

int main(){
    int N=0;
    int flight[3][1000];
    int count=0;
    int like=0;
    int min=999999999;
    int ans[1000]={0};
     scanf("%d", &N);
    for(int i=0;i<N;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &flight[j][i]);
        }
        like=flight[0][i]*flight[1][i]+(10-flight[2][i])*70;
        if(like<min){
            count=0;
            min = like;
            ans[count]=i+1;
            count++;
        }
        else if(like==min){
            ans[count]=i+1;
            count++;
        }
    }
    //printf("%d %d %d\n", count, min, like);
    for (int i=0;i<count;i++){
        printf("%d ", ans[i]);
    }
    return 0;

}
