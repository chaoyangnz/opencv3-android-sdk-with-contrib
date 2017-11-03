# Install script for directory: /Users/Chao/opencv/modules/java

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Users/Chao/opencv/build/build_service_armeabi/install")
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

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/core" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/core/Algorithm.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/core" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/core/Core.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/core" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/core/TickMeter.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/imgproc" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/imgproc/CLAHE.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/imgproc" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/imgproc/Imgproc.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/imgproc" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/imgproc/LineSegmentDetector.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/imgproc" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/imgproc/Subdiv2D.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/ml" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/ml/ANN_MLP.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/ml" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/ml/Boost.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/ml" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/ml/DTrees.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/ml" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/ml/EM.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/ml" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/ml/KNearest.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/ml" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/ml/LogisticRegression.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/ml" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/ml/Ml.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/ml" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/ml/NormalBayesClassifier.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/ml" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/ml/ParamGrid.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/ml" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/ml/RTrees.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/ml" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/ml/SVM.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/ml" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/ml/SVMSGD.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/ml" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/ml/StatModel.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/ml" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/ml/TrainData.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/objdetect" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/objdetect/BaseCascadeClassifier.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/objdetect" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/objdetect/CascadeClassifier.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/objdetect" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/objdetect/HOGDescriptor.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/objdetect" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/objdetect/Objdetect.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/photo" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/photo/AlignExposures.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/photo" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/photo/AlignMTB.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/photo" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/photo/CalibrateCRF.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/photo" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/photo/CalibrateDebevec.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/photo" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/photo/CalibrateRobertson.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/photo" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/photo/MergeDebevec.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/photo" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/photo/MergeExposures.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/photo" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/photo/MergeMertens.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/photo" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/photo/MergeRobertson.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/photo" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/photo/Photo.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/photo" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/photo/Tonemap.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/photo" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/photo/TonemapDrago.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/photo" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/photo/TonemapDurand.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/photo" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/photo/TonemapMantiuk.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/photo" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/photo/TonemapReinhard.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/video" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/video/BackgroundSubtractor.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/video" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/video/BackgroundSubtractorKNN.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/video" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/video/BackgroundSubtractorMOG2.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/video" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/video/DenseOpticalFlow.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/video" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/video/DualTVL1OpticalFlow.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/video" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/video/FarnebackOpticalFlow.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/video" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/video/KalmanFilter.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/video" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/video/SparseOpticalFlow.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/video" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/video/SparsePyrLKOpticalFlow.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/video" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/video/Video.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/dnn" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/dnn/DictValue.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/dnn" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/dnn/Dnn.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/dnn" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/dnn/Importer.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/dnn" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/dnn/Layer.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/dnn" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/dnn/Net.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/imgcodecs" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/imgcodecs/Imgcodecs.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/videoio" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/videoio/VideoCapture.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/videoio" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/videoio/VideoWriter.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/videoio" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/videoio/Videoio.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/features2d" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/features2d/AKAZE.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/features2d" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/features2d/AgastFeatureDetector.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/features2d" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/features2d/BFMatcher.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/features2d" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/features2d/BOWImgDescriptorExtractor.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/features2d" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/features2d/BOWKMeansTrainer.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/features2d" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/features2d/BOWTrainer.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/features2d" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/features2d/BRISK.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/features2d" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/features2d/DescriptorExtractor.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/features2d" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/features2d/DescriptorMatcher.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/features2d" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/features2d/FastFeatureDetector.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/features2d" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/features2d/Feature2D.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/features2d" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/features2d/FeatureDetector.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/features2d" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/features2d/Features2d.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/features2d" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/features2d/FlannBasedMatcher.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/features2d" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/features2d/GFTTDetector.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/features2d" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/features2d/KAZE.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/features2d" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/features2d/MSER.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/features2d" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/features2d/ORB.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/features2d" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/features2d/Params.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/calib3d" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/calib3d/Calib3d.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/calib3d" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/calib3d/StereoBM.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/calib3d" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/calib3d/StereoMatcher.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/calib3d" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/calib3d/StereoSGBM.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/android" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/android/AsyncServiceHelper.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/android" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/android/BaseLoaderCallback.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/android" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/android/CameraBridgeViewBase.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/android" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/android/FpsMeter.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/android" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/android/InstallCallbackInterface.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/android" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/android/JavaCameraView.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/android" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/android/LoaderCallbackInterface.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/android" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/android/StaticHelper.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/android" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/android/Utils.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/osgi" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/osgi/OpenCVInterface.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/utils" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/utils/Converters.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/android" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/android/OpenCVLoader.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/osgi" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/osgi/OpenCVNativeLoader.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/core" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/core/CvException.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/core" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/core/CvType.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/core" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/core/DMatch.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/core" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/core/KeyPoint.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/core" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/core/Mat.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/core" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/core/MatOfByte.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/core" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/core/MatOfDMatch.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/core" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/core/MatOfDouble.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/core" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/core/MatOfFloat.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/core" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/core/MatOfFloat4.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/core" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/core/MatOfFloat6.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/core" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/core/MatOfInt.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/core" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/core/MatOfInt4.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/core" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/core/MatOfKeyPoint.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/core" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/core/MatOfPoint.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/core" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/core/MatOfPoint2f.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/core" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/core/MatOfPoint3.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/core" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/core/MatOfPoint3f.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/core" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/core/MatOfRect.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/core" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/core/MatOfRect2d.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/core" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/core/Point.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/core" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/core/Point3.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/core" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/core/Range.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/core" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/core/Rect.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/core" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/core/Rect2d.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/core" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/core/RotatedRect.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/core" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/core/Scalar.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/core" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/core/Size.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/core" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/core/TermCriteria.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/imgproc" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/imgproc/Moments.java")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/src/org/opencv/engine" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/src/org/opencv/engine/OpenCVEngineInterface.aidl")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/.classpath")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/.project")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/.settings" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/.settings/org.eclipse.jdt.core.prefs")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/lint.xml")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/res/values" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/res/values/attrs.xml")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/project.properties")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java" TYPE FILE FILES "/Users/Chao/opencv/build/build_service_armeabi/AndroidManifest.xml")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/" TYPE DIRECTORY FILES "/Users/Chao/opencv/build/build_service_armeabi/sdk/java/gen")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/java/" TYPE DIRECTORY FILES "/Users/Chao/opencv/build/build_service_armeabi/sdk/java/res")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "java" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/sdk/native/libs/armeabi" TYPE SHARED_LIBRARY OPTIONAL FILES "/Users/Chao/opencv/build/build_service_armeabi/lib/armeabi/libopencv_java3.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/sdk/native/libs/armeabi/libopencv_java3.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/sdk/native/libs/armeabi/libopencv_java3.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Users/Chao/android-ndk-r10e/toolchains/arm-linux-androideabi-4.9/prebuilt/darwin-x86_64/bin/arm-linux-androideabi-strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/sdk/native/libs/armeabi/libopencv_java3.so")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/Chao/opencv/build/build_service_armeabi/modules/java/android_test/cmake_install.cmake")

endif()

