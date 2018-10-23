/*　演習5-11　*/

#include <stdio.h>

int main(void){
    int no;
    do{
        printf("人数を入力 :");
        scanf("%d",&no );
        if(no<1){
            printf("不適\n" );
        }
    }while(no<1);

    int tensu[no][2];    /*生徒の点数*/
    int sum[2];    /*教科ごとの合計*/
    int i,j;    /*カウンター*/
    int box;    /*数の仮置き場*/

    puts("点数を入力");

    for(i=0;i<no;i++){
        printf("%d人目\n",i+1);

        do{
            printf("国語 :");  scanf("%d",&tensu[i][0]);

            if(tensu[i][0]<0 || tensu[i][0]>100)
            puts("0から100点で");
        }while(tensu[i][0]<0 || tensu[i][0]>100);

        do{
            printf("数学 :");  scanf("%d",&tensu[i][1]);

            if(tensu[i][1]<0 || tensu[i][1]>100)
            puts("0から100点で");
        }while(tensu[i][1]<0 || tensu[i][1]>100);
    }

    putchar('\n');

    for(i=0;i<no;i++)
        printf("\n%d人目\n国語:%d点\n数学:%d点\n合計:%d点\n平均:%.2f点\n",i+1,tensu[i][0],tensu[i][1],tensu[i][0]+tensu[i][1],(double)(tensu[i][0]+tensu[i][1])/2);

        for(i=0;i<2;i++){
            box=0;

            for(j=0;j<no;j++)
            box+=tensu[j][i];

            sum[i]=box;
        }

    printf("\n国語合計 :%d点\n国語平均%.2f点\n数学合計 :%d点\n数学平均%.2f点\n",sum[0],(double)sum[0]/no,sum[1],(double)sum[1]/no);

    return 0;
}
