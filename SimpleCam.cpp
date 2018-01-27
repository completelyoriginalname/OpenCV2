#include "stdafx.h"
#include <highgui.h>
#include <cv.h>
#include <stdio.h>
#include <cmath>
#include "Header1.h"
using namespace std;
using namespace cv;

int main()
{
	int entry;
	
	cout << "Welcome to the Protein Gell Analysis App." << endl << "Please enter whether you would like to either upload an image by typing 1, or take a photo by typing 2.";
	cin >> entry;
	if (entry == 1)
	{

		
		
		Mat src1;
		//Read image ( same size, same type )
		src1 = imread("../CamTest/download.bmp", 0);
		if (!src1.data)
		{
			printf(" Error loading image \n"); 
			return -1;
		}
		
		//Create Windows
		namedWindow("Gell", CV_WINDOW_AUTOSIZE);
		imshow("Gell", src1);
		waitKey(0);
		return 0;

	}
	if (entry == 2)
	{
		cam();
	}
}