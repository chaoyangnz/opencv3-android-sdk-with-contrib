FROM runmymind/docker-android-sdk:ubuntu-standalone

ARG OPENCV_VERSION

ENV ANDROID_NDK_VERSION r10e
ENV ANDROID_NDK_HOME /opt/android-ndk-${ANDROID_NDK_VERSION}

ENV CMAKE_VERSION 3.6.3
ENV CMAKE_HONE /opt/cmake-${CMAKE_VERSION}-Linux-x86_64

ENV OPENCV_HOME /app/opencv
ENV OPENCV_CONTRIB_HOME /app/opencv_contrib

WORKDIR /app

# Android tools and NDK
RUN command -v "android" >/dev/null || (wget http://dl-ssl.google.com/android/repository/tools_r25.2.5-linux.zip --progress=bar:force:noscroll -O tools_r25.2.5-linux.zip && unzip tools_r25.2.5-linux.zip && \
    mv ${ANDROID_SDK_HOME}/tools tools.orig && mv tools ${ANDROID_SDK_HOME}/ )
RUN wget https://dl.google.com/android/repository/android-ndk-${ANDROID_NDK_VERSION}-linux-x86_64.zip --progress=bar:force:noscroll -O android-ndk.zip && unzip android-ndk.zip -d /opt

# OpenCV build dependencies
RUN apt-get update -yqq && apt-get install -y ninja-build ant libidn11
RUN wget https://cmake.org/files/v3.6/cmake-3.6.3-Linux-x86_64.tar.gz --progress=bar:force:noscroll -O cmake.tar.gz && tar -xzvf cmake.tar.gz -C /opt

# OpenCV and contrib sources
RUN git clone --branch ${OPENCV_VERSION} --single-branch https://github.com/opencv/opencv.git && git clone --branch ${OPENCV_VERSION} --single-branch https://github.com/opencv/opencv_contrib.git

# Start build
RUN export PATH=${CMAKE_HONE}/bin:$PATH && \
    cd ${OPENCV_HOME} && mkdir build && cd ${OPENCV_HOME}/platforms/android && \
    ./build_sdk.py \
        --ndk_path ${ANDROID_NDK_HOME} \
        --sdk_path ${ANDROID_SDK_HOME} \
        --extra_modules_path ${OPENCV_CONTRIB_HOME}/modules \
        ${OPENCV_HOME}/build \
        ${OPENCV_HOME}

RUN zip -r opencv_sdk_with_contribs_${OPENCV_VERSION}.zip ${OPENCV_HOME}/build           
