#include <stdio.h>

struct point {
    int x;
    int y;
};

/* draws a point at 10, 5 */
int x = 10;
int y = 5;
draw(x, y);

/* draws a point at 10, 5 */
struct point p;
p.x = 10;
p.y = 5;
draw(p);