//2
#include<stdio.h>
int get_area_of_sqare(double width)
{  
    return width;
}
int main(void){
    double width;
    int line;
    printf("한변의 길이: ");
    scanf("%d",&line);
    printf("넓비 : %d", width);
    width = line *line;
    return 0;
}