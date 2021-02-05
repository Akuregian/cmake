cmake_minimum_required(VERSION 3.14)

project(SFML_Project)

set(CMAKE_CXX_STANDARD 17)
set(SFML_DIR "usr/local/Cellar/sfml/2.5.1/lib/cmake/SFML")

find_package(SFML 2.5.1 COMPONENTS graphics audio network system REQUIRED)

file(GLOB SOURCES 
	"src/*.cpp"
	"src/header/*.h")
add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} sfml-graphics sfml-audio sfml-system sfml-network)
