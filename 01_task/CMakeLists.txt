add_executable(01_task main.cpp)
add_library(logger logger.cpp)
target_include_directories(logger PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(01_task logger)
