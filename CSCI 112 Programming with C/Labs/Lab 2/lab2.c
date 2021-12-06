#include <stdio.h>
#include <stdbool.h>

void quadCheck(double x_point, double y_point){
    if (x_point > 0 && y_point > 0){
        printf("(%.1lf, %.1lf) is in quadrant 1 \n", x_point, y_point);
    }
    else if (x_point > 0 && y_point < 0){
        printf("(%.1lf, %.1lf) is in quadrant 4 \n", x_point, y_point);
    }
    else if (x_point < 0 && y_point > 0){
        printf("(%.1lf, %.1lf) is in quadrant 2 \n", x_point, y_point);
    }
    else if (x_point < 0 && y_point < 0){
        printf("(%.1lf, %.1lf) is in quadrant 3 \n", x_point, y_point);
    }
    else if (x_point == 0.0 && y_point != 0){
        printf("(%.1lf, %.1lf) is on the y-axis \n", x_point, y_point);
    }
    else if (x_point != 0 && y_point == 0.0){
        printf("(%.1lf, %.1lf) is on the x-axis \n", x_point, y_point);
    }
    
}

int main(void){
    double x_point, y_point;
    printf("Enter x and y coordinates: ");
    scanf("%lf, %lf", &x_point, &y_point);
    while (x_point != 0.0 || y_point != 0.0){
        quadCheck(x_point, y_point);
        printf("Enter x and y coordinates: ");
        scanf("%lf, %lf", &x_point, &y_point);
       
    }
    printf("(%.1lf, %.1lf) is at the center \n", x_point, y_point);
    return 0;
}
