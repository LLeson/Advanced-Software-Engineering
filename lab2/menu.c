#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i;
    printf("请输入要实现的功能。\n1.两数相加\n2.两数相减\n3.两数相乘\n4.两数相除\n5.求余数\n6.求倒数\n7.求相反数\n8.求平方\n");
    scanf("%d",&i);
    switch(i)
    {
        case 1://两数相加
        {
            double num1,num2,result;
            printf("请输入要相加的第一个数。\n");
            scanf("%lf",&num1);
            printf("请输入要相加的第二个数。\n");
            scanf("%lf",&num2);
            result=num1+num2;
            printf("两数之和为%lf",result);
            break;
        }
        case 2://两数相减
        {
            double num1,num2,result;
            printf("请输入被减数。\n");
            scanf("%lf",&num1);
            printf("请输入减数。\n");
            scanf("%lf",&num2);
            result=num1-num2;
            printf("两数之差为%lf",result);
            break;
        }
        case 3://两数相乘
        {
            double num1,num2,result;
            printf("请输入第一个乘数。\n");
            scanf("%lf",&num1);
            printf("请输入第二个乘数。\n");
            scanf("%lf",&num2);
            result=num1*num2;
            printf("两数之积为%lf",result);
            break;
        }
        case 4://两数相除
        {
            double num1,num2,result;
            printf("请输入被除数。\n");
            scanf("%lf",&num1);
            printf("请输入除数。\n");
            scanf("%lf",&num2);
            result=num1/num2;
            printf("两数之商为%lf",result);
            break;
        }
        case 5://求余数
        {
            int num1,num2,result;
            printf("请输入被除数。\n");
            scanf("%d",&num1);
            printf("请输入除数。\n");
            scanf("%d",&num2);
            result=num1%num2;
            printf("两数之商余数为%d",result);
            break;
        }
        case 6://求倒数
        {
            double num1,result;
            printf("请输入要求倒数的数。\n");
            scanf("%lf",&num1);
            result=1/num1;
            printf("倒数为%lf",result);
            break;
        }
        case 7://求相反数
        {
            double num1,result;
            printf("请输入要求相反数的数。\n");
            scanf("%lf",&num1);
            result=-num1;
            printf("相反数为%lf",result);
            break;
        }
        case 8://求平方
        {
            double num1,result;
            printf("请输入要求平方的数。\n");
            scanf("%lf",&num1);
            result=num1*num1;
            printf("该数的平方为%lf",result);
            break;
        }
    }
    return 0;
}

