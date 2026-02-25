#include <opencv2/opencv.hpp>

namespace img {

  void debug_image(cv::Mat mat, const std::string& title) {
    cv::namedWindow(title);
    cv::imshow(title, mat);
    cv::waitKey(0);
  }

};
