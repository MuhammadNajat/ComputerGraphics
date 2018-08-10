/**

    :: Computer Graphics Lab Assignments ::

    Programmer: Muhammad Sadrul Muttaquin Hoque Najat
                Current Position:
                ::::::::::::::::: 7th Semester
                ::::::::::::::::: Department of Computer Science and Engineering
                ::::::::::::::::: International Islamic University Chittagong

*/



#include <bits/stdc++.h>
#include <graphics.h>
using namespace std;


///Direct Differential Analyzer
void runDDA() {

    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    printf("DDA ALGORITHM :: WHITE CURVE\n");

    /*
        high_resolution_clock::time_point t1 = high_resolution_clock::now();
        time_t t1, t2;
        t1 = clock();
    */

    int i, j, k, l, m, x0, y0, x1, y1, x2, y2, dx, dy, steps, xinc, yinc;

    printf("Input The Coordinates of (x1, y1) and (x2, y2)\n");

    printf("(x1, y1) = ");
    int cnt = 0;
    scanf("%d%d", &x1, &y1);

    printf("\n(x2, y2) = ");
    scanf("%d%d", &x2, &y2);
    printf("\n");

    dx = x2 - x1, dy = y2 - y1;

    steps = max(abs(dx), abs(dy));

    xinc = dx / steps, yinc = dy / steps;

    for(i=0; i<steps; i++) {
        putpixel(x1, y1, WHITE);
        x1 += xinc;
        y1 += yinc;
    }

    getch();
    closegraph();

}


int main() {

    runDDA();

    return 0;
}

