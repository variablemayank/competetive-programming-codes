#include<stdio.h>
int main()
{
	struct bhuvan
	{
		char name;
		int age;
		float income;
	};
	struct bhuvan a1,a2,a3;
	
	printf("Enter Name,Age and income\n");
	scanf("%c%d%f",&a1.name,&a1.age,&a1.income);
	scanf("%c%d%f",&a2.name,&a2.age,&a2.income);
	scanf("%c%d%f",&a3.name,&a3.age,&a3.income);
	
	printf("Here what you entered\n");
	printf("%c %d %f\n",a1.name,a1.age,a1.income);
	printf("%c %d %f\n",a2.name,a2.age,a2.income);
	printf("%c %d %f\n",a3.name,a3.age,a3.income);
	return 0;
	
}
