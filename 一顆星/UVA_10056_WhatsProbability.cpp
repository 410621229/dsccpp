#include <cstdio>
#include <cstdlib>
#include <cmath>
// 英文複雜
// 輸入: 幾組側資, 幾個人, 每次的獲勝機率, 球第幾個人的獲勝機率
// 就是柏努力的機率分布
// pow :: cmath
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int players, winner;
        double p;
        scanf("%d %lf %d",&players,&p,&winner);
        printf("%.4f\n", p*pow(1-p,winner-1)/(1-pow(1-p,players)));
    }
}

