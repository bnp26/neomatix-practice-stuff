//
//  imageviewer.hpp
//  neomatix-aka-ben-project
//
//  Created by Maddie Toth on 6/18/16.
//
//

#ifndef imageviewer_hpp
#define imageviewer_hpp

#include <stdio.h>
#include <iostream>
#include <memory>
#include <string>
#include <fstream>

#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"

//showImage takes in a 8bit grayscale WxH (width by height) image and desplays it.
int showImage(std::string img, int width, int height);

#endif /* imageviewer_hpp */


