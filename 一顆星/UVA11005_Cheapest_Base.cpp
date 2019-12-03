#include <cstdio>
#include <cstdlib>
#define oo 2147483647

void CalCost(int num, int bas, int a[], int base[]){
    int k = num;
    while(k){
        base[bas - 1] += a[k % bas];
        k /= bas;
    }
}

int main(){
    int a[36]; //存輸入的36個數字
    int base[36]; // 存計算完的所有花費

    int T, Case = 1;
    scanf("%d", &T);
    while(T--){
        printf("Case %d:\n", Case);

        if(Case > 1)
            puts("");

        Case++;

        for(int i = 0; i < 36; i++)
            scanf("%d", &a[i]);

        int n;
            scanf("%d", &n);

        int num, min = oo;
        while(n--){
                min = oo;
            scanf("%d", &num);
            printf("Cheapest base(s) for number %d: ", num);
            for(int i = 1; i < 36; i++){
                base[i] = 0;
            }
            for(int i = 1; i < 36; i++)
                CalCost(num , i+1, a, base);
            for(int i = 1; i < 36; i++){
                if(base[i] < min) min = base[i];
            }
            for(int i = 1; i < 36; i++){
                if(base[i] == min)
                    printf("%d ", i+1);
            }

            printf("\n");

        }
    }
}
