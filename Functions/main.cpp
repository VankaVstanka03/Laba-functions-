#include <stdio.h>
#include "my-functions.h"
int main() {
	int num, j, terms, k = 0;
	double eps = 0, x;
	printf("Choose function:\n\n 1)Exp(e^x)\n 2)Sin\n 3)Cos\n 4)Arcsin\n 5)Arccos\n 6)Exponentiation (x^n)\n 7)Factorial (x!)\n\n Enter the number of function: ");
	scanf_s("%d", &num);
	switch (num) {
	case 1:
		printf(" Enter x = ");
		scanf_s("%lf", &x);
		printf(" Choose the number of terms (better more than 100 for maximum accuracy): ");
		scanf_s("%d", &terms);
		printf(" Choose accuracy: ");
		scanf_s("%d", &k);
		printf(" Exp equal: %.*lf \n Computational error equal: %.14lf", k, exp(x, terms, &eps), eps);
		break;
		case 2:
			printf(" Enter x = ");
			scanf_s("%lf", &x);
			printf(" Choose the number of terms (better more than 100 for maximum accuracy): ");
			scanf_s("%d", &terms);
			printf(" Choose accuracy: ");
			scanf_s("%d", &k);
			printf(" Sin equal %.*lf \n Computational error equal: %.14lf",k, sin(x, terms, &eps), eps);
			break;
		case 3:
			printf(" Enter x = ");
			scanf_s("%lf", &x);
			printf(" Choose the number of terms (better more than 100 for maximum accuracy): ");
			scanf_s("%d", &terms);
			printf(" Choose accuracy: ");
			scanf_s("%d", &k);
			printf(" Cos equal %.*lf \n Computational error equal: %.14lf",k, cos(x, terms, &eps), eps);
			break;
		case 4:
			printf(" Enter x (|x| < 1) = ");
			scanf_s("%lf", &x);
			printf(" Choose the number of terms (better more than 100 for maximum accuracy): ");
			scanf_s("%d", &terms);
			printf(" Choose accuracy: ");
			scanf_s("%d", &k);
			if (x < -1 || x > 1) {
				printf(" Error");
				break;
			}
			printf(" Asin equal %.*lf \n Computational error equal: %.14lf", k, asin(x, terms, &eps), eps);
			break;
		case 5:
			printf(" Enter x (|x| < 1) = ");
			scanf_s("%lf", &x);
			printf(" Choose the number of terms (better more than 100 for maximum accuracy): ");
			scanf_s("%d", &terms);
			printf(" Choose accuracy: ");
			scanf_s("%d", &k);
			if (x < -1 || x > 1) {
				printf(" Error");
				break;
			}
			printf(" Acos equal %.*lf \n Computational error equal: %.14lf", k, acos(x, terms, &eps),eps);
			break;
		case 6:
			printf(" Enter x =  ");
			scanf_s("%lf", &x);
			printf(" Enter integer number degree: ");
			scanf_s("%d", &j);
			printf(" Exponentiation equal %.0lf \n", power(x,j));
			break;
		case 7:
			printf(" Enter positive integer x = ");
			scanf_s("%lf", &x);
			printf(" Factorial equal: %.0lf \n", fact(x));
			break;
		default:
			printf(" Invalid value entered");
			break;
	}
	return 0;
}
