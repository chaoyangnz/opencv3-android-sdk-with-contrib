# Install script for directory: /Users/Chao/opencv/data

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Users/Chao/opencv/build/build_service_x86/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "libs" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/etc/haarcascades" TYPE FILE FILES
    "/Users/Chao/opencv/data/haarcascades/haarcascade_eye.xml"
    "/Users/Chao/opencv/data/haarcascades/haarcascade_eye_tree_eyeglasses.xml"
    "/Users/Chao/opencv/data/haarcascades/haarcascade_frontalcatface.xml"
    "/Users/Chao/opencv/data/haarcascades/haarcascade_frontalcatface_extended.xml"
    "/Users/Chao/opencv/data/haarcascades/haarcascade_frontalface_alt.xml"
    "/Users/Chao/opencv/data/haarcascades/haarcascade_frontalface_alt2.xml"
    "/Users/Chao/opencv/data/haarcascades/haarcascade_frontalface_alt_tree.xml"
    "/Users/Chao/opencv/data/haarcascades/haarcascade_frontalface_default.xml"
    "/Users/Chao/opencv/data/haarcascades/haarcascade_fullbody.xml"
    "/Users/Chao/opencv/data/haarcascades/haarcascade_lefteye_2splits.xml"
    "/Users/Chao/opencv/data/haarcascades/haarcascade_licence_plate_rus_16stages.xml"
    "/Users/Chao/opencv/data/haarcascades/haarcascade_lowerbody.xml"
    "/Users/Chao/opencv/data/haarcascades/haarcascade_profileface.xml"
    "/Users/Chao/opencv/data/haarcascades/haarcascade_righteye_2splits.xml"
    "/Users/Chao/opencv/data/haarcascades/haarcascade_russian_plate_number.xml"
    "/Users/Chao/opencv/data/haarcascades/haarcascade_smile.xml"
    "/Users/Chao/opencv/data/haarcascades/haarcascade_upperbody.xml"
    )
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "libs" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/etc/lbpcascades" TYPE FILE FILES
    "/Users/Chao/opencv/data/lbpcascades/lbpcascade_frontalcatface.xml"
    "/Users/Chao/opencv/data/lbpcascades/lbpcascade_frontalface.xml"
    "/Users/Chao/opencv/data/lbpcascades/lbpcascade_frontalface_improved.xml"
    "/Users/Chao/opencv/data/lbpcascades/lbpcascade_profileface.xml"
    "/Users/Chao/opencv/data/lbpcascades/lbpcascade_silverware.xml"
    )
endif()

