/*�@���K5-11�@*/

#include <stdio.h>

int main(void){
    int no;
    do{
        printf("�l������� :");
        scanf("%d",&no );
        if(no<1){
            printf("�s�K\n" );
        }
    }while(no<1);

    int tensu[no][2];    /*���k�̓_��*/
    int sum[2];    /*���Ȃ��Ƃ̍��v*/
    int i,j;    /*�J�E���^�[*/
    int box;    /*���̉��u����*/

    puts("�_�������");

    for(i=0;i<no;i++){
        printf("%d�l��\n",i+1);

        do{
            printf("���� :");  scanf("%d",&tensu[i][0]);

            if(tensu[i][0]<0 || tensu[i][0]>100)
            puts("0����100�_��");
        }while(tensu[i][0]<0 || tensu[i][0]>100);

        do{
            printf("���w :");  scanf("%d",&tensu[i][1]);

            if(tensu[i][1]<0 || tensu[i][1]>100)
            puts("0����100�_��");
        }while(tensu[i][1]<0 || tensu[i][1]>100);
    }

    putchar('\n');

    for(i=0;i<no;i++)
        printf("\n%d�l��\n����:%d�_\n���w:%d�_\n���v:%d�_\n����:%.2f�_\n",i+1,tensu[i][0],tensu[i][1],tensu[i][0]+tensu[i][1],(double)(tensu[i][0]+tensu[i][1])/2);

        for(i=0;i<2;i++){
            box=0;

            for(j=0;j<no;j++)
            box+=tensu[j][i];

            sum[i]=box;
        }

    printf("\n���ꍇ�v :%d�_\n���ꕽ��%.2f�_\n���w���v :%d�_\n���w����%.2f�_\n",sum[0],(double)sum[0]/no,sum[1],(double)sum[1]/no);

    return 0;
}
