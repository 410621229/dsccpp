#include <cstdio>
#include <cstdlib>
// b2 sequence : 一串數字任兩個相加的結果 都互相不相等

int main(){
    int b2[10001];
    int in[101];
    int N;
    int C = 0;
    while(scanf("%d",&N) == 1){
        C++;
        int f = 0;
        // input array
        for(int i = 0; i < N; i++)
            scanf("%d", &in[i]);
        // size = (n+1)*n/2

        int cize = 0;
        for(int i = 0; i < N; i++)
        for(int j = i; j < N; j++)
        {
            b2[cize] = in[i]+in[j];
            for(int i =0;i<cize;i++)
                if(b2[i]==b2[cize])
                    f = 1;
            if(f==1)break;
            else
                cize++;
        }
        if(f==1)
            printf("Case #%d: It is not a B2-Sequence.\n\n",C);
        else
            printf("Case #%d: It is a B2-Sequence.\n\n",C);
    }
}

