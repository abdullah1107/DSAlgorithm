cmake_minimum_required(VERSION 3.23)
project(BSTFULL)

set(CMAKE_CXX_STANDARD 23)

add_executable(BSTFULL main.cpp BSTree.h InsertBST.cpp SearchValueInBST.cpp MaxAndMin.cpp HeightAndDepthOfTree.cpp DeleteNode.cpp LabelTraversal.cpp)
