
//
// This file is auto-generated, please don't edit!
//

#define LOG_TAG "org.opencv.img_hash"

#include "common.h"

#include "opencv2/opencv_modules.hpp"
#ifdef HAVE_OPENCV_IMG_HASH

#include <string>

#include "opencv2/img_hash.hpp"

#include "/Users/Chao/opencv_contrib/modules/img_hash/include/opencv2/img_hash/average_hash.hpp"
#include "/Users/Chao/opencv_contrib/modules/img_hash/include/opencv2/img_hash/block_mean_hash.hpp"
#include "/Users/Chao/opencv_contrib/modules/img_hash/include/opencv2/img_hash/color_moment_hash.hpp"
#include "/Users/Chao/opencv_contrib/modules/img_hash/include/opencv2/img_hash/img_hash_base.hpp"
#include "/Users/Chao/opencv_contrib/modules/img_hash/include/opencv2/img_hash/marr_hildreth_hash.hpp"
#include "/Users/Chao/opencv_contrib/modules/img_hash/include/opencv2/img_hash/phash.hpp"
#include "/Users/Chao/opencv_contrib/modules/img_hash/include/opencv2/img_hash/radial_variance_hash.hpp"

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
// static Ptr_ColorMomentHash create()
//

using namespace cv::img_hash;

JNIEXPORT jlong JNICALL Java_org_opencv_img_1hash_ColorMomentHash_create_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_img_1hash_ColorMomentHash_create_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "img_1hash::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::img_hash::ColorMomentHash> Ptr_ColorMomentHash;
        Ptr_ColorMomentHash _retval_ = cv::img_hash::ColorMomentHash::create(  );
        return (jlong)(new Ptr_ColorMomentHash(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::img_hash::ColorMomentHash>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_img_1hash_ColorMomentHash_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_img_1hash_ColorMomentHash_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::img_hash::ColorMomentHash>*) self;
}


//
// static Ptr_AverageHash create()
//

using namespace cv::img_hash;

JNIEXPORT jlong JNICALL Java_org_opencv_img_1hash_AverageHash_create_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_img_1hash_AverageHash_create_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "img_1hash::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::img_hash::AverageHash> Ptr_AverageHash;
        Ptr_AverageHash _retval_ = cv::img_hash::AverageHash::create(  );
        return (jlong)(new Ptr_AverageHash(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::img_hash::AverageHash>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_img_1hash_AverageHash_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_img_1hash_AverageHash_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::img_hash::AverageHash>*) self;
}


//
// static Ptr_MarrHildrethHash create(float alpha = 2.0f, float scale = 1.0f)
//

using namespace cv::img_hash;

JNIEXPORT jlong JNICALL Java_org_opencv_img_1hash_MarrHildrethHash_create_10 (JNIEnv*, jclass, jfloat, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_img_1hash_MarrHildrethHash_create_10
  (JNIEnv* env, jclass , jfloat alpha, jfloat scale)
{
    static const char method_name[] = "img_1hash::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::img_hash::MarrHildrethHash> Ptr_MarrHildrethHash;
        Ptr_MarrHildrethHash _retval_ = cv::img_hash::MarrHildrethHash::create( (float)alpha, (float)scale );
        return (jlong)(new Ptr_MarrHildrethHash(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::img_hash;

JNIEXPORT jlong JNICALL Java_org_opencv_img_1hash_MarrHildrethHash_create_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_img_1hash_MarrHildrethHash_create_11
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "img_1hash::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::img_hash::MarrHildrethHash> Ptr_MarrHildrethHash;
        Ptr_MarrHildrethHash _retval_ = cv::img_hash::MarrHildrethHash::create(  );
        return (jlong)(new Ptr_MarrHildrethHash(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float getAlpha()
//

using namespace cv::img_hash;

JNIEXPORT jfloat JNICALL Java_org_opencv_img_1hash_MarrHildrethHash_getAlpha_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_img_1hash_MarrHildrethHash_getAlpha_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "img_1hash::getAlpha_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::img_hash::MarrHildrethHash>* me = (Ptr<cv::img_hash::MarrHildrethHash>*) self; //TODO: check for NULL
        float _retval_ = (*me)->getAlpha(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float getScale()
//

using namespace cv::img_hash;

JNIEXPORT jfloat JNICALL Java_org_opencv_img_1hash_MarrHildrethHash_getScale_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_img_1hash_MarrHildrethHash_getScale_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "img_1hash::getScale_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::img_hash::MarrHildrethHash>* me = (Ptr<cv::img_hash::MarrHildrethHash>*) self; //TODO: check for NULL
        float _retval_ = (*me)->getScale(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void setKernelParam(float alpha, float scale)
//

using namespace cv::img_hash;

JNIEXPORT void JNICALL Java_org_opencv_img_1hash_MarrHildrethHash_setKernelParam_10 (JNIEnv*, jclass, jlong, jfloat, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_img_1hash_MarrHildrethHash_setKernelParam_10
  (JNIEnv* env, jclass , jlong self, jfloat alpha, jfloat scale)
{
    static const char method_name[] = "img_1hash::setKernelParam_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::img_hash::MarrHildrethHash>* me = (Ptr<cv::img_hash::MarrHildrethHash>*) self; //TODO: check for NULL
        (*me)->setKernelParam( (float)alpha, (float)scale );
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
//  static void Ptr<cv::img_hash::MarrHildrethHash>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_img_1hash_MarrHildrethHash_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_img_1hash_MarrHildrethHash_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::img_hash::MarrHildrethHash>*) self;
}


//
//  double compare(Mat hashOne, Mat hashTwo)
//

using namespace cv::img_hash;

JNIEXPORT jdouble JNICALL Java_org_opencv_img_1hash_ImgHashBase_compare_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_img_1hash_ImgHashBase_compare_10
  (JNIEnv* env, jclass , jlong self, jlong hashOne_nativeObj, jlong hashTwo_nativeObj)
{
    static const char method_name[] = "img_1hash::compare_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::img_hash::ImgHashBase>* me = (Ptr<cv::img_hash::ImgHashBase>*) self; //TODO: check for NULL
        Mat& hashOne = *((Mat*)hashOne_nativeObj);
        Mat& hashTwo = *((Mat*)hashTwo_nativeObj);
        double _retval_ = (*me)->compare( hashOne, hashTwo );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void compute(Mat inputArr, Mat& outputArr)
//

using namespace cv::img_hash;

JNIEXPORT void JNICALL Java_org_opencv_img_1hash_ImgHashBase_compute_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_img_1hash_ImgHashBase_compute_10
  (JNIEnv* env, jclass , jlong self, jlong inputArr_nativeObj, jlong outputArr_nativeObj)
{
    static const char method_name[] = "img_1hash::compute_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::img_hash::ImgHashBase>* me = (Ptr<cv::img_hash::ImgHashBase>*) self; //TODO: check for NULL
        Mat& inputArr = *((Mat*)inputArr_nativeObj);
        Mat& outputArr = *((Mat*)outputArr_nativeObj);
        (*me)->compute( inputArr, outputArr );
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
//  static void Ptr<cv::img_hash::ImgHashBase>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_img_1hash_ImgHashBase_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_img_1hash_ImgHashBase_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::img_hash::ImgHashBase>*) self;
}


//
// static Ptr_BlockMeanHash create(int mode = BLOCK_MEAN_HASH_MODE_0)
//

using namespace cv::img_hash;

JNIEXPORT jlong JNICALL Java_org_opencv_img_1hash_BlockMeanHash_create_10 (JNIEnv*, jclass, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_img_1hash_BlockMeanHash_create_10
  (JNIEnv* env, jclass , jint mode)
{
    static const char method_name[] = "img_1hash::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::img_hash::BlockMeanHash> Ptr_BlockMeanHash;
        Ptr_BlockMeanHash _retval_ = cv::img_hash::BlockMeanHash::create( (int)mode );
        return (jlong)(new Ptr_BlockMeanHash(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::img_hash;

JNIEXPORT jlong JNICALL Java_org_opencv_img_1hash_BlockMeanHash_create_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_img_1hash_BlockMeanHash_create_11
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "img_1hash::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::img_hash::BlockMeanHash> Ptr_BlockMeanHash;
        Ptr_BlockMeanHash _retval_ = cv::img_hash::BlockMeanHash::create(  );
        return (jlong)(new Ptr_BlockMeanHash(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  vector_double getMean()
//

using namespace cv::img_hash;

JNIEXPORT jlong JNICALL Java_org_opencv_img_1hash_BlockMeanHash_getMean_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_img_1hash_BlockMeanHash_getMean_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "img_1hash::getMean_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::img_hash::BlockMeanHash>* me = (Ptr<cv::img_hash::BlockMeanHash>*) self; //TODO: check for NULL
        std::vector<double> _ret_val_vector_ = (*me)->getMean(  );
        Mat* _retval_ = new Mat();  vector_double_to_Mat(_ret_val_vector_, *_retval_);
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void setMode(int mode)
//

using namespace cv::img_hash;

JNIEXPORT void JNICALL Java_org_opencv_img_1hash_BlockMeanHash_setMode_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_img_1hash_BlockMeanHash_setMode_10
  (JNIEnv* env, jclass , jlong self, jint mode)
{
    static const char method_name[] = "img_1hash::setMode_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::img_hash::BlockMeanHash>* me = (Ptr<cv::img_hash::BlockMeanHash>*) self; //TODO: check for NULL
        (*me)->setMode( (int)mode );
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
//  static void Ptr<cv::img_hash::BlockMeanHash>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_img_1hash_BlockMeanHash_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_img_1hash_BlockMeanHash_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::img_hash::BlockMeanHash>*) self;
}


//
// static Ptr_RadialVarianceHash create(double sigma = 1, int numOfAngleLine = 180)
//

using namespace cv::img_hash;

JNIEXPORT jlong JNICALL Java_org_opencv_img_1hash_RadialVarianceHash_create_10 (JNIEnv*, jclass, jdouble, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_img_1hash_RadialVarianceHash_create_10
  (JNIEnv* env, jclass , jdouble sigma, jint numOfAngleLine)
{
    static const char method_name[] = "img_1hash::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::img_hash::RadialVarianceHash> Ptr_RadialVarianceHash;
        Ptr_RadialVarianceHash _retval_ = cv::img_hash::RadialVarianceHash::create( (double)sigma, (int)numOfAngleLine );
        return (jlong)(new Ptr_RadialVarianceHash(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::img_hash;

JNIEXPORT jlong JNICALL Java_org_opencv_img_1hash_RadialVarianceHash_create_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_img_1hash_RadialVarianceHash_create_11
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "img_1hash::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::img_hash::RadialVarianceHash> Ptr_RadialVarianceHash;
        Ptr_RadialVarianceHash _retval_ = cv::img_hash::RadialVarianceHash::create(  );
        return (jlong)(new Ptr_RadialVarianceHash(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getSigma()
//

using namespace cv::img_hash;

JNIEXPORT jdouble JNICALL Java_org_opencv_img_1hash_RadialVarianceHash_getSigma_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_img_1hash_RadialVarianceHash_getSigma_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "img_1hash::getSigma_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::img_hash::RadialVarianceHash>* me = (Ptr<cv::img_hash::RadialVarianceHash>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getSigma(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getNumOfAngleLine()
//

using namespace cv::img_hash;

JNIEXPORT jint JNICALL Java_org_opencv_img_1hash_RadialVarianceHash_getNumOfAngleLine_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_img_1hash_RadialVarianceHash_getNumOfAngleLine_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "img_1hash::getNumOfAngleLine_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::img_hash::RadialVarianceHash>* me = (Ptr<cv::img_hash::RadialVarianceHash>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getNumOfAngleLine(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void setNumOfAngleLine(int value)
//

using namespace cv::img_hash;

JNIEXPORT void JNICALL Java_org_opencv_img_1hash_RadialVarianceHash_setNumOfAngleLine_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_img_1hash_RadialVarianceHash_setNumOfAngleLine_10
  (JNIEnv* env, jclass , jlong self, jint value)
{
    static const char method_name[] = "img_1hash::setNumOfAngleLine_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::img_hash::RadialVarianceHash>* me = (Ptr<cv::img_hash::RadialVarianceHash>*) self; //TODO: check for NULL
        (*me)->setNumOfAngleLine( (int)value );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setSigma(double value)
//

using namespace cv::img_hash;

JNIEXPORT void JNICALL Java_org_opencv_img_1hash_RadialVarianceHash_setSigma_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_img_1hash_RadialVarianceHash_setSigma_10
  (JNIEnv* env, jclass , jlong self, jdouble value)
{
    static const char method_name[] = "img_1hash::setSigma_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::img_hash::RadialVarianceHash>* me = (Ptr<cv::img_hash::RadialVarianceHash>*) self; //TODO: check for NULL
        (*me)->setSigma( (double)value );
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
//  static void Ptr<cv::img_hash::RadialVarianceHash>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_img_1hash_RadialVarianceHash_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_img_1hash_RadialVarianceHash_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::img_hash::RadialVarianceHash>*) self;
}


//
//  void averageHash(Mat inputArr, Mat& outputArr)
//



JNIEXPORT void JNICALL Java_org_opencv_img_1hash_Img_1hash_averageHash_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_img_1hash_Img_1hash_averageHash_10
  (JNIEnv* env, jclass , jlong inputArr_nativeObj, jlong outputArr_nativeObj)
{
    static const char method_name[] = "img_1hash::averageHash_10()";
    try {
        LOGD("%s", method_name);
        Mat& inputArr = *((Mat*)inputArr_nativeObj);
        Mat& outputArr = *((Mat*)outputArr_nativeObj);
        cv::img_hash::averageHash( inputArr, outputArr );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void blockMeanHash(Mat inputArr, Mat& outputArr, int mode = BLOCK_MEAN_HASH_MODE_0)
//



JNIEXPORT void JNICALL Java_org_opencv_img_1hash_Img_1hash_blockMeanHash_10 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_img_1hash_Img_1hash_blockMeanHash_10
  (JNIEnv* env, jclass , jlong inputArr_nativeObj, jlong outputArr_nativeObj, jint mode)
{
    static const char method_name[] = "img_1hash::blockMeanHash_10()";
    try {
        LOGD("%s", method_name);
        Mat& inputArr = *((Mat*)inputArr_nativeObj);
        Mat& outputArr = *((Mat*)outputArr_nativeObj);
        cv::img_hash::blockMeanHash( inputArr, outputArr, (int)mode );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_opencv_img_1hash_Img_1hash_blockMeanHash_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_img_1hash_Img_1hash_blockMeanHash_11
  (JNIEnv* env, jclass , jlong inputArr_nativeObj, jlong outputArr_nativeObj)
{
    static const char method_name[] = "img_1hash::blockMeanHash_11()";
    try {
        LOGD("%s", method_name);
        Mat& inputArr = *((Mat*)inputArr_nativeObj);
        Mat& outputArr = *((Mat*)outputArr_nativeObj);
        cv::img_hash::blockMeanHash( inputArr, outputArr );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void colorMomentHash(Mat inputArr, Mat& outputArr)
//



JNIEXPORT void JNICALL Java_org_opencv_img_1hash_Img_1hash_colorMomentHash_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_img_1hash_Img_1hash_colorMomentHash_10
  (JNIEnv* env, jclass , jlong inputArr_nativeObj, jlong outputArr_nativeObj)
{
    static const char method_name[] = "img_1hash::colorMomentHash_10()";
    try {
        LOGD("%s", method_name);
        Mat& inputArr = *((Mat*)inputArr_nativeObj);
        Mat& outputArr = *((Mat*)outputArr_nativeObj);
        cv::img_hash::colorMomentHash( inputArr, outputArr );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void marrHildrethHash(Mat inputArr, Mat& outputArr, float alpha = 2.0f, float scale = 1.0f)
//



JNIEXPORT void JNICALL Java_org_opencv_img_1hash_Img_1hash_marrHildrethHash_10 (JNIEnv*, jclass, jlong, jlong, jfloat, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_img_1hash_Img_1hash_marrHildrethHash_10
  (JNIEnv* env, jclass , jlong inputArr_nativeObj, jlong outputArr_nativeObj, jfloat alpha, jfloat scale)
{
    static const char method_name[] = "img_1hash::marrHildrethHash_10()";
    try {
        LOGD("%s", method_name);
        Mat& inputArr = *((Mat*)inputArr_nativeObj);
        Mat& outputArr = *((Mat*)outputArr_nativeObj);
        cv::img_hash::marrHildrethHash( inputArr, outputArr, (float)alpha, (float)scale );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_opencv_img_1hash_Img_1hash_marrHildrethHash_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_img_1hash_Img_1hash_marrHildrethHash_11
  (JNIEnv* env, jclass , jlong inputArr_nativeObj, jlong outputArr_nativeObj)
{
    static const char method_name[] = "img_1hash::marrHildrethHash_11()";
    try {
        LOGD("%s", method_name);
        Mat& inputArr = *((Mat*)inputArr_nativeObj);
        Mat& outputArr = *((Mat*)outputArr_nativeObj);
        cv::img_hash::marrHildrethHash( inputArr, outputArr );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void pHash(Mat inputArr, Mat& outputArr)
//



JNIEXPORT void JNICALL Java_org_opencv_img_1hash_Img_1hash_pHash_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_img_1hash_Img_1hash_pHash_10
  (JNIEnv* env, jclass , jlong inputArr_nativeObj, jlong outputArr_nativeObj)
{
    static const char method_name[] = "img_1hash::pHash_10()";
    try {
        LOGD("%s", method_name);
        Mat& inputArr = *((Mat*)inputArr_nativeObj);
        Mat& outputArr = *((Mat*)outputArr_nativeObj);
        cv::img_hash::pHash( inputArr, outputArr );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void radialVarianceHash(Mat inputArr, Mat& outputArr, double sigma = 1, int numOfAngleLine = 180)
//



JNIEXPORT void JNICALL Java_org_opencv_img_1hash_Img_1hash_radialVarianceHash_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_img_1hash_Img_1hash_radialVarianceHash_10
  (JNIEnv* env, jclass , jlong inputArr_nativeObj, jlong outputArr_nativeObj, jdouble sigma, jint numOfAngleLine)
{
    static const char method_name[] = "img_1hash::radialVarianceHash_10()";
    try {
        LOGD("%s", method_name);
        Mat& inputArr = *((Mat*)inputArr_nativeObj);
        Mat& outputArr = *((Mat*)outputArr_nativeObj);
        cv::img_hash::radialVarianceHash( inputArr, outputArr, (double)sigma, (int)numOfAngleLine );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_opencv_img_1hash_Img_1hash_radialVarianceHash_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_img_1hash_Img_1hash_radialVarianceHash_11
  (JNIEnv* env, jclass , jlong inputArr_nativeObj, jlong outputArr_nativeObj)
{
    static const char method_name[] = "img_1hash::radialVarianceHash_11()";
    try {
        LOGD("%s", method_name);
        Mat& inputArr = *((Mat*)inputArr_nativeObj);
        Mat& outputArr = *((Mat*)outputArr_nativeObj);
        cv::img_hash::radialVarianceHash( inputArr, outputArr );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// static Ptr_PHash create()
//

using namespace cv::img_hash;

JNIEXPORT jlong JNICALL Java_org_opencv_img_1hash_PHash_create_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_img_1hash_PHash_create_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "img_1hash::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::img_hash::PHash> Ptr_PHash;
        Ptr_PHash _retval_ = cv::img_hash::PHash::create(  );
        return (jlong)(new Ptr_PHash(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::img_hash::PHash>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_img_1hash_PHash_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_img_1hash_PHash_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::img_hash::PHash>*) self;
}



} // extern "C"

#endif // HAVE_OPENCV_IMG_HASH
