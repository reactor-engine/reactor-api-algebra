cmake_minimum_required(VERSION 3.0)
project(reactor_api_algebra)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -O3 -flto")

set(SOURCE_FILES
        )

include_directories(
        ../reactor-api-type/api/include)

#add_executable(reactor_api_algebra ${SOURCE_FILES})
#set_target_properties(reactor_api_algebra PROPERTIES LINKER_LANGUAGE CXX)