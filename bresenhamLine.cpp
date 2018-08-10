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

///Bresenham's Line Drawing Algorithm
void runBresenhamLine() {

    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    printf("BRESENHAM ALGORITHM :: GREEN CURVE\n");

    time_t t1, t2;
    t1 = clock();

    int x, y, x1, y1, x2, y2, d, dx, dy, ds, dt;

    printf("Input The Coordinates of (x1, y1) and (x2, y2)\n");

    printf("(x1, y1) = ");
    scanf("%d%d", &x1, &y1);

    printf("\n(x2, y2) = ");
    scanf("%d%d", &x2, &y2);
    printf("\n");


    x = x1, y = y1, dx = x2 - x1, dy = y2 - y1;
    dt = 2 * (dy - dx), ds = 2 * dy, d = 2 * dy - dx;

    putpixel(x, y, GREEN);
    while(x < x2) {
        x++;
        if(d < 0) {
            d += ds;
        }
        else {
            d += dt;
            y++;
        }
        putpixel(x, y, GREEN);
    }

    getch();
    closegraph();


}


int main() {

    runBresenhamLine();

    return 0;
}
