#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

String folderPath = "/Users/bagjaehyeong/Desktop/cpp/opencv/data/";

int main()
{
    Point_<int> p1(1 , 2);
    cout << p1 << endl;
    cout << "x : " << p1.x  <<  "\t " << "y : " << p1.y << endl;

    Point p2(3,4);
    cout << p2 << endl;
    
    return 0;
}