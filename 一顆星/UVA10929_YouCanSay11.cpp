#include <cstdio>
#include <cstdlib>
#include <cmath>
int main(){
    int n,odd,even;
    char nums[10001];
    while(scanf("%s",nums)==1 && atoi(nums) != 0){
        odd = even = 0;
        for(int i = 0; nums[i]!='\0'; i++){
            if(i%2==0)
                odd+=(nums[i]-'0');
            else
                even+=(nums[i]-'0');
        }
        odd = abs(odd-even);
        if(odd%11==0)
            printf("%s is a multiple of 11.\n",nums);
        else
            printf("%s is not a multiple of 11.\n",nums);
    }
}

