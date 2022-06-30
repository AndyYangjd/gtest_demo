aux_source_directory(. SRC_LIST)

add_library(gtest_add SHARED ${SRC_LIST})
target_include_directories(gtest_add PUBLIC include)