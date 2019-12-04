#include <cstdlib>
#include <cmath>
int main(){
    int n,r,b;
    while(scanf("%d",&n) ==1){
        b = 0;
        r = 0;
        while(n!=0){
            b += n;
            n += r;
            r = n%3;
            if(n/3==0)
                b+=(n%3-1);
            n = n/3;
        }
        printf("%d\n",b);
    }
}
