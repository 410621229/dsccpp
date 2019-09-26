#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main(){
    int num, tmp, binCount, a[33], pa;
    while(scanf("%d", &num) && num){
        printf("The parity of ");

        tmp = num;
        pa = binCount = 0;
        while(tmp){
            if(tmp % 2 == 1) {
                binCount++;
                a[pa++] = 1;
            }
            else{
                a[pa++] = 0;
            }
            tmp /= 2;
        }
        for(int i = pa - 1; i >= 0; i--){
            printf("%d", a[i]);
        }
        printf(" is %d (mod 2).\n", binCount);
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
