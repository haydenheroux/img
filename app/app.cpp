#include <fmt/base.h>
#include <opencv2/opencv.hpp>

int main(int argc, char **argv) {
  if (argc != 2) {
    fmt::println("usage: {} <image>", argv[0]);
    return -1;
  }

  cv::Mat image;
  image = cv::imread(argv[1]);

  if (!image.data) {
    fmt::println("failed to load image data");
    return -1;
  }
  cv::namedWindow("Img++", cv::WINDOW_AUTOSIZE);
  cv::imshow("Img++", image);

  cv::waitKey(0);

  return 0;
}
