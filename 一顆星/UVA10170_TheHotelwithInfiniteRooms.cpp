#include <cstdio>
#include <cstdlib>
#include <cmath>
// 旅館住人 每一組 有幾個人就住幾天 下一組比前一組多一個人
// 輸入: 第一組人 ， 第幾天
// 輸出: 第幾天的那組人是幾個人
// 方法: 每次+1在加回去原本的數字
// long long int 可以倒 2^63 ，本題需要到2^50
int main(){
    int S;
    __int64 D,N;

    while(scanf("%d %lld",&S,&D) == 2){
        N = S;
        while(N<D){
            ++S;
            N+=S;
        }
        printf("%d\n",S);
    }
}

