# Install script for directory: /Users/Chao/opencv/samples/android/tutorial-2-mixedprocessing

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples" TYPE FILE FILES "/Users/Chao/opencv/build/o4a/bin/example-tutorial-2-mixedprocessing.apk")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples/tutorial-2-mixedprocessing/res/drawable" TYPE FILE FILES "/Users/Chao/opencv/build/o4a/samples/android/tutorial-2-mixedprocessing/.build/res/drawable/icon.png")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples/tutorial-2-mixedprocessing/res/layout" TYPE FILE FILES "/Users/Chao/opencv/build/o4a/samples/android/tutorial-2-mixedprocessing/.build/res/layout/tutorial2_surface_view.xml")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples/tutorial-2-mixedprocessing/res/values" TYPE FILE FILES "/Users/Chao/opencv/build/o4a/samples/android/tutorial-2-mixedprocessing/.build/res/values/strings.xml")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples/tutorial-2-mixedprocessing/src/org/opencv/samples/tutorial2" TYPE FILE FILES "/Users/Chao/opencv/build/o4a/samples/android/tutorial-2-mixedprocessing/.build/src/org/opencv/samples/tutorial2/Tutorial2Activity.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples/tutorial-2-mixedprocessing" TYPE FILE FILES "/Users/Chao/opencv/build/o4a/samples/android/tutorial-2-mixedprocessing/.build/AndroidManifest.xml")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples/tutorial-2-mixedprocessing/jni" TYPE FILE FILES "/Users/Chao/opencv/samples/android/tutorial-2-mixedprocessing/jni/Android.mk")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples/tutorial-2-mixedprocessing/jni" TYPE FILE FILES "/Users/Chao/opencv/samples/android/tutorial-2-mixedprocessing/jni/Application.mk")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples/tutorial-2-mixedprocessing/jni" TYPE FILE FILES "/Users/Chao/opencv/samples/android/tutorial-2-mixedprocessing/jni/jni_part.cpp")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples/tutorial-2-mixedprocessing" TYPE FILE FILES "/Users/Chao/opencv/samples/android/tutorial-2-mixedprocessing/.cproject")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples/tutorial-2-mixedprocessing" TYPE FILE FILES "/Users/Chao/opencv/samples/android/tutorial-2-mixedprocessing/.classpath")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples/tutorial-2-mixedprocessing" TYPE FILE FILES "/Users/Chao/opencv/samples/android/tutorial-2-mixedprocessing/.project")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/samples/tutorial-2-mixedprocessing/.settings" TYPE FILE FILES "/Users/Chao/opencv/samples/android/tutorial-2-mixedprocessing/.settings/org.eclipse.jdt.core.prefs")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  EXECUTE_PROCESS(COMMAND /Users/Chao/Library/Android/sdk/tools/android --silent update project --path . --target "android-11" --name "example-tutorial-2-mixedprocessing"  --library ../../sdk/java
                                    WORKING_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/samples/tutorial-2-mixedprocessing"
                                   )
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "samples" OR NOT CMAKE_INSTALL_COMPONENT)
  MAKE_DIRECTORY("$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/samples/tutorial-2-mixedprocessing/gen")
endif()

