#include <fmt/base.h>
#include <opencv2/opencv.hpp>

#include "ImgLib/ImgLib.hpp"

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

  img::debug_image(image, "Img++");

  return 0;
}
