#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

String folderPath = "/Users/bagjaehyeong/Desktop/cpp/opencv/data/";

int main()
{
    cout << "hello world!" << endl;

    Mat img = imread("/Users/bagjaehyeong/Desktop/cpp/opencv/data/lenna.bmp");
    Mat img2 = imread(folderPath + "lenna_save.jpg");
    Mat img3 = imread(folderPath + "lenna_save_20.jpg");

    cout << img.size << endl;
    cout << img2.size << endl;

    namedWindow("lenna" , WINDOW_NORMAL);
    setWindowProperty("lenna", WND_PROP_FULLSCREEN, WINDOW_FULLSCREEN);
    // Size size(640 , 480);
    // resizeWindow("lenna" , size);

    imshow("lenna" , img2);
    // imshow("lenna" , img3);

    waitKey();

    vector<int> jpg_params;
    jpg_params.push_back(IMWRITE_JPEG_QUALITY);
    jpg_params.push_back(20);
    // jpg_params.push_back(IMWRITE_JPEG_QUALITY);
    // jpg_params.push_back(20);
    // imwrite(folderPath + "lenna_save_20.jpg" , img , jpg_params);


    return 0;
}