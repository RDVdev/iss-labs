#include <point.h>
def distance(Point x,Point y){
    return sqrt(pow(x.xcord-y.xcord,2)+pow(x.ycord-y.ycord,2));
}

int main(){
    Point x,y;
    printf("Enter the x and y coordinates of the first point: ");
    scanf("%d %d",&x.xcord,&x.ycord);
    printf("Enter the x and y coordinates of the second point: ");
    scanf("%d %d",&y.xcord,&y.ycord);
    printf("The distance between the two points is: %f",distance(x,y));
    return 0;
}