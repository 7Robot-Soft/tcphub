cmake_minimum_required(VERSION 2.6.0)

project(TcpHubDecoder C)

include_directories(..)

add_library(text SHARED text.c)

add_library(atp SHARED atp.c)

target_link_libraries(atp checktype)

install(TARGETS text atp LIBRARY DESTINATION lib/tcphub)
