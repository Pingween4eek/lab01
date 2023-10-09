#include <stdio.h>

int main(){
int x, y, z;

for (x = 1; x <= 5; x++)
for (y = 2; y <= 6; y += 2){
z = 2 * x + 3 * y;
printf("при x=%d, при y=%d, z=%d\n", x, y, z);
}

return 0;
}
