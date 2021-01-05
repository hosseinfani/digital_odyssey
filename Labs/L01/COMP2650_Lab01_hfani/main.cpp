#include <cstdlib>
#include <stdio.h>
using namespace std;
int main(int argc, char** argv) {

    int x;
    int y;
    scanf("%d", &x);
    scanf("%d", &y);
    printf("%d AND %d is %d", x, y, x & y);
    return 0;
}
