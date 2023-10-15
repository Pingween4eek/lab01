#include <stdio.h>
#include <math.h>

int main(){
double x, y, u;
double max_x, max_y, max_u = -10.0;

for (x = 0.0; x <= 2.0; x += 0.3){
for (y = 0.0; y <= 1.0; y += 0.4){
u = 4 * cos(cbrt(y)) * sin(x * fabs(y * y * y - 1.4));
if (u > max_u){
max_u = u;
max_x = x;
max_y = y;
} 
}
printf("x: %lf, y: %lf, u: %lf", x, y, u); 
}

return 0;
}
