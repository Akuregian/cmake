cmake_minimum_required(VERSION 3.14)

project(ExampleCMake)

file(GLOB SOURCES 
	"../*.cpp"
	"../*.h")
add_executable(${PROJECT_NAME} ${SOURCES})
