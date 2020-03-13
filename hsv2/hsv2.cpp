#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <iostream>
using namespace cv;
using namespace std;


int main()
{
	Mat srcMat = imread("D:\\360downloads\\3.jpg");
	Mat src, dst1, dst2;
	cvtColor(srcMat, src, CV_RGB2GRAY);//二值化
	adaptiveThreshold(src, dst1, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY, 15, 10);
	threshold(src, dst2, 100, 255, THRESH_BINARY);
	imshow("Binarization Image1", dst1);
	imshow("Binarization Image2", dst2);
	imshow("原始", srcMat);
	while (1) { if (waitKey(30) == 27) { destroyAllWindows(); break; } }
	return 0;
}