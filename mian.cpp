#include <cv.h>           
#include <highgui.h>
#include <cxcore.h>

using namespace cv;

#define CHANNELS 3

typedef struct CodeWord
{
	uchar IHigh[CHANNELS];
	uchar ILow[CHANNELS];
	uchar max[CHANNELS];
	uchar min[CHANNELS];
	int t_last;
	int stale;
}CW;

typedef struct CodeBook
{
	CW **cw;
	int numEntries;
	int t;
}CB;

int main()
{
	//declare variables
	CvCapture* capture;
	IplImage* rawFrame;
	CB* cB;

	//initialize variables

	//process every frame of the video

	//release resources

	
	capture = cvCreateFileCapture("codebook/tree.avi");

	if(!capture)
	{
		std::cout << "Could not open capture" << std::endl;
	}

	cvNamedWindow("Raw Frame");
	

	unsigned P1 = 0xff;
	std::cout << P1;

	return 0;
}