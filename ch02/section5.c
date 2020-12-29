// scanf (f stands for 'format') -> for data input
// scanf("%d", &i) -> "%d" means 'integer'

#include <stdio.h>

int main(void) {
    int height, length, width, volume, weight;

    scanf("%d", &height);
    scanf("%d", &length);
    scanf("%d", &width);
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("%d\n", volume);
    printf("%d\n", weight);

    return 0;
}