#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main(){
    int T;
    scanf("%d", &T);
    int num, binCount, hexCount, tmp;
    int hone[10] = {0,1,1,2,1,2,2,3,1,2};
    while(T--){
        scanf("%d", &num);
        tmp = num;
        binCount = 0;
        while(tmp){
            if(tmp % 2 == 1)
                binCount++;
            tmp /= 2;
        }
        hexCount = 0;
        tmp = num;
        while(tmp){
            hexCount += hone[tmp % 10];
            tmp /= 10;
        }
        printf("%d %d\n", binCount, hexCount);
    }
}
/*
1. decimal to binary:
    ex : 10 = 1010
         10/2 = 5 .. 0
         5 / 2 = 2 .. 1
         2 / 2 = 1 .. 0
         1 / 2 = 0 .. 1
*/
