#include <cv.h>           
#include <highgui.h>
#include <cxcore.h>

int main()
{
	CvCapture* capture;
	IplImage* frame;
	capture = cvCreateFileCapture("codebook/tree.avi");


	if(!capture)
	{
		std::cout << "Could not open capture" << std::endl;
	}

	cvNamedWindow("Raw Frame");
	int count = 0;
	while(frame = cvQueryFrame(capture))
	{
		cvShowImage("Raw Frame", frame);
		count++;
	}

	std::cout << count << std::endl;

	cvWaitKey(0);
	return 0;
}