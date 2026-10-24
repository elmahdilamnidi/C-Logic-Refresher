#include <stdio.h>
#include <math.h>

int main(void)
{
    double x1, y1, x2, y2, x3, y3;
    double u, v, w, p, s, a;

    printf("Enter x1 y1: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter x2 y2: ");
    scanf("%lf %lf", &x2, &y2);
    printf("Enter x3 y3: ");
    scanf("%lf %lf", &x3, &y3);

    u = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    v = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    w = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

    p = u + v + w;
    s = p / 2;
    a = sqrt(s * (s - u) * (s - v) * (s - w));

    printf("Perimeter = %f\n", p);
    printf("Area = %f\n", a);

    return 0;
}