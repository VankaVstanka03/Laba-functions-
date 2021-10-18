#include <stdio.h>
#include "my-functions.h"
int main() {
	int num, k = 0;
	double eps, x, j;
	printf("Choose function:\n\n 1)Exp(e^x)\n 2)Sin\n 3)Cos\n 4)Arcsin\n 5)Arccos\n\n Enter the number of function: ");
	scanf_s("%d", &num);
	switch (num) {
	case 1:
		printf(" Enter x = ");
		scanf_s("%lf", &x);
		printf("Choose accuracy: ");
		scanf_s("%d", &k);
		printf(" Exp equal %.*lf",k, exp(x));
		break;
	case 2:
		printf(" Enter x = ");
		scanf_s("%lf", &x);
		printf("Choose accuracy: ");
		scanf_s("%d", &k);
		printf(" Sin equal %.*lf",k, sin(x));
		break;
	case 3:
		printf(" Enter x = ");
		scanf_s("%lf", &x);
		printf("Choose accuracy: ");
		scanf_s("%d", &k);
		printf(" Cos equal %.*lf",k, cos(x));
		break;
	case 4:
		printf(" Enter x (|x| < 1) = ");
		scanf_s("%lf", &x);
		printf("Choose accuracy: ");
		scanf_s("%d", &k);
		if (x < -1 || x > 1) {
			printf(" Error");
			break;
		}
		printf(" Asin equal %.*lf", k, asin(x));
		break;
	case 5:
		printf(" Enter x (|x| < 1) = ");
		scanf_s("%lf", &x);
		printf("Choose accuracy: ");
		scanf_s("%d", &k);
		if (x < -1 || x > 1) {
			printf(" Error");
			break;
		}
		printf(" Acos equal %.*lf", k, acos(x));
		break;
	}
	return 0;
}


/*if (num == 1) {
		printf(" Enter x = ");
		scanf_s("%lf", &x);
		printf(" Exp equal %.20lf", exp(x));
	}
	else if (num == 2) {
		printf(" Enter x = ");
		scanf_s("%lf", &x);
		printf(" Sin equal %.15lf", sin(x));
	}*/