#include <cstdio>
#include <cstdlib>
#include <cmath>
// 二元一次方程式
// 總和要大於相減
// 相佳奇數無解
int main(){
    int n;
    int s,d;
    scanf("%d",&n);
    while(n--){
        scanf("%d%d",&s,&d);
        if(s<d || (s+d)%2!=0)
            printf("impossible\n");
        else
            printf("%d %d\n",(s+d)/2,(s-d)/2);
    }
}

