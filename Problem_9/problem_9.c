#include <stdio.h>
#include <math.h>
int main()
{
    int T, Number;
    double sq_root;
    scanf("%d",&T);
    for(int i = 1 ; i <= T ; i++){
        scanf("%d",&Number);
        sq_root = sqrt(Number);
        if(ceil(sq_root) == floor(sq_root)){
            printf("YES\n");
        }
        else{
            printf("NsssO\n");
        }
    }
}
