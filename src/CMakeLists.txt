set(HEADER_LIST "${Img_SOURCE_DIR}/include/ImgLib/ImgLib.hpp")

add_library(ImgLib lib.cpp ${HEADER_LIST})
target_include_directories(ImgLib PRIVATE ${OpenCV_INCLUDE_DIRS})
target_include_directories(ImgLib PUBLIC "../include/")
target_link_libraries(ImgLib PRIVATE ${OpenCV_LIBS})
target_compile_features(ImgLib PUBLIC cxx_std_17)
