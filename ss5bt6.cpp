#include<stdio.h>
int main(){
	double num1,num2,total;
	int choose;
	printf("moi ban nhap so thu nhat: ");
	scanf("%lf",&num1);
	printf("moi ban nhap so thu hai: ");
	scanf("%lf",&num2);
	do{
		printf("  CALCULATOR\n");
			printf("1.tong hai so\n");
			printf("2.hieu hai so\n");
			printf("3.tich hai so\n");
			printf("4.thuong hai so\n");
		    printf("5.thoat\n");
		    printf("Lua chon cua ban: ");
		    scanf("%d",&choose);
		    switch(choose){
		    	case 1:
		    		total = num1 + num2;
		    		printf("%.1lf + %.1lf = %.1lf\n",num1,num2,total);
		    		break;
		    	case 2:
		    		total = num1 - num2;
		    		printf("%.1lf - %.1lf = %.1lf\n",num1,num2,total);
		    		break;
		    	case 3:
				    total = num1 * num2;
		    		printf("%.1lf * %.1lf = %.1lf\n",num1,num2,total);
		    		break;	
		    	case 4:
		    		total = num1 / num2;
		    		if(num2 != 0){
		    			printf("%.1lf / %.1lf = %.1lf\n",num1,num2,total);
					}else{
						printf("khong the chia cho so 0");
					}
				case 5:
					printf("tam biet ban nheee hen gap lai see you again!<3");
					break;
			}
	}while(choose != 5);
	return 0;
}
