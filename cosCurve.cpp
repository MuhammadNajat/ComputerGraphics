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



///Drawing Cosine Curve
void drawCosCurve() {

    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    for(int i=180; i<=540; i++) {

            double x = (acos(-1) / 180.0) * (double) i;
            double y = cos(x);

            x *= 50.0;
            y *= 110.0;

            y += 200;

            int p = (int) x;
            int q = (int) y;

            cout << p << " : " << q << "\n";

            putpixel(p, q, WHITE);
    }

    getch();
    closegraph();

}


int main() {

    drawCosCurve();

    return 0;
}
