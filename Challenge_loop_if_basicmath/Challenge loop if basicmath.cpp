#include<stdio.h>
#include<math.h>
double k, l, j = 0, d = 0, z = 0, m, b, xbar = 0, c = 0, sum = 0, sum2 = 0, sum3 = 0, xbar1 = 0, sum4 = 0, sum5 = 0, sum6 = 0;
int main() {

	//scanf_s If not run, please change to scanf too.
	scanf_s("%lf %lf", &m, &b);
	c = m - b + 1;
	if (m > b) {
		d = m - b;
		k = m;
		for (int i = 0; i <= d; i++) {
			printf("%.0lf ", k--);
		}
		xbar = ((c * (m + b)) / 2) / c;
		printf("\nAverage = %.1lf\n", xbar);
		for (int i = 0; i < c; i++) {
			sum = sum + pow(b, 2);
			b = b + 1;
		}
		sum2 = (sum  - (c*pow(xbar, 2)))/d;
		sum3 = sqrt(sum2);
		printf("SD = %.2lf\n", sum3);
	}
	else if (b > m) {
		l = m;
		j = b - m;
		z = b - m + 1;
		for (int i = 0; i <= j; i++) {
			printf("%.0lf ", l++);
		}
		xbar1 = ((z * (m + b)) / 2) / z;
		printf("\nAverage = %.1lf\n", xbar1);
		for (int i = 0; i < z; i++) {
			sum4 = sum4 + pow(m, 2);
			m = m + 1;
		}
		sum5 = (sum4  - (z*pow(xbar1, 2)))/j;
		sum6 = sqrt(sum5);

		printf("SD = %.2lf\n", sum6);
	}
	else { printf("error"); }
}