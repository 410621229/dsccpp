#include <cstdio>
#include <cstdlib>
//An Emirp is a Prime that gives you a different Prime 
//when its digits are reversed
// 反質數 = 倒過來還是質數 但不等於自己

int prime(int x){
    for(int i=2;i<x;i++){
        if(x%i==0)
            return 0;
    }
    return 1;
}
int reverse(int x){
    int remainder, reverseNum = 0;
    while(x!=0){
        remainder = x % 10;
        reverseNum = reverseNum * 10 + remainder;
        x /= 10;
    }
    return reverseNum;
}
int main(){
    int t;
    while(scanf("%d",&t)==1){
        if(t!= reverse(t)&&prime(t) == 1 && prime(t) == prime(reverse(t)))
            printf("%d is emirp.\n",t);
        else if(prime(t) == 1 && t!=1)
            printf("%d is prime.\n",t);
        else
            printf("%d is not prime.\n",t);
    }
}

