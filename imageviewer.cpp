//
//  imageviewer.cpp
//  neomatix-aka-ben-project
//
//  Created by Maddie Toth on 6/18/16.
//
//

#include "imageviewer.hpp"

int main()
{
    std::cout << "Working" << std::endl;
    
    return 0;
}

int showImage(std::string img, int imgWidth, int imgHeight)
{
    int width = imgWidth;
    int height = imgHeight;
    
    std::ifstream infile(img, std::ifstream::in | std::ifstream::binary);
    std::unique_ptr<unsigned char> image(new unsigned char[width*height]);
    int frame = 0;
    
    cv::namedWindow("test", CV_WINDOW_NORMAL);
    
    while (true)
    {
        infile.read((char*)image.get(), width*height);
        if ((infile.rdstate() & std::fstream::failbit || infile.rdstate() & std::fstream::eofbit) != 0)
            break;
        cv::Mat cvimage = cv::Mat(height, width, CV_8U, image.get());
        std::string strframe = std::to_string(frame);
        cv::putText(cvimage, strframe, cv::Point(10, 10), cv::FONT_HERSHEY_PLAIN,
                    1, cv::Scalar::all(255));
        cv::imshow("test", cvimage);
        cv::waitKey(0);
        frame++;
    }
    return 0;
}