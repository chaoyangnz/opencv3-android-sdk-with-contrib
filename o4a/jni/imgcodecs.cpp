
//
// This file is auto-generated, please don't edit!
//

#define LOG_TAG "org.opencv.imgcodecs"

#include "common.h"

#include "opencv2/opencv_modules.hpp"
#ifdef HAVE_OPENCV_IMGCODECS

#include <string>

#include "opencv2/imgcodecs.hpp"

#include "/Users/Chao/opencv/modules/imgcodecs/include/opencv2/imgcodecs/imgcodecs_c.h"
#include "/Users/Chao/opencv/modules/imgcodecs/include/opencv2/imgcodecs.hpp"

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
//  Mat imdecode(Mat buf, int flags)
//



JNIEXPORT jlong JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imdecode_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imdecode_10
  (JNIEnv* env, jclass , jlong buf_nativeObj, jint flags)
{
    static const char method_name[] = "imgcodecs::imdecode_10()";
    try {
        LOGD("%s", method_name);
        Mat& buf = *((Mat*)buf_nativeObj);
        ::Mat _retval_ = cv::imdecode( buf, (int)flags );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat imread(String filename, int flags = IMREAD_COLOR)
//



JNIEXPORT jlong JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imread_10 (JNIEnv*, jclass, jstring, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imread_10
  (JNIEnv* env, jclass , jstring filename, jint flags)
{
    static const char method_name[] = "imgcodecs::imread_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        ::Mat _retval_ = cv::imread( n_filename, (int)flags );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imread_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imread_11
  (JNIEnv* env, jclass , jstring filename)
{
    static const char method_name[] = "imgcodecs::imread_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        ::Mat _retval_ = cv::imread( n_filename );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool imencode(String ext, Mat img, vector_uchar& buf, vector_int params = std::vector<int>())
//



JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imencode_10 (JNIEnv*, jclass, jstring, jlong, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imencode_10
  (JNIEnv* env, jclass , jstring ext, jlong img_nativeObj, jlong buf_mat_nativeObj, jlong params_mat_nativeObj)
{
    static const char method_name[] = "imgcodecs::imencode_10()";
    try {
        LOGD("%s", method_name);
        std::vector<uchar> buf;
        Mat& buf_mat = *((Mat*)buf_mat_nativeObj);
        std::vector<int> params;
        Mat& params_mat = *((Mat*)params_mat_nativeObj);
        Mat_to_vector_int( params_mat, params );
        const char* utf_ext = env->GetStringUTFChars(ext, 0); String n_ext( utf_ext ? utf_ext : "" ); env->ReleaseStringUTFChars(ext, utf_ext);
        Mat& img = *((Mat*)img_nativeObj);
        bool _retval_ = cv::imencode( n_ext, img, buf, params );
        vector_uchar_to_Mat( buf, buf_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imencode_11 (JNIEnv*, jclass, jstring, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imencode_11
  (JNIEnv* env, jclass , jstring ext, jlong img_nativeObj, jlong buf_mat_nativeObj)
{
    static const char method_name[] = "imgcodecs::imencode_11()";
    try {
        LOGD("%s", method_name);
        std::vector<uchar> buf;
        Mat& buf_mat = *((Mat*)buf_mat_nativeObj);
        const char* utf_ext = env->GetStringUTFChars(ext, 0); String n_ext( utf_ext ? utf_ext : "" ); env->ReleaseStringUTFChars(ext, utf_ext);
        Mat& img = *((Mat*)img_nativeObj);
        bool _retval_ = cv::imencode( n_ext, img, buf );
        vector_uchar_to_Mat( buf, buf_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool imreadmulti(String filename, vector_Mat& mats, int flags = IMREAD_ANYCOLOR)
//



JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imreadmulti_10 (JNIEnv*, jclass, jstring, jlong, jint);

JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imreadmulti_10
  (JNIEnv* env, jclass , jstring filename, jlong mats_mat_nativeObj, jint flags)
{
    static const char method_name[] = "imgcodecs::imreadmulti_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> mats;
        Mat& mats_mat = *((Mat*)mats_mat_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        bool _retval_ = cv::imreadmulti( n_filename, mats, (int)flags );
        vector_Mat_to_Mat( mats, mats_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imreadmulti_11 (JNIEnv*, jclass, jstring, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imreadmulti_11
  (JNIEnv* env, jclass , jstring filename, jlong mats_mat_nativeObj)
{
    static const char method_name[] = "imgcodecs::imreadmulti_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> mats;
        Mat& mats_mat = *((Mat*)mats_mat_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        bool _retval_ = cv::imreadmulti( n_filename, mats );
        vector_Mat_to_Mat( mats, mats_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool imwrite(String filename, Mat img, vector_int params = std::vector<int>())
//



JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imwrite_10 (JNIEnv*, jclass, jstring, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imwrite_10
  (JNIEnv* env, jclass , jstring filename, jlong img_nativeObj, jlong params_mat_nativeObj)
{
    static const char method_name[] = "imgcodecs::imwrite_10()";
    try {
        LOGD("%s", method_name);
        std::vector<int> params;
        Mat& params_mat = *((Mat*)params_mat_nativeObj);
        Mat_to_vector_int( params_mat, params );
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Mat& img = *((Mat*)img_nativeObj);
        bool _retval_ = cv::imwrite( n_filename, img, params );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imwrite_11 (JNIEnv*, jclass, jstring, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imwrite_11
  (JNIEnv* env, jclass , jstring filename, jlong img_nativeObj)
{
    static const char method_name[] = "imgcodecs::imwrite_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Mat& img = *((Mat*)img_nativeObj);
        bool _retval_ = cv::imwrite( n_filename, img );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}




} // extern "C"

#endif // HAVE_OPENCV_IMGCODECS
