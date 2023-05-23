#include <iostream>
#include <fstream>
#include <string>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;


int main()
{
    // system("python /usr/local/ev_sdk/test.py");
    system("yolo predict model=yolov8s.pt source='bus.jpg'");
    std::cout << "end test"<< std::endl;
    return 0;
}