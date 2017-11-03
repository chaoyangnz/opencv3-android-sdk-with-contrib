# Install script for directory: /Users/Chao/opencv/samples/android/tutorial-3-cameracontrol

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples" TYPE FILE FILES "/Users/Chao/opencv/build/o4a/bin/example-tutorial-3-cameracontrol.apk")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples/tutorial-3-cameracontrol/res/drawable" TYPE FILE FILES "/Users/Chao/opencv/build/o4a/samples/android/tutorial-3-cameracontrol/.build/res/drawable/icon.png")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples/tutorial-3-cameracontrol/res/layout" TYPE FILE FILES "/Users/Chao/opencv/build/o4a/samples/android/tutorial-3-cameracontrol/.build/res/layout/tutorial3_surface_view.xml")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples/tutorial-3-cameracontrol/res/values" TYPE FILE FILES "/Users/Chao/opencv/build/o4a/samples/android/tutorial-3-cameracontrol/.build/res/values/strings.xml")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples/tutorial-3-cameracontrol/src/org/opencv/samples/tutorial3" TYPE FILE FILES "/Users/Chao/opencv/build/o4a/samples/android/tutorial-3-cameracontrol/.build/src/org/opencv/samples/tutorial3/Tutorial3Activity.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples/tutorial-3-cameracontrol/src/org/opencv/samples/tutorial3" TYPE FILE FILES "/Users/Chao/opencv/build/o4a/samples/android/tutorial-3-cameracontrol/.build/src/org/opencv/samples/tutorial3/Tutorial3View.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples/tutorial-3-cameracontrol" TYPE FILE FILES "/Users/Chao/opencv/build/o4a/samples/android/tutorial-3-cameracontrol/.build/AndroidManifest.xml")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples/tutorial-3-cameracontrol" TYPE FILE FILES "/Users/Chao/opencv/samples/android/tutorial-3-cameracontrol/.classpath")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples/tutorial-3-cameracontrol" TYPE FILE FILES "/Users/Chao/opencv/samples/android/tutorial-3-cameracontrol/.project")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples/tutorial-3-cameracontrol/.settings" TYPE FILE FILES "/Users/Chao/opencv/samples/android/tutorial-3-cameracontrol/.settings/org.eclipse.jdt.core.prefs")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  EXECUTE_PROCESS(COMMAND /Users/Chao/Library/Android/sdk/tools/android --silent update project --path . --target "android-11" --name "example-tutorial-3-cameracontrol"  --library ../../sdk/java
                                    WORKING_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/samples/tutorial-3-cameracontrol"
                                   )
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  MAKE_DIRECTORY("$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/samples/tutorial-3-cameracontrol/gen")
endif()

