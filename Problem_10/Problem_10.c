#include<stdio.h>
int  main(){
    int  T, r1,r2,B,ball_played;
    double current_run_rate, req_run_rate;
    scanf("%d",&T);
    while(T--){
            scanf("%d %d %d",&r1,&r2,&B);
            ball_played =  300 - B;
            current_run_rate = (r2*1.0 / ball_played)* 6;
            req_run_rate = ((r1 - r2 + 1)* 1.0 / B)* 6;

            printf("%0.2lf  %0.2lf \n",current_run_rate,req_run_rate);
    }
return 0;
}
