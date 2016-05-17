#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(){

	VideoCapture cap(0);           // 0 for default webcam , use 1, 2 for other webcams
	namedWindow("Display",CV_WINDOW_AUTOSIZE);     // create a window to display stream
	Mat frame;

	while(true){
		
		bool isopen=cap.read(frame);
		
		if(!isopen){                 // error check
			cout<<"Cannot read video";
			break;
		}
		
		imshow("Display",frame);

		char key=cvWaitKey(30);	    // waits for 30 ms
		if((key) == 27){            // for escape 
			break;
		}
		
	}

	destroyAllWindows();          
	return 0;
}

