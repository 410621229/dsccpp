#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
int main(){
    //get full fib sequence in size "int"
    int fib[45];
    fib[0] = 1;
    fib[1] = 2;
    for(int i = 2; i < 45; i++)
        fib[i] = fib[i-1] + fib[i-2];
    int T;
    scanf("%d", &T);
    int first1, num;
    while(T--){
        first1 = 0;
        scanf("%d", &num);
        int n = num;
        printf("%d = ", n);
        for(int i = 44; i >= 0; i--){
            if(fib[i] <= num){
                if(first1 == 0) first1 = 1;
                printf("1");
                num -= fib[i];
            }
            else if(fib[i] > num && first1 == 1){
                printf("0");
            }
            else{
                continue;
            }
        }
        printf(" (fib)\n");
    }
}
