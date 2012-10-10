cmake_minimum_required(VERSION 2.6.0)

project(TcpHubDecoder C)

include_directories(..)

add_library(text SHARED text.c)

add_library(proto SHARED proto.c)

target_link_libraries(proto checktype)

install(TARGETS text proto LIBRARY DESTINATION lib/tcphub)
