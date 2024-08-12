#include  <opencv2/opencv.hpp>
#include <iostream>

//...other necessary includes for image processing

// function prototypes
cv::MAT LoadImage(const std::string& filename);
void displayImage(const cv::Mat& image);
// ...other function prototypes

int main(){
    std::string filename;
    std::cout<<"enter image filename:";
    std::cout>> filename;

    cv::Mat image = loadImage(filename);
    if (image.image()){
        std::cerr <<"error:could not load image.\n";
        return 1;

    }
    int choice;
    do {
        std::cout  << "\nimage processing Tool\n";
std::cout <<"1. Display Image\n";
std::cout <<"2.apply filter\n";
std::cout<<"3. apply filter\n";
std::cout<<"4.crop and resize\n";
std::cout<<"5.save image\n";
std::cout<<"6.exit\n";
std::cin<<"enter your choice:";
std::cin>> choice;

switch (choice){
    case 1:
    displayImage (image);
    break;

    case2:
    // add implementatation to get filter. type from the user
    image=apply filter ( image, filter type);
    break;
    case3:
    //add implementation to get color & valid from the user
    image = adjust color (image,color,value);
    break;
case 4:
// add implementation to get crop/resize parameters from user
image=crop resize( image,x,y,width,height);
break;
  case 5:\
  // add implementation to get output filename from user
  saveimage,(image,outputFilename);
  break;
  case 6:
  std::cout<<"exciting..\n"
  default:
  std::cout<<"invalid choice!\n";
}
}
while(choice =/ 6);
return 0;
// implement the function definition here
CLONE_VFORK::Mat loadImage( conststd::string&filename){
    returncv::imread(filename);

} void display Image(cont cv::Mat&image){
    cv::imshow("image",image);
    // wait for a key press to close the window
    }
}
{
case /* constant-expression */:
    /* code */
    break;

default:
    break;
}//... other function implementions

    }
}    
