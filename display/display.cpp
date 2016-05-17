#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(){

	VideoCapture cap(0);
	namedWindow("Display",CV_WINDOW_AUTOSIZE);
	Mat frame;

	while(1){
		
		bool isopen=cap.read(frame);
		
		if(!isopen){
			cout<<"cannot read video";
			break;
		}
		
		imshow("Display",frame);

		char key=cvWaitKey(30);
		if((key) == 27){
			break;
		}
		
	}

	destroyAllWindows();
	return 0;
}

