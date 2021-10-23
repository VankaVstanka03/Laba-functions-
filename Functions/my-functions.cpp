#include "my-functions.h"
#define pi 3.1415926535

double exp(double x, int terms, double* eps) {
	double res = 1;
	double c = 1;
	int n = 0;
	do {
		c = c * (x / (n + 1));
		res += c;
		n++;
	} while (n < terms);
	*eps = (x / (n + 1));
	return res;
}

double sin(double x, int terms, double* eps) {
	double per = 1;
	for (per; true; per++) {
		if ((x >= 0) && (x <= (2 * per * pi))) {
			x = (-1)*(2 * per * pi - x);
			break;
		}
		else if ((x >= 0) && (x <= (2 * pi))) {
			break;
		}
		else if ((x <= 0) && (x >= (-1)*(2 * per * pi))) {
			x = x + (2 * per * pi);
			break;
		}
		else if ((x <= 0) && (x >= (-1) * (2 * pi))) {
			break;
		}
	}
	double res = x;
	double c = x;
	double n = 0;
	do {
		c *= (-1.0 * x * x) / ((2 * n + 3)*(2 * n + 2));
		res += c;
		n++;
	} while (n < terms);
	*eps = (x * x) / ((2 * n + 3) * (2 * n + 2));
	return res;
}

double cos(double x, int terms, double* eps) {
	double per = 1;
	for (per; true; per++) {
		if ((x >= 0) && (x <= (2 * per * pi))) {
			x = (2 * per * pi - x);
			break;
		}
		else if ((x >= 0) && (x <= (2 * pi))) {
			break;
		}
		else if ((x <= 0) && (x >= (-1) * (2 * per * pi))) {
			x = x + (2 * per * pi);
			break;
		}
		else if ((x <= 0) && (x >= (-1) * (2 * pi))) {
			break;
		}
	}
	double res = 1;
	double c = 1;
	double n = 0;
	do {
		c *= (-1.0 * x * x) / ((2 * n + 1) * (2 * n + 2));
		res += c;
		n++;
	} while (n < terms);
	*eps = (x * x) / ((2 * n + 1) * (2 * n + 2));
	return res;
}

double  asin(double x, int terms, double* eps) {
	double res = x;
	double c = x;
	double n = 0;
	do {
		c *= ((x * x *(2 * n + 1) * (2 * n + 1))/((2 * n + 3)*(2 * n + 2)));
		res += c;
		n++;
	} while (n < terms);
	*eps = ((x * x) / ((2 * n + 3) * (2 * n + 2)));
	return res;
}

double acos(double x, int terms, double* eps) {
	double pi2 = pi / 2;
	return pi2 - asin(x, terms, eps);
}

double power(double x1, int n1) {
	double res = 1;
	if (n1 == 0) {
		res = 1;
	}
	else if (n1 == 1) {
		res = x1;
	}
	else if (n1 % 2 == 0) {
		res = power(x1 * x1, n1 / 2);
	}
	else {
		res = x1 * power(x1 * x1, n1 / 2);
	}
	return res;
}

double fact(double n1) {
	if ((n1 == 0) || (n1 == 1)) {
		return 1;
	}
	return n1 * fact(n1 - 1);
}

