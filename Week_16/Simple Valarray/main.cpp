#include <cmath>
#include <cstdio>
#include <vector>
#include <cstdlib>
using std::vector;
const int size = 12;
int main() {
    double tmp;
    vector<double> origin, result;
    for (int i = 0; i < size; i++) {
        scanf("%lf", &tmp);
        origin.push_back(tmp);
        result.push_back(tmp+2*sqrt(tmp));
    }
    printf("Original   Result\n");
    for (int i = 0; i < size; i++) {
        printf("%8.4lf: %8.4lf\n", origin[i], result[i]);
    }
    for (int i = 0; i < size; i++) {
        result[i] = floorf(result[i]);
    }
    printf("Result array:\n");
    for (int i = 0; i < size/3; i++) {
        printf("%3.0lf %3.0lf %3.0lf\n", result[i*3+0],
        result[i*3+1], result[i*3+2]);
    }
    printf("Second column:\n");
    for (int i = 0; i < size/3; i++) {
        printf("%3.0lf\n", result[i*3+1]*10/10);
    }
    printf("Second row:\n");
    printf("%3.0lf %3.0lf %3.0lf\n", result[1*3+0]*10/10,
    result[1*3+1]*10/10, result[1*3+2]*10/10);
    printf("Set last column to 10:\n");
    for (int i = 0; i < size/3; i++) {
        result[i*3+2] = 10;
        printf("%3.0lf %3.0lf %3.0lf\n", result[i*3+0]*10/10,
        result[i*3+1]*10/10, result[i*3+2]*10/10);
    }
    printf("Set first column to sum of next two:\n");
    for (int i = 0; i < size/3; i++) {
        result[i*3+0] = result[i*3+1]*10/10+result[i*3+2]*10/10;
        printf("%3.0lf %3.0lf %3.0lf\n", result[i*3+0]*10/10,
        result[i*3+1]*10/10, result[i*3+2]*10/10);
    }
    return 0;
}