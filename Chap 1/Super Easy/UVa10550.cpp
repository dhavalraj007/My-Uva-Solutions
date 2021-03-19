#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, x, y, z;
    while (scanf("%d %d %d %d", &i, &x, &y, &z) && i|x|y|z) {
        int res = 0;
        res += 80;
        res += 40;
        res += (i - x < 0 ? 40 + (i - x) : (i - x)); // anticlockwise
        res += (y - x < 0 ? 40 + (y - x) : (y - x)); // clockwise
        res += (y - z < 0 ? 40 + (y - z) : (y - z)); // anticlockwise
        res *= 9;
        printf("%d\n", res);
    }
    return 0;
}
