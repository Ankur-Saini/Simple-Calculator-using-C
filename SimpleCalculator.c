#include<stdio.h>
#include<string.h>
#include<math.h>

int main() 
{
	printf("Will your numbers be 'integer' or 'float' or 'double'?: ");
	char datatype[50];
	scanf("%s",datatype);
	char typeInteger[10] = "integer";
	char typeFloat[10] = "float";
	char typeDouble[10] = "double";

	//Integer data type
	if (strcmp(datatype,typeInteger)==0) {
		int a,b,sum,sub,mul,mod,power;
		double div;
		printf("Enter your first number(a): ");
		scanf("%d",&a);
		printf("Enter your second number(b): ");
		scanf("%d",&b);
		printf("Which operation would you like to perform?\n");
		printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus (to find remainder)\n6. Power\n7. All\n");
		printf("Choose: ");
		int operation;
		scanf("%d",&operation);
		switch(operation) {
			case 1:
			printf("Addition (a+b) = %d\n",sum=a+b);
			break;
			case 2:
			printf("Subtraction (a-b) = %d\n",sub=a-b);
			break;
			case 3:
			printf("Multiplication (a*b) = %d\n",mul=a*b);
			break;
			case 4:
			printf("Division (a/b) = %.3lf\n",div=(double)a/b);
			break;
			case 5:
			printf("Modulus (a%%b) = %d\n",mod=a%b);
			break;
			case 6:
			printf("Power (a^b) = %d\n",power=pow(a,b));
			break;
			case 7:
			printf("Addition (a+b) = %d\n",sum=a+b);
			printf("Subtraction (a-b) = %d\n",sub=a-b);
			printf("Multiplication (a*b) = %d\n",mul=a*b);
			printf("Division (a/b) = %.3lf\n",div=(double)a/b);
			printf("Modulus (a%%b) = %d\n",mod=a%b);
			printf("Power (a^b) = %d\n",power=pow(a,b));
			break;
			default:
			printf("Sorry, wrong input.\n");
			break;
		}

	//Float data type	
	}else if (strcmp(datatype,typeFloat)==0) {
		float a,b,sum,sub,mul,div,power;
		printf("Enter your first number(a): ");
		scanf("%f",&a);
		printf("Enter your second number(b): ");
		scanf("%f",&b);
		printf("Which operation would you like to perform?\n");
		printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus (to find remainder)\n6. Power\n7. All\n");
		printf("Choose: ");
		int operation;
		scanf("%d",&operation);
		switch(operation) {
			case 1:
			printf("Addition (a+b) = %.3f\n",sum=a+b);
			break;
			case 2:
			printf("Subtraction (a-b) = %.3f\n",sub=a-b);
			break;
			case 3:
			printf("Multiplication (a*b) = %.3f\n",mul=a*b);
			break;
			case 4:
			printf("Division (a/b) = %.3f\n",div=a/b);
			break;
			case 5:
			printf("Modulus (a%%b) = 0 since remainder is always 0 when decimal is divided by any other number\n");
			break;
			case 6:
			printf("Power (a^b) = %.3f\n",power=pow(a,b));
			break;
			case 7:
			printf("Addition (a+b) = %.3f\n",sum=a+b);
			printf("Subtraction (a-b) = %.3f\n",sub=a-b);
			printf("Multiplication (a*b) = %.3f\n",mul=a*b);
			printf("Division (a/b) = %.3f\n",div=a/b);
			printf("Modulus (a%%b) = 0 since remainder is always 0 when decimal number is divided by any other number\n");
			printf("Power (a^b) = %.3f\n",power=pow(a,b));
			break;
			default:
			printf("Sorry, wrong input.\n");
			break;
		}

	//Double data type
	} else if(strcmp(datatype,typeDouble)==0) {
		double a,b,sum,sub,mul,div,power;
		printf("Enter your first number(a): ");
		scanf("%lf",&a);
		printf("Enter your second number(b): ");
		scanf("%lf",&b);
		printf("Which operation would you like to perform?\n");
		printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus (to find remainder)\n6. Power\n7. All\n");
		printf("Choose: ");
		int operation;
		scanf("%d",&operation);
		switch(operation) {
			case 1:
			printf("Addition (a+b) = %.3lf\n",sum=a+b);
			break;
			case 2:
			printf("Subtraction (a-b) = %.3lf\n",sub=a-b);
			break;
			case 3:
			printf("Multiplication (a*b) = %.3lf\n",mul=a*b);
			break;
			case 4:
			printf("Division (a/b) = %.3lf\n",div=a/b);
			break;
			case 5:
			if ((int)a==a && (int)b==b) {
				printf("Modulus (a%%b) = %d\n",(int)a%(int)b);
			} else {
				printf("Modulus (a%%b) = 0 since remainder is always 0 when decimal number is divided by any other number\n");
			}	
			break;
			case 6:
			printf("Power (a^b) = %.3lf\n",power=pow(a,b));
			break;
			case 7:
			printf("Addition (a+b) = %.3lf\n",sum=a+b);
			printf("Subtraction (a-b) = %.3lf\n",sub=a-b);
			printf("Multiplication (a*b) = %.3lf\n",mul=a*b);
			printf("Division (a/b) = %.3lf\n",div=a/b);
			if ((int)a==a && (int)b==b) {
				printf("Modulus (a%%b) = %d\n",(int)a%(int)b);
			} else {
				printf("Modulus (a%%b) = 0 since remainder is always 0 when decimal number is divided by any other number\n");
			}
			printf("Power (a^b) = %.3lf\n",power=pow(a,b));
			break;
			default:
			printf("Sorry, wrong input.\n");
			break;
		}

	//Wrong input
	}else {
		printf("Sorry, wrong input! Try again.\n");
	}

	

	return 0;
}
