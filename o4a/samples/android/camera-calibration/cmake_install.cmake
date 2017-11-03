# Install script for directory: /Users/Chao/opencv/samples/android/camera-calibration

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Users/Chao/opencv/build/o4a/install")
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

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples" TYPE FILE FILES "/Users/Chao/opencv/build/o4a/bin/example-camera-calibration.apk")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples/camera-calibration/res/drawable" TYPE FILE FILES "/Users/Chao/opencv/build/o4a/samples/android/camera-calibration/.build/res/drawable/icon.png")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples/camera-calibration/res/layout" TYPE FILE FILES "/Users/Chao/opencv/build/o4a/samples/android/camera-calibration/.build/res/layout/camera_calibration_surface_view.xml")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples/camera-calibration/res/menu" TYPE FILE FILES "/Users/Chao/opencv/build/o4a/samples/android/camera-calibration/.build/res/menu/calibration.xml")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples/camera-calibration/res/values" TYPE FILE FILES "/Users/Chao/opencv/build/o4a/samples/android/camera-calibration/.build/res/values/strings.xml")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples/camera-calibration/src/org/opencv/samples/cameracalibration" TYPE FILE FILES "/Users/Chao/opencv/build/o4a/samples/android/camera-calibration/.build/src/org/opencv/samples/cameracalibration/CalibrationResult.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples/camera-calibration/src/org/opencv/samples/cameracalibration" TYPE FILE FILES "/Users/Chao/opencv/build/o4a/samples/android/camera-calibration/.build/src/org/opencv/samples/cameracalibration/CameraCalibrationActivity.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples/camera-calibration/src/org/opencv/samples/cameracalibration" TYPE FILE FILES "/Users/Chao/opencv/build/o4a/samples/android/camera-calibration/.build/src/org/opencv/samples/cameracalibration/CameraCalibrator.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples/camera-calibration/src/org/opencv/samples/cameracalibration" TYPE FILE FILES "/Users/Chao/opencv/build/o4a/samples/android/camera-calibration/.build/src/org/opencv/samples/cameracalibration/OnCameraFrameRender.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples/camera-calibration" TYPE FILE FILES "/Users/Chao/opencv/build/o4a/samples/android/camera-calibration/.build/AndroidManifest.xml")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples/camera-calibration" TYPE FILE FILES "/Users/Chao/opencv/samples/android/camera-calibration/.classpath")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples/camera-calibration" TYPE FILE FILES "/Users/Chao/opencv/samples/android/camera-calibration/.project")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples/camera-calibration/.settings" TYPE FILE FILES "/Users/Chao/opencv/samples/android/camera-calibration/.settings/org.eclipse.jdt.core.prefs")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  EXECUTE_PROCESS(COMMAND /Users/Chao/Library/Android/sdk/tools/android --silent update project --path . --target "android-11" --name "example-camera-calibration"  --library ../../sdk/java
                                    WORKING_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/samples/camera-calibration"
                                   )
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  MAKE_DIRECTORY("$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/samples/camera-calibration/gen")
endif()

