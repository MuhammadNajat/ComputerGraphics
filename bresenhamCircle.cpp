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

void printPoints(int xc, int yc, int x, int y) {

    putpixel(xc+x, yc+y, WHITE);
    putpixel(xc-x, yc+y, WHITE);
    putpixel(xc+x, yc-y, WHITE);
    putpixel(xc-x, yc-y, WHITE);
    putpixel(xc+y, yc+x, WHITE);
    putpixel(xc-y, yc+x, WHITE);
    putpixel(xc+y, yc-x, WHITE);
    putpixel(xc-y, yc-x, WHITE);

}

void runBresenhamCircle() {                  ///incomplete

    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    int d, x, y, r, xc, yc;

    printf("Input The Center of The Circle (x, y) : ");
    scanf("%d%d", &xc, &yc);
    printf("\nInput The Radius ");
    scanf("%d", &r);
    printf("\n");

    x = 0, y = r, d = 3 - 2 * r;

    while(x <= y) {

        printPoints(xc, yc, x, y);
        if(d < 0) {
            d = d + 4 * x + 6;
        }

        else {
            d = d + 4 * (x - y) + 10;
            y--;
        }
        x++;

        printPoints(xc, yc, x, y);

    }

    getch();
    closegraph();

}

int main() {

    runBresenhamCircle();

    return 0;
}
