cmake_minimum_required (VERSION 3.5)

project (pubsub_broker-less_demo)


include_directories(${CMAKE_CURRENT_SOURCE_DIR}/open62541/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/open62541/src_generated)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/open62541/plugins/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/open62541/arch)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/open62541/deps)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/open62541/src/pubsub)

find_library(OPEN62541_LIB libopen62541.a PATHS ${CMAKE_CURRENT_SOURCE_DIR}/open62541/)

add_executable(publisher ${CMAKE_CURRENT_SOURCE_DIR}/src/tutorial_pubsub_publish.c)
target_link_libraries(publisher ${OPEN62541_LIB} pthread)

add_executable(subscriber ${CMAKE_CURRENT_SOURCE_DIR}/src/tutorial_pubsub_subscribe.c)
target_link_libraries(subscriber ${OPEN62541_LIB} pthread)

