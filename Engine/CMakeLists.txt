cmake_minimum_required(VERSION 3.22)
project(Engine)

file(GLOB_RECURSE ENGINE_SOURCE
	${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/src/*.h
)

set(RAYLIB_LIB ${CMAKE_CURRENT_SOURCE_DIR}/vendor/raylib/lib)

add_library(${PROJECT_NAME} STATIC
	${ENGINE_SOURCE}	
)

target_include_directories(${PROJECT_NAME} PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/src
	${CMAKE_CURRENT_SOURCE_DIR}/vendor/raylib/include
)

target_link_libraries(${PROJECT_NAME} PUBLIC
	${RAYLIB_LIB}/raylib.lib
	winmm.lib
)