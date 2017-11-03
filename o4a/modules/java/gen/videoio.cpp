
//
// This file is auto-generated, please don't edit!
//

#define LOG_TAG "org.opencv.videoio"

#include "common.h"

#include "opencv2/opencv_modules.hpp"
#ifdef HAVE_OPENCV_VIDEOIO

#include <string>

#include "opencv2/videoio.hpp"

#include "/Users/Chao/opencv/modules/videoio/include/opencv2/videoio/videoio_c.h"
#include "/Users/Chao/opencv/modules/videoio/include/opencv2/videoio.hpp"

using namespace cv;

/// throw java exception
static void throwJavaException(JNIEnv *env, const std::exception *e, const char *method) {
  std::string what = "unknown exception";
  jclass je = 0;

  if(e) {
    std::string exception_type = "std::exception";

    if(dynamic_cast<const cv::Exception*>(e)) {
      exception_type = "cv::Exception";
      je = env->FindClass("org/opencv/core/CvException");
    }

    what = exception_type + ": " + e->what();
  }

  if(!je) je = env->FindClass("java/lang/Exception");
  env->ThrowNew(je, what.c_str());

  LOGE("%s caught %s", method, what.c_str());
  (void)method;        // avoid "unused" warning
}


extern "C" {


//
//   VideoWriter(String filename, int apiPreference, int fourcc, double fps, Size frameSize, bool isColor = true)
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoWriter_VideoWriter_10 (JNIEnv*, jclass, jstring, jint, jint, jdouble, jdouble, jdouble, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoWriter_VideoWriter_10
  (JNIEnv* env, jclass , jstring filename, jint apiPreference, jint fourcc, jdouble fps, jdouble frameSize_width, jdouble frameSize_height, jboolean isColor)
{
    static const char method_name[] = "videoio::VideoWriter_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Size frameSize((int)frameSize_width, (int)frameSize_height);
        cv::VideoWriter* _retval_ = new cv::VideoWriter( n_filename, (int)apiPreference, (int)fourcc, (double)fps, frameSize, (bool)isColor );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoWriter_VideoWriter_11 (JNIEnv*, jclass, jstring, jint, jint, jdouble, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoWriter_VideoWriter_11
  (JNIEnv* env, jclass , jstring filename, jint apiPreference, jint fourcc, jdouble fps, jdouble frameSize_width, jdouble frameSize_height)
{
    static const char method_name[] = "videoio::VideoWriter_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Size frameSize((int)frameSize_width, (int)frameSize_height);
        cv::VideoWriter* _retval_ = new cv::VideoWriter( n_filename, (int)apiPreference, (int)fourcc, (double)fps, frameSize );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   VideoWriter(String filename, int fourcc, double fps, Size frameSize, bool isColor = true)
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoWriter_VideoWriter_12 (JNIEnv*, jclass, jstring, jint, jdouble, jdouble, jdouble, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoWriter_VideoWriter_12
  (JNIEnv* env, jclass , jstring filename, jint fourcc, jdouble fps, jdouble frameSize_width, jdouble frameSize_height, jboolean isColor)
{
    static const char method_name[] = "videoio::VideoWriter_12()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Size frameSize((int)frameSize_width, (int)frameSize_height);
        cv::VideoWriter* _retval_ = new cv::VideoWriter( n_filename, (int)fourcc, (double)fps, frameSize, (bool)isColor );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoWriter_VideoWriter_13 (JNIEnv*, jclass, jstring, jint, jdouble, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoWriter_VideoWriter_13
  (JNIEnv* env, jclass , jstring filename, jint fourcc, jdouble fps, jdouble frameSize_width, jdouble frameSize_height)
{
    static const char method_name[] = "videoio::VideoWriter_13()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Size frameSize((int)frameSize_width, (int)frameSize_height);
        cv::VideoWriter* _retval_ = new cv::VideoWriter( n_filename, (int)fourcc, (double)fps, frameSize );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   VideoWriter()
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoWriter_VideoWriter_14 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoWriter_VideoWriter_14
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "videoio::VideoWriter_14()";
    try {
        LOGD("%s", method_name);
        
        cv::VideoWriter* _retval_ = new cv::VideoWriter(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool isOpened()
//

using namespace cv;

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoWriter_isOpened_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoWriter_isOpened_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "videoio::isOpened_10()";
    try {
        LOGD("%s", method_name);
        cv::VideoWriter* me = (cv::VideoWriter*) self; //TODO: check for NULL
        bool _retval_ = me->isOpened(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool open(String filename, int apiPreference, int fourcc, double fps, Size frameSize, bool isColor = true)
//

using namespace cv;

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoWriter_open_10 (JNIEnv*, jclass, jlong, jstring, jint, jint, jdouble, jdouble, jdouble, jboolean);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoWriter_open_10
  (JNIEnv* env, jclass , jlong self, jstring filename, jint apiPreference, jint fourcc, jdouble fps, jdouble frameSize_width, jdouble frameSize_height, jboolean isColor)
{
    static const char method_name[] = "videoio::open_10()";
    try {
        LOGD("%s", method_name);
        cv::VideoWriter* me = (cv::VideoWriter*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Size frameSize((int)frameSize_width, (int)frameSize_height);
        bool _retval_ = me->open( n_filename, (int)apiPreference, (int)fourcc, (double)fps, frameSize, (bool)isColor );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv;

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoWriter_open_11 (JNIEnv*, jclass, jlong, jstring, jint, jint, jdouble, jdouble, jdouble);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoWriter_open_11
  (JNIEnv* env, jclass , jlong self, jstring filename, jint apiPreference, jint fourcc, jdouble fps, jdouble frameSize_width, jdouble frameSize_height)
{
    static const char method_name[] = "videoio::open_11()";
    try {
        LOGD("%s", method_name);
        cv::VideoWriter* me = (cv::VideoWriter*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Size frameSize((int)frameSize_width, (int)frameSize_height);
        bool _retval_ = me->open( n_filename, (int)apiPreference, (int)fourcc, (double)fps, frameSize );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool open(String filename, int fourcc, double fps, Size frameSize, bool isColor = true)
//

using namespace cv;

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoWriter_open_12 (JNIEnv*, jclass, jlong, jstring, jint, jdouble, jdouble, jdouble, jboolean);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoWriter_open_12
  (JNIEnv* env, jclass , jlong self, jstring filename, jint fourcc, jdouble fps, jdouble frameSize_width, jdouble frameSize_height, jboolean isColor)
{
    static const char method_name[] = "videoio::open_12()";
    try {
        LOGD("%s", method_name);
        cv::VideoWriter* me = (cv::VideoWriter*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Size frameSize((int)frameSize_width, (int)frameSize_height);
        bool _retval_ = me->open( n_filename, (int)fourcc, (double)fps, frameSize, (bool)isColor );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv;

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoWriter_open_13 (JNIEnv*, jclass, jlong, jstring, jint, jdouble, jdouble, jdouble);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoWriter_open_13
  (JNIEnv* env, jclass , jlong self, jstring filename, jint fourcc, jdouble fps, jdouble frameSize_width, jdouble frameSize_height)
{
    static const char method_name[] = "videoio::open_13()";
    try {
        LOGD("%s", method_name);
        cv::VideoWriter* me = (cv::VideoWriter*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Size frameSize((int)frameSize_width, (int)frameSize_height);
        bool _retval_ = me->open( n_filename, (int)fourcc, (double)fps, frameSize );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool set(int propId, double value)
//

using namespace cv;

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoWriter_set_10 (JNIEnv*, jclass, jlong, jint, jdouble);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoWriter_set_10
  (JNIEnv* env, jclass , jlong self, jint propId, jdouble value)
{
    static const char method_name[] = "videoio::set_10()";
    try {
        LOGD("%s", method_name);
        cv::VideoWriter* me = (cv::VideoWriter*) self; //TODO: check for NULL
        bool _retval_ = me->set( (int)propId, (double)value );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double get(int propId)
//

using namespace cv;

JNIEXPORT jdouble JNICALL Java_org_opencv_videoio_VideoWriter_get_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jdouble JNICALL Java_org_opencv_videoio_VideoWriter_get_10
  (JNIEnv* env, jclass , jlong self, jint propId)
{
    static const char method_name[] = "videoio::get_10()";
    try {
        LOGD("%s", method_name);
        cv::VideoWriter* me = (cv::VideoWriter*) self; //TODO: check for NULL
        double _retval_ = me->get( (int)propId );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static int fourcc(char c1, char c2, char c3, char c4)
//

using namespace cv;

JNIEXPORT jint JNICALL Java_org_opencv_videoio_VideoWriter_fourcc_10 (JNIEnv*, jclass, jchar, jchar, jchar, jchar);

JNIEXPORT jint JNICALL Java_org_opencv_videoio_VideoWriter_fourcc_10
  (JNIEnv* env, jclass , jchar c1, jchar c2, jchar c3, jchar c4)
{
    static const char method_name[] = "videoio::fourcc_10()";
    try {
        LOGD("%s", method_name);
        
        int _retval_ = cv::VideoWriter::fourcc( (char)c1, (char)c2, (char)c3, (char)c4 );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void release()
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_videoio_VideoWriter_release_10 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_videoio_VideoWriter_release_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "videoio::release_10()";
    try {
        LOGD("%s", method_name);
        cv::VideoWriter* me = (cv::VideoWriter*) self; //TODO: check for NULL
        me->release(  );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void write(Mat image)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_videoio_VideoWriter_write_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_videoio_VideoWriter_write_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj)
{
    static const char method_name[] = "videoio::write_10()";
    try {
        LOGD("%s", method_name);
        cv::VideoWriter* me = (cv::VideoWriter*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        me->write( image );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  native support for java finalize()
//  static void cv::VideoWriter::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_videoio_VideoWriter_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_videoio_VideoWriter_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::VideoWriter*) self;
}


//
//   VideoCapture(String filename, int apiPreference)
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoCapture_VideoCapture_10 (JNIEnv*, jclass, jstring, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoCapture_VideoCapture_10
  (JNIEnv* env, jclass , jstring filename, jint apiPreference)
{
    static const char method_name[] = "videoio::VideoCapture_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        cv::VideoCapture* _retval_ = new cv::VideoCapture( n_filename, (int)apiPreference );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   VideoCapture(String filename)
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoCapture_VideoCapture_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoCapture_VideoCapture_11
  (JNIEnv* env, jclass , jstring filename)
{
    static const char method_name[] = "videoio::VideoCapture_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        cv::VideoCapture* _retval_ = new cv::VideoCapture( n_filename );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   VideoCapture(int index)
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoCapture_VideoCapture_12 (JNIEnv*, jclass, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoCapture_VideoCapture_12
  (JNIEnv* env, jclass , jint index)
{
    static const char method_name[] = "videoio::VideoCapture_12()";
    try {
        LOGD("%s", method_name);
        
        cv::VideoCapture* _retval_ = new cv::VideoCapture( (int)index );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   VideoCapture()
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoCapture_VideoCapture_13 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoCapture_VideoCapture_13
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "videoio::VideoCapture_13()";
    try {
        LOGD("%s", method_name);
        
        cv::VideoCapture* _retval_ = new cv::VideoCapture(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool grab()
//

using namespace cv;

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_grab_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_grab_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "videoio::grab_10()";
    try {
        LOGD("%s", method_name);
        cv::VideoCapture* me = (cv::VideoCapture*) self; //TODO: check for NULL
        bool _retval_ = me->grab(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool isOpened()
//

using namespace cv;

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_isOpened_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_isOpened_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "videoio::isOpened_10()";
    try {
        LOGD("%s", method_name);
        cv::VideoCapture* me = (cv::VideoCapture*) self; //TODO: check for NULL
        bool _retval_ = me->isOpened(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool open(String filename, int apiPreference)
//

using namespace cv;

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_open_10 (JNIEnv*, jclass, jlong, jstring, jint);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_open_10
  (JNIEnv* env, jclass , jlong self, jstring filename, jint apiPreference)
{
    static const char method_name[] = "videoio::open_10()";
    try {
        LOGD("%s", method_name);
        cv::VideoCapture* me = (cv::VideoCapture*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        bool _retval_ = me->open( n_filename, (int)apiPreference );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool open(String filename)
//

using namespace cv;

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_open_11 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_open_11
  (JNIEnv* env, jclass , jlong self, jstring filename)
{
    static const char method_name[] = "videoio::open_11()";
    try {
        LOGD("%s", method_name);
        cv::VideoCapture* me = (cv::VideoCapture*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        bool _retval_ = me->open( n_filename );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool open(int cameraNum, int apiPreference)
//

using namespace cv;

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_open_12 (JNIEnv*, jclass, jlong, jint, jint);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_open_12
  (JNIEnv* env, jclass , jlong self, jint cameraNum, jint apiPreference)
{
    static const char method_name[] = "videoio::open_12()";
    try {
        LOGD("%s", method_name);
        cv::VideoCapture* me = (cv::VideoCapture*) self; //TODO: check for NULL
        bool _retval_ = me->open( (int)cameraNum, (int)apiPreference );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool open(int index)
//

using namespace cv;

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_open_13 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_open_13
  (JNIEnv* env, jclass , jlong self, jint index)
{
    static const char method_name[] = "videoio::open_13()";
    try {
        LOGD("%s", method_name);
        cv::VideoCapture* me = (cv::VideoCapture*) self; //TODO: check for NULL
        bool _retval_ = me->open( (int)index );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool read(Mat& image)
//

using namespace cv;

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_read_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_read_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj)
{
    static const char method_name[] = "videoio::read_10()";
    try {
        LOGD("%s", method_name);
        cv::VideoCapture* me = (cv::VideoCapture*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        bool _retval_ = me->read( image );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool retrieve(Mat& image, int flag = 0)
//

using namespace cv;

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_retrieve_10 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_retrieve_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jint flag)
{
    static const char method_name[] = "videoio::retrieve_10()";
    try {
        LOGD("%s", method_name);
        cv::VideoCapture* me = (cv::VideoCapture*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        bool _retval_ = me->retrieve( image, (int)flag );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv;

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_retrieve_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_retrieve_11
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj)
{
    static const char method_name[] = "videoio::retrieve_11()";
    try {
        LOGD("%s", method_name);
        cv::VideoCapture* me = (cv::VideoCapture*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        bool _retval_ = me->retrieve( image );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool set(int propId, double value)
//

using namespace cv;

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_set_10 (JNIEnv*, jclass, jlong, jint, jdouble);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_set_10
  (JNIEnv* env, jclass , jlong self, jint propId, jdouble value)
{
    static const char method_name[] = "videoio::set_10()";
    try {
        LOGD("%s", method_name);
        cv::VideoCapture* me = (cv::VideoCapture*) self; //TODO: check for NULL
        bool _retval_ = me->set( (int)propId, (double)value );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double get(int propId)
//

using namespace cv;

JNIEXPORT jdouble JNICALL Java_org_opencv_videoio_VideoCapture_get_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jdouble JNICALL Java_org_opencv_videoio_VideoCapture_get_10
  (JNIEnv* env, jclass , jlong self, jint propId)
{
    static const char method_name[] = "videoio::get_10()";
    try {
        LOGD("%s", method_name);
        cv::VideoCapture* me = (cv::VideoCapture*) self; //TODO: check for NULL
        double _retval_ = me->get( (int)propId );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void release()
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_videoio_VideoCapture_release_10 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_videoio_VideoCapture_release_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "videoio::release_10()";
    try {
        LOGD("%s", method_name);
        cv::VideoCapture* me = (cv::VideoCapture*) self; //TODO: check for NULL
        me->release(  );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  native support for java finalize()
//  static void cv::VideoCapture::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_videoio_VideoCapture_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_videoio_VideoCapture_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::VideoCapture*) self;
}



} // extern "C"

#endif // HAVE_OPENCV_VIDEOIO
