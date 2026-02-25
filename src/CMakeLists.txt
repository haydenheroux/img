set(HEADER_LIST "${Img++_SOURCE_DIR}/lib/lib.hpp")

add_library(Img++ lib.cpp ${HEADER_LIST})
target_compile_features(Img++ PUBLIC cxx_std_17)
