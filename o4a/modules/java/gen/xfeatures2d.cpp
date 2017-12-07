
//
// This file is auto-generated, please don't edit!
//

#define LOG_TAG "org.opencv.xfeatures2d"

#include "common.h"

#include "opencv2/opencv_modules.hpp"
#ifdef HAVE_OPENCV_XFEATURES2D

#include <string>

#include "opencv2/xfeatures2d.hpp"

#include "/Users/Chao/opencv/modules/features2d/misc/java/src/cpp/features2d_converters.hpp"
#include "/Users/Chao/opencv_contrib/modules/xfeatures2d/include/opencv2/xfeatures2d.hpp"
#include "/Users/Chao/opencv_contrib/modules/xfeatures2d/include/opencv2/xfeatures2d/cuda.hpp"
#include "/Users/Chao/opencv_contrib/modules/xfeatures2d/include/opencv2/xfeatures2d/nonfree.hpp"

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
// static Ptr_SURF create(double hessianThreshold = 100, int nOctaves = 4, int nOctaveLayers = 3, bool extended = false, bool upright = false)
//

using namespace cv::xfeatures2d;

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_SURF_create_10 (JNIEnv*, jclass, jdouble, jint, jint, jboolean, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_SURF_create_10
  (JNIEnv* env, jclass , jdouble hessianThreshold, jint nOctaves, jint nOctaveLayers, jboolean extended, jboolean upright)
{
    static const char method_name[] = "xfeatures2d::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xfeatures2d::SURF> Ptr_SURF;
        Ptr_SURF _retval_ = cv::xfeatures2d::SURF::create( (double)hessianThreshold, (int)nOctaves, (int)nOctaveLayers, (bool)extended, (bool)upright );
        return (jlong)(new Ptr_SURF(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::xfeatures2d;

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_SURF_create_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_SURF_create_11
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "xfeatures2d::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xfeatures2d::SURF> Ptr_SURF;
        Ptr_SURF _retval_ = cv::xfeatures2d::SURF::create(  );
        return (jlong)(new Ptr_SURF(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool getExtended()
//

using namespace cv::xfeatures2d;

JNIEXPORT jboolean JNICALL Java_org_opencv_xfeatures2d_SURF_getExtended_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_xfeatures2d_SURF_getExtended_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xfeatures2d::getExtended_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::SURF>* me = (Ptr<cv::xfeatures2d::SURF>*) self; //TODO: check for NULL
        bool _retval_ = (*me)->getExtended(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool getUpright()
//

using namespace cv::xfeatures2d;

JNIEXPORT jboolean JNICALL Java_org_opencv_xfeatures2d_SURF_getUpright_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_xfeatures2d_SURF_getUpright_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xfeatures2d::getUpright_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::SURF>* me = (Ptr<cv::xfeatures2d::SURF>*) self; //TODO: check for NULL
        bool _retval_ = (*me)->getUpright(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getHessianThreshold()
//

using namespace cv::xfeatures2d;

JNIEXPORT jdouble JNICALL Java_org_opencv_xfeatures2d_SURF_getHessianThreshold_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_xfeatures2d_SURF_getHessianThreshold_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xfeatures2d::getHessianThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::SURF>* me = (Ptr<cv::xfeatures2d::SURF>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getHessianThreshold(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getNOctaveLayers()
//

using namespace cv::xfeatures2d;

JNIEXPORT jint JNICALL Java_org_opencv_xfeatures2d_SURF_getNOctaveLayers_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_xfeatures2d_SURF_getNOctaveLayers_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xfeatures2d::getNOctaveLayers_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::SURF>* me = (Ptr<cv::xfeatures2d::SURF>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getNOctaveLayers(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getNOctaves()
//

using namespace cv::xfeatures2d;

JNIEXPORT jint JNICALL Java_org_opencv_xfeatures2d_SURF_getNOctaves_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_xfeatures2d_SURF_getNOctaves_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xfeatures2d::getNOctaves_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::SURF>* me = (Ptr<cv::xfeatures2d::SURF>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getNOctaves(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void setExtended(bool extended)
//

using namespace cv::xfeatures2d;

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_SURF_setExtended_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_SURF_setExtended_10
  (JNIEnv* env, jclass , jlong self, jboolean extended)
{
    static const char method_name[] = "xfeatures2d::setExtended_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::SURF>* me = (Ptr<cv::xfeatures2d::SURF>*) self; //TODO: check for NULL
        (*me)->setExtended( (bool)extended );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setHessianThreshold(double hessianThreshold)
//

using namespace cv::xfeatures2d;

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_SURF_setHessianThreshold_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_SURF_setHessianThreshold_10
  (JNIEnv* env, jclass , jlong self, jdouble hessianThreshold)
{
    static const char method_name[] = "xfeatures2d::setHessianThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::SURF>* me = (Ptr<cv::xfeatures2d::SURF>*) self; //TODO: check for NULL
        (*me)->setHessianThreshold( (double)hessianThreshold );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setNOctaveLayers(int nOctaveLayers)
//

using namespace cv::xfeatures2d;

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_SURF_setNOctaveLayers_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_SURF_setNOctaveLayers_10
  (JNIEnv* env, jclass , jlong self, jint nOctaveLayers)
{
    static const char method_name[] = "xfeatures2d::setNOctaveLayers_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::SURF>* me = (Ptr<cv::xfeatures2d::SURF>*) self; //TODO: check for NULL
        (*me)->setNOctaveLayers( (int)nOctaveLayers );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setNOctaves(int nOctaves)
//

using namespace cv::xfeatures2d;

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_SURF_setNOctaves_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_SURF_setNOctaves_10
  (JNIEnv* env, jclass , jlong self, jint nOctaves)
{
    static const char method_name[] = "xfeatures2d::setNOctaves_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::SURF>* me = (Ptr<cv::xfeatures2d::SURF>*) self; //TODO: check for NULL
        (*me)->setNOctaves( (int)nOctaves );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setUpright(bool upright)
//

using namespace cv::xfeatures2d;

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_SURF_setUpright_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_SURF_setUpright_10
  (JNIEnv* env, jclass , jlong self, jboolean upright)
{
    static const char method_name[] = "xfeatures2d::setUpright_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::SURF>* me = (Ptr<cv::xfeatures2d::SURF>*) self; //TODO: check for NULL
        (*me)->setUpright( (bool)upright );
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
//  static void Ptr<cv::xfeatures2d::SURF>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_SURF_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_SURF_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::xfeatures2d::SURF>*) self;
}


//
// static Ptr_BoostDesc create(int desc = BoostDesc::BINBOOST_256, bool use_scale_orientation = true, float scale_factor = 6.25f)
//

using namespace cv::xfeatures2d;

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_BoostDesc_create_10 (JNIEnv*, jclass, jint, jboolean, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_BoostDesc_create_10
  (JNIEnv* env, jclass , jint desc, jboolean use_scale_orientation, jfloat scale_factor)
{
    static const char method_name[] = "xfeatures2d::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xfeatures2d::BoostDesc> Ptr_BoostDesc;
        Ptr_BoostDesc _retval_ = cv::xfeatures2d::BoostDesc::create( (int)desc, (bool)use_scale_orientation, (float)scale_factor );
        return (jlong)(new Ptr_BoostDesc(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::xfeatures2d;

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_BoostDesc_create_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_BoostDesc_create_11
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "xfeatures2d::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xfeatures2d::BoostDesc> Ptr_BoostDesc;
        Ptr_BoostDesc _retval_ = cv::xfeatures2d::BoostDesc::create(  );
        return (jlong)(new Ptr_BoostDesc(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::xfeatures2d::BoostDesc>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_BoostDesc_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_BoostDesc_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::xfeatures2d::BoostDesc>*) self;
}


//
// static Ptr_FREAK create(bool orientationNormalized = true, bool scaleNormalized = true, float patternScale = 22.0f, int nOctaves = 4, vector_int selectedPairs = std::vector<int>())
//

using namespace cv::xfeatures2d;

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_FREAK_create_10 (JNIEnv*, jclass, jboolean, jboolean, jfloat, jint, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_FREAK_create_10
  (JNIEnv* env, jclass , jboolean orientationNormalized, jboolean scaleNormalized, jfloat patternScale, jint nOctaves, jlong selectedPairs_mat_nativeObj)
{
    static const char method_name[] = "xfeatures2d::create_10()";
    try {
        LOGD("%s", method_name);
        std::vector<int> selectedPairs;
        Mat& selectedPairs_mat = *((Mat*)selectedPairs_mat_nativeObj);
        Mat_to_vector_int( selectedPairs_mat, selectedPairs );
        typedef Ptr<cv::xfeatures2d::FREAK> Ptr_FREAK;
        Ptr_FREAK _retval_ = cv::xfeatures2d::FREAK::create( (bool)orientationNormalized, (bool)scaleNormalized, (float)patternScale, (int)nOctaves, selectedPairs );
        return (jlong)(new Ptr_FREAK(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::xfeatures2d;

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_FREAK_create_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_FREAK_create_11
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "xfeatures2d::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xfeatures2d::FREAK> Ptr_FREAK;
        Ptr_FREAK _retval_ = cv::xfeatures2d::FREAK::create(  );
        return (jlong)(new Ptr_FREAK(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::xfeatures2d::FREAK>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_FREAK_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_FREAK_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::xfeatures2d::FREAK>*) self;
}


//
// static Ptr_HarrisLaplaceFeatureDetector create(int numOctaves = 6, float corn_thresh = 0.01f, float DOG_thresh = 0.01f, int maxCorners = 5000, int num_layers = 4)
//

using namespace cv::xfeatures2d;

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_HarrisLaplaceFeatureDetector_create_10 (JNIEnv*, jclass, jint, jfloat, jfloat, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_HarrisLaplaceFeatureDetector_create_10
  (JNIEnv* env, jclass , jint numOctaves, jfloat corn_thresh, jfloat DOG_thresh, jint maxCorners, jint num_layers)
{
    static const char method_name[] = "xfeatures2d::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xfeatures2d::HarrisLaplaceFeatureDetector> Ptr_HarrisLaplaceFeatureDetector;
        Ptr_HarrisLaplaceFeatureDetector _retval_ = cv::xfeatures2d::HarrisLaplaceFeatureDetector::create( (int)numOctaves, (float)corn_thresh, (float)DOG_thresh, (int)maxCorners, (int)num_layers );
        return (jlong)(new Ptr_HarrisLaplaceFeatureDetector(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::xfeatures2d;

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_HarrisLaplaceFeatureDetector_create_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_HarrisLaplaceFeatureDetector_create_11
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "xfeatures2d::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xfeatures2d::HarrisLaplaceFeatureDetector> Ptr_HarrisLaplaceFeatureDetector;
        Ptr_HarrisLaplaceFeatureDetector _retval_ = cv::xfeatures2d::HarrisLaplaceFeatureDetector::create(  );
        return (jlong)(new Ptr_HarrisLaplaceFeatureDetector(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::xfeatures2d::HarrisLaplaceFeatureDetector>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_HarrisLaplaceFeatureDetector_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_HarrisLaplaceFeatureDetector_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::xfeatures2d::HarrisLaplaceFeatureDetector>*) self;
}


//
// static Ptr_LUCID create(int lucid_kernel = 1, int blur_kernel = 2)
//

using namespace cv::xfeatures2d;

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_LUCID_create_10 (JNIEnv*, jclass, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_LUCID_create_10
  (JNIEnv* env, jclass , jint lucid_kernel, jint blur_kernel)
{
    static const char method_name[] = "xfeatures2d::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xfeatures2d::LUCID> Ptr_LUCID;
        Ptr_LUCID _retval_ = cv::xfeatures2d::LUCID::create( (int)lucid_kernel, (int)blur_kernel );
        return (jlong)(new Ptr_LUCID(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::xfeatures2d;

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_LUCID_create_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_LUCID_create_11
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "xfeatures2d::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xfeatures2d::LUCID> Ptr_LUCID;
        Ptr_LUCID _retval_ = cv::xfeatures2d::LUCID::create(  );
        return (jlong)(new Ptr_LUCID(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::xfeatures2d::LUCID>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_LUCID_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_LUCID_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::xfeatures2d::LUCID>*) self;
}


//
// static Ptr_VGG create(int desc = VGG::VGG_120, float isigma = 1.4f, bool img_normalize = true, bool use_scale_orientation = true, float scale_factor = 6.25f, bool dsc_normalize = false)
//

using namespace cv::xfeatures2d;

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_VGG_create_10 (JNIEnv*, jclass, jint, jfloat, jboolean, jboolean, jfloat, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_VGG_create_10
  (JNIEnv* env, jclass , jint desc, jfloat isigma, jboolean img_normalize, jboolean use_scale_orientation, jfloat scale_factor, jboolean dsc_normalize)
{
    static const char method_name[] = "xfeatures2d::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xfeatures2d::VGG> Ptr_VGG;
        Ptr_VGG _retval_ = cv::xfeatures2d::VGG::create( (int)desc, (float)isigma, (bool)img_normalize, (bool)use_scale_orientation, (float)scale_factor, (bool)dsc_normalize );
        return (jlong)(new Ptr_VGG(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::xfeatures2d;

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_VGG_create_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_VGG_create_11
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "xfeatures2d::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xfeatures2d::VGG> Ptr_VGG;
        Ptr_VGG _retval_ = cv::xfeatures2d::VGG::create(  );
        return (jlong)(new Ptr_VGG(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void compute(Mat image, vector_KeyPoint keypoints, Mat& descriptors)
//

using namespace cv::xfeatures2d;

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_VGG_compute_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_VGG_compute_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong keypoints_mat_nativeObj, jlong descriptors_nativeObj)
{
    static const char method_name[] = "xfeatures2d::compute_10()";
    try {
        LOGD("%s", method_name);
        std::vector<KeyPoint> keypoints;
        Mat& keypoints_mat = *((Mat*)keypoints_mat_nativeObj);
        Mat_to_vector_KeyPoint( keypoints_mat, keypoints );
        Ptr<cv::xfeatures2d::VGG>* me = (Ptr<cv::xfeatures2d::VGG>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& descriptors = *((Mat*)descriptors_nativeObj);
        (*me)->compute( image, keypoints, descriptors );
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
//  static void Ptr<cv::xfeatures2d::VGG>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_VGG_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_VGG_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::xfeatures2d::VGG>*) self;
}


//
//  native support for java finalize()
//  static void Ptr<cv::xfeatures2d::MSDDetector>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_MSDDetector_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_MSDDetector_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::xfeatures2d::MSDDetector>*) self;
}


//
// static Ptr_SIFT create(int nfeatures = 0, int nOctaveLayers = 3, double contrastThreshold = 0.04, double edgeThreshold = 10, double sigma = 1.6)
//

using namespace cv::xfeatures2d;

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_SIFT_create_10 (JNIEnv*, jclass, jint, jint, jdouble, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_SIFT_create_10
  (JNIEnv* env, jclass , jint nfeatures, jint nOctaveLayers, jdouble contrastThreshold, jdouble edgeThreshold, jdouble sigma)
{
    static const char method_name[] = "xfeatures2d::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xfeatures2d::SIFT> Ptr_SIFT;
        Ptr_SIFT _retval_ = cv::xfeatures2d::SIFT::create( (int)nfeatures, (int)nOctaveLayers, (double)contrastThreshold, (double)edgeThreshold, (double)sigma );
        return (jlong)(new Ptr_SIFT(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::xfeatures2d;

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_SIFT_create_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_SIFT_create_11
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "xfeatures2d::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xfeatures2d::SIFT> Ptr_SIFT;
        Ptr_SIFT _retval_ = cv::xfeatures2d::SIFT::create(  );
        return (jlong)(new Ptr_SIFT(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::xfeatures2d::SIFT>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_SIFT_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_SIFT_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::xfeatures2d::SIFT>*) self;
}


//
// static Ptr_PCTSignaturesSQFD create(int distanceFunction = 3, int similarityFunction = 2, float similarityParameter = 1.0f)
//

using namespace cv::xfeatures2d;

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_PCTSignaturesSQFD_create_10 (JNIEnv*, jclass, jint, jint, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_PCTSignaturesSQFD_create_10
  (JNIEnv* env, jclass , jint distanceFunction, jint similarityFunction, jfloat similarityParameter)
{
    static const char method_name[] = "xfeatures2d::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xfeatures2d::PCTSignaturesSQFD> Ptr_PCTSignaturesSQFD;
        Ptr_PCTSignaturesSQFD _retval_ = cv::xfeatures2d::PCTSignaturesSQFD::create( (int)distanceFunction, (int)similarityFunction, (float)similarityParameter );
        return (jlong)(new Ptr_PCTSignaturesSQFD(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::xfeatures2d;

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_PCTSignaturesSQFD_create_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_PCTSignaturesSQFD_create_11
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "xfeatures2d::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xfeatures2d::PCTSignaturesSQFD> Ptr_PCTSignaturesSQFD;
        Ptr_PCTSignaturesSQFD _retval_ = cv::xfeatures2d::PCTSignaturesSQFD::create(  );
        return (jlong)(new Ptr_PCTSignaturesSQFD(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float computeQuadraticFormDistance(Mat _signature0, Mat _signature1)
//

using namespace cv::xfeatures2d;

JNIEXPORT jfloat JNICALL Java_org_opencv_xfeatures2d_PCTSignaturesSQFD_computeQuadraticFormDistance_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_xfeatures2d_PCTSignaturesSQFD_computeQuadraticFormDistance_10
  (JNIEnv* env, jclass , jlong self, jlong _signature0_nativeObj, jlong _signature1_nativeObj)
{
    static const char method_name[] = "xfeatures2d::computeQuadraticFormDistance_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignaturesSQFD>* me = (Ptr<cv::xfeatures2d::PCTSignaturesSQFD>*) self; //TODO: check for NULL
        Mat& _signature0 = *((Mat*)_signature0_nativeObj);
        Mat& _signature1 = *((Mat*)_signature1_nativeObj);
        float _retval_ = (*me)->computeQuadraticFormDistance( _signature0, _signature1 );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void computeQuadraticFormDistances(Mat sourceSignature, vector_Mat imageSignatures, vector_float distances)
//

using namespace cv::xfeatures2d;

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignaturesSQFD_computeQuadraticFormDistances_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignaturesSQFD_computeQuadraticFormDistances_10
  (JNIEnv* env, jclass , jlong self, jlong sourceSignature_nativeObj, jlong imageSignatures_mat_nativeObj, jlong distances_mat_nativeObj)
{
    static const char method_name[] = "xfeatures2d::computeQuadraticFormDistances_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> imageSignatures;
        Mat& imageSignatures_mat = *((Mat*)imageSignatures_mat_nativeObj);
        Mat_to_vector_Mat( imageSignatures_mat, imageSignatures );
        std::vector<float> distances;
        Mat& distances_mat = *((Mat*)distances_mat_nativeObj);
        Mat_to_vector_float( distances_mat, distances );
        Ptr<cv::xfeatures2d::PCTSignaturesSQFD>* me = (Ptr<cv::xfeatures2d::PCTSignaturesSQFD>*) self; //TODO: check for NULL
        Mat& sourceSignature = *((Mat*)sourceSignature_nativeObj);
        (*me)->computeQuadraticFormDistances( sourceSignature, imageSignatures, distances );
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
//  static void Ptr<cv::xfeatures2d::PCTSignaturesSQFD>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignaturesSQFD_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignaturesSQFD_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::xfeatures2d::PCTSignaturesSQFD>*) self;
}


//
// static Ptr_DAISY create(float radius = 15, int q_radius = 3, int q_theta = 8, int q_hist = 8, int norm = DAISY::NRM_NONE, Mat H = Mat(), bool interpolation = true, bool use_orientation = false)
//

using namespace cv::xfeatures2d;

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_DAISY_create_10 (JNIEnv*, jclass, jfloat, jint, jint, jint, jint, jlong, jboolean, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_DAISY_create_10
  (JNIEnv* env, jclass , jfloat radius, jint q_radius, jint q_theta, jint q_hist, jint norm, jlong H_nativeObj, jboolean interpolation, jboolean use_orientation)
{
    static const char method_name[] = "xfeatures2d::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xfeatures2d::DAISY> Ptr_DAISY;
        Mat& H = *((Mat*)H_nativeObj);
        Ptr_DAISY _retval_ = cv::xfeatures2d::DAISY::create( (float)radius, (int)q_radius, (int)q_theta, (int)q_hist, (int)norm, H, (bool)interpolation, (bool)use_orientation );
        return (jlong)(new Ptr_DAISY(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::xfeatures2d;

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_DAISY_create_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_DAISY_create_11
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "xfeatures2d::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xfeatures2d::DAISY> Ptr_DAISY;
        Ptr_DAISY _retval_ = cv::xfeatures2d::DAISY::create(  );
        return (jlong)(new Ptr_DAISY(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::xfeatures2d::DAISY>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_DAISY_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_DAISY_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::xfeatures2d::DAISY>*) self;
}


//
// static Ptr_LATCH create(int bytes = 32, bool rotationInvariance = true, int half_ssd_size = 3)
//

using namespace cv::xfeatures2d;

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_LATCH_create_10 (JNIEnv*, jclass, jint, jboolean, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_LATCH_create_10
  (JNIEnv* env, jclass , jint bytes, jboolean rotationInvariance, jint half_ssd_size)
{
    static const char method_name[] = "xfeatures2d::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xfeatures2d::LATCH> Ptr_LATCH;
        Ptr_LATCH _retval_ = cv::xfeatures2d::LATCH::create( (int)bytes, (bool)rotationInvariance, (int)half_ssd_size );
        return (jlong)(new Ptr_LATCH(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::xfeatures2d;

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_LATCH_create_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_LATCH_create_11
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "xfeatures2d::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xfeatures2d::LATCH> Ptr_LATCH;
        Ptr_LATCH _retval_ = cv::xfeatures2d::LATCH::create(  );
        return (jlong)(new Ptr_LATCH(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::xfeatures2d::LATCH>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_LATCH_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_LATCH_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::xfeatures2d::LATCH>*) self;
}


//
// static Ptr_BriefDescriptorExtractor create(int bytes = 32, bool use_orientation = false)
//

using namespace cv::xfeatures2d;

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_BriefDescriptorExtractor_create_10 (JNIEnv*, jclass, jint, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_BriefDescriptorExtractor_create_10
  (JNIEnv* env, jclass , jint bytes, jboolean use_orientation)
{
    static const char method_name[] = "xfeatures2d::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xfeatures2d::BriefDescriptorExtractor> Ptr_BriefDescriptorExtractor;
        Ptr_BriefDescriptorExtractor _retval_ = cv::xfeatures2d::BriefDescriptorExtractor::create( (int)bytes, (bool)use_orientation );
        return (jlong)(new Ptr_BriefDescriptorExtractor(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::xfeatures2d;

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_BriefDescriptorExtractor_create_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_BriefDescriptorExtractor_create_11
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "xfeatures2d::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xfeatures2d::BriefDescriptorExtractor> Ptr_BriefDescriptorExtractor;
        Ptr_BriefDescriptorExtractor _retval_ = cv::xfeatures2d::BriefDescriptorExtractor::create(  );
        return (jlong)(new Ptr_BriefDescriptorExtractor(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::xfeatures2d::BriefDescriptorExtractor>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_BriefDescriptorExtractor_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_BriefDescriptorExtractor_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::xfeatures2d::BriefDescriptorExtractor>*) self;
}


//
// static Ptr_StarDetector create(int maxSize = 45, int responseThreshold = 30, int lineThresholdProjected = 10, int lineThresholdBinarized = 8, int suppressNonmaxSize = 5)
//

using namespace cv::xfeatures2d;

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_StarDetector_create_10 (JNIEnv*, jclass, jint, jint, jint, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_StarDetector_create_10
  (JNIEnv* env, jclass , jint maxSize, jint responseThreshold, jint lineThresholdProjected, jint lineThresholdBinarized, jint suppressNonmaxSize)
{
    static const char method_name[] = "xfeatures2d::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xfeatures2d::StarDetector> Ptr_StarDetector;
        Ptr_StarDetector _retval_ = cv::xfeatures2d::StarDetector::create( (int)maxSize, (int)responseThreshold, (int)lineThresholdProjected, (int)lineThresholdBinarized, (int)suppressNonmaxSize );
        return (jlong)(new Ptr_StarDetector(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::xfeatures2d;

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_StarDetector_create_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_StarDetector_create_11
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "xfeatures2d::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xfeatures2d::StarDetector> Ptr_StarDetector;
        Ptr_StarDetector _retval_ = cv::xfeatures2d::StarDetector::create(  );
        return (jlong)(new Ptr_StarDetector(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::xfeatures2d::StarDetector>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_StarDetector_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_StarDetector_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::xfeatures2d::StarDetector>*) self;
}


//
// static Ptr_PCTSignatures create(int initSampleCount = 2000, int initSeedCount = 400, int pointDistribution = 0)
//

using namespace cv::xfeatures2d;

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_create_10 (JNIEnv*, jclass, jint, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_create_10
  (JNIEnv* env, jclass , jint initSampleCount, jint initSeedCount, jint pointDistribution)
{
    static const char method_name[] = "xfeatures2d::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xfeatures2d::PCTSignatures> Ptr_PCTSignatures;
        Ptr_PCTSignatures _retval_ = cv::xfeatures2d::PCTSignatures::create( (int)initSampleCount, (int)initSeedCount, (int)pointDistribution );
        return (jlong)(new Ptr_PCTSignatures(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::xfeatures2d;

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_create_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_create_11
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "xfeatures2d::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xfeatures2d::PCTSignatures> Ptr_PCTSignatures;
        Ptr_PCTSignatures _retval_ = cv::xfeatures2d::PCTSignatures::create(  );
        return (jlong)(new Ptr_PCTSignatures(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Ptr_PCTSignatures create(vector_Point2f initSamplingPoints, int initSeedCount)
//

using namespace cv::xfeatures2d;

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_create_12 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_create_12
  (JNIEnv* env, jclass , jlong initSamplingPoints_mat_nativeObj, jint initSeedCount)
{
    static const char method_name[] = "xfeatures2d::create_12()";
    try {
        LOGD("%s", method_name);
        std::vector<Point2f> initSamplingPoints;
        Mat& initSamplingPoints_mat = *((Mat*)initSamplingPoints_mat_nativeObj);
        Mat_to_vector_Point2f( initSamplingPoints_mat, initSamplingPoints );
        typedef Ptr<cv::xfeatures2d::PCTSignatures> Ptr_PCTSignatures;
        Ptr_PCTSignatures _retval_ = cv::xfeatures2d::PCTSignatures::create( initSamplingPoints, (int)initSeedCount );
        return (jlong)(new Ptr_PCTSignatures(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Ptr_PCTSignatures create(vector_Point2f initSamplingPoints, vector_int initClusterSeedIndexes)
//

using namespace cv::xfeatures2d;

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_create_13 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_create_13
  (JNIEnv* env, jclass , jlong initSamplingPoints_mat_nativeObj, jlong initClusterSeedIndexes_mat_nativeObj)
{
    static const char method_name[] = "xfeatures2d::create_13()";
    try {
        LOGD("%s", method_name);
        std::vector<Point2f> initSamplingPoints;
        Mat& initSamplingPoints_mat = *((Mat*)initSamplingPoints_mat_nativeObj);
        Mat_to_vector_Point2f( initSamplingPoints_mat, initSamplingPoints );
        std::vector<int> initClusterSeedIndexes;
        Mat& initClusterSeedIndexes_mat = *((Mat*)initClusterSeedIndexes_mat_nativeObj);
        Mat_to_vector_int( initClusterSeedIndexes_mat, initClusterSeedIndexes );
        typedef Ptr<cv::xfeatures2d::PCTSignatures> Ptr_PCTSignatures;
        Ptr_PCTSignatures _retval_ = cv::xfeatures2d::PCTSignatures::create( initSamplingPoints, initClusterSeedIndexes );
        return (jlong)(new Ptr_PCTSignatures(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float getDropThreshold()
//

using namespace cv::xfeatures2d;

JNIEXPORT jfloat JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getDropThreshold_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getDropThreshold_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xfeatures2d::getDropThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        float _retval_ = (*me)->getDropThreshold(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float getJoiningDistance()
//

using namespace cv::xfeatures2d;

JNIEXPORT jfloat JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getJoiningDistance_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getJoiningDistance_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xfeatures2d::getJoiningDistance_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        float _retval_ = (*me)->getJoiningDistance(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float getWeightA()
//

using namespace cv::xfeatures2d;

JNIEXPORT jfloat JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getWeightA_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getWeightA_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xfeatures2d::getWeightA_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        float _retval_ = (*me)->getWeightA(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float getWeightB()
//

using namespace cv::xfeatures2d;

JNIEXPORT jfloat JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getWeightB_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getWeightB_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xfeatures2d::getWeightB_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        float _retval_ = (*me)->getWeightB(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float getWeightContrast()
//

using namespace cv::xfeatures2d;

JNIEXPORT jfloat JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getWeightContrast_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getWeightContrast_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xfeatures2d::getWeightContrast_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        float _retval_ = (*me)->getWeightContrast(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float getWeightEntropy()
//

using namespace cv::xfeatures2d;

JNIEXPORT jfloat JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getWeightEntropy_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getWeightEntropy_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xfeatures2d::getWeightEntropy_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        float _retval_ = (*me)->getWeightEntropy(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float getWeightL()
//

using namespace cv::xfeatures2d;

JNIEXPORT jfloat JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getWeightL_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getWeightL_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xfeatures2d::getWeightL_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        float _retval_ = (*me)->getWeightL(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float getWeightX()
//

using namespace cv::xfeatures2d;

JNIEXPORT jfloat JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getWeightX_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getWeightX_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xfeatures2d::getWeightX_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        float _retval_ = (*me)->getWeightX(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float getWeightY()
//

using namespace cv::xfeatures2d;

JNIEXPORT jfloat JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getWeightY_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getWeightY_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xfeatures2d::getWeightY_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        float _retval_ = (*me)->getWeightY(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getClusterMinSize()
//

using namespace cv::xfeatures2d;

JNIEXPORT jint JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getClusterMinSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getClusterMinSize_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xfeatures2d::getClusterMinSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getClusterMinSize(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getDistanceFunction()
//

using namespace cv::xfeatures2d;

JNIEXPORT jint JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getDistanceFunction_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getDistanceFunction_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xfeatures2d::getDistanceFunction_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getDistanceFunction(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getGrayscaleBits()
//

using namespace cv::xfeatures2d;

JNIEXPORT jint JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getGrayscaleBits_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getGrayscaleBits_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xfeatures2d::getGrayscaleBits_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getGrayscaleBits(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getInitSeedCount()
//

using namespace cv::xfeatures2d;

JNIEXPORT jint JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getInitSeedCount_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getInitSeedCount_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xfeatures2d::getInitSeedCount_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getInitSeedCount(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getIterationCount()
//

using namespace cv::xfeatures2d;

JNIEXPORT jint JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getIterationCount_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getIterationCount_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xfeatures2d::getIterationCount_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getIterationCount(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getMaxClustersCount()
//

using namespace cv::xfeatures2d;

JNIEXPORT jint JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getMaxClustersCount_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getMaxClustersCount_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xfeatures2d::getMaxClustersCount_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getMaxClustersCount(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getSampleCount()
//

using namespace cv::xfeatures2d;

JNIEXPORT jint JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getSampleCount_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getSampleCount_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xfeatures2d::getSampleCount_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getSampleCount(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getWindowRadius()
//

using namespace cv::xfeatures2d;

JNIEXPORT jint JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getWindowRadius_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getWindowRadius_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xfeatures2d::getWindowRadius_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getWindowRadius(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  vector_Point2f getSamplingPoints()
//

using namespace cv::xfeatures2d;

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getSamplingPoints_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getSamplingPoints_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xfeatures2d::getSamplingPoints_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        std::vector<Point2f> _ret_val_vector_ = (*me)->getSamplingPoints(  );
        Mat* _retval_ = new Mat();  vector_Point2f_to_Mat(_ret_val_vector_, *_retval_);
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  vector_int getInitSeedIndexes()
//

using namespace cv::xfeatures2d;

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getInitSeedIndexes_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_getInitSeedIndexes_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xfeatures2d::getInitSeedIndexes_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        std::vector<int> _ret_val_vector_ = (*me)->getInitSeedIndexes(  );
        Mat* _retval_ = new Mat();  vector_int_to_Mat(_ret_val_vector_, *_retval_);
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void computeSignature(Mat image, Mat& signature)
//

using namespace cv::xfeatures2d;

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_computeSignature_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_computeSignature_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong signature_nativeObj)
{
    static const char method_name[] = "xfeatures2d::computeSignature_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& signature = *((Mat*)signature_nativeObj);
        (*me)->computeSignature( image, signature );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void computeSignatures(vector_Mat images, vector_Mat signatures)
//

using namespace cv::xfeatures2d;

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_computeSignatures_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_computeSignatures_10
  (JNIEnv* env, jclass , jlong self, jlong images_mat_nativeObj, jlong signatures_mat_nativeObj)
{
    static const char method_name[] = "xfeatures2d::computeSignatures_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> images;
        Mat& images_mat = *((Mat*)images_mat_nativeObj);
        Mat_to_vector_Mat( images_mat, images );
        std::vector<Mat> signatures;
        Mat& signatures_mat = *((Mat*)signatures_mat_nativeObj);
        Mat_to_vector_Mat( signatures_mat, signatures );
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        (*me)->computeSignatures( images, signatures );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// static void drawSignature(Mat source, Mat signature, Mat& result, float radiusToShorterSideRatio = 1.0 / 8, int borderThickness = 1)
//

using namespace cv::xfeatures2d;

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_drawSignature_10 (JNIEnv*, jclass, jlong, jlong, jlong, jfloat, jint);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_drawSignature_10
  (JNIEnv* env, jclass , jlong source_nativeObj, jlong signature_nativeObj, jlong result_nativeObj, jfloat radiusToShorterSideRatio, jint borderThickness)
{
    static const char method_name[] = "xfeatures2d::drawSignature_10()";
    try {
        LOGD("%s", method_name);
        Mat& source = *((Mat*)source_nativeObj);
        Mat& signature = *((Mat*)signature_nativeObj);
        Mat& result = *((Mat*)result_nativeObj);
        cv::xfeatures2d::PCTSignatures::drawSignature( source, signature, result, (float)radiusToShorterSideRatio, (int)borderThickness );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



using namespace cv::xfeatures2d;

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_drawSignature_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_drawSignature_11
  (JNIEnv* env, jclass , jlong source_nativeObj, jlong signature_nativeObj, jlong result_nativeObj)
{
    static const char method_name[] = "xfeatures2d::drawSignature_11()";
    try {
        LOGD("%s", method_name);
        Mat& source = *((Mat*)source_nativeObj);
        Mat& signature = *((Mat*)signature_nativeObj);
        Mat& result = *((Mat*)result_nativeObj);
        cv::xfeatures2d::PCTSignatures::drawSignature( source, signature, result );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// static void generateInitPoints(vector_Point2f initPoints, int count, int pointDistribution)
//

using namespace cv::xfeatures2d;

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_generateInitPoints_10 (JNIEnv*, jclass, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_generateInitPoints_10
  (JNIEnv* env, jclass , jlong initPoints_mat_nativeObj, jint count, jint pointDistribution)
{
    static const char method_name[] = "xfeatures2d::generateInitPoints_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Point2f> initPoints;
        Mat& initPoints_mat = *((Mat*)initPoints_mat_nativeObj);
        Mat_to_vector_Point2f( initPoints_mat, initPoints );
        cv::xfeatures2d::PCTSignatures::generateInitPoints( initPoints, (int)count, (int)pointDistribution );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setClusterMinSize(int clusterMinSize)
//

using namespace cv::xfeatures2d;

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setClusterMinSize_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setClusterMinSize_10
  (JNIEnv* env, jclass , jlong self, jint clusterMinSize)
{
    static const char method_name[] = "xfeatures2d::setClusterMinSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        (*me)->setClusterMinSize( (int)clusterMinSize );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setDistanceFunction(int distanceFunction)
//

using namespace cv::xfeatures2d;

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setDistanceFunction_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setDistanceFunction_10
  (JNIEnv* env, jclass , jlong self, jint distanceFunction)
{
    static const char method_name[] = "xfeatures2d::setDistanceFunction_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        (*me)->setDistanceFunction( (int)distanceFunction );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setDropThreshold(float dropThreshold)
//

using namespace cv::xfeatures2d;

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setDropThreshold_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setDropThreshold_10
  (JNIEnv* env, jclass , jlong self, jfloat dropThreshold)
{
    static const char method_name[] = "xfeatures2d::setDropThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        (*me)->setDropThreshold( (float)dropThreshold );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setGrayscaleBits(int grayscaleBits)
//

using namespace cv::xfeatures2d;

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setGrayscaleBits_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setGrayscaleBits_10
  (JNIEnv* env, jclass , jlong self, jint grayscaleBits)
{
    static const char method_name[] = "xfeatures2d::setGrayscaleBits_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        (*me)->setGrayscaleBits( (int)grayscaleBits );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setInitSeedIndexes(vector_int initSeedIndexes)
//

using namespace cv::xfeatures2d;

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setInitSeedIndexes_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setInitSeedIndexes_10
  (JNIEnv* env, jclass , jlong self, jlong initSeedIndexes_mat_nativeObj)
{
    static const char method_name[] = "xfeatures2d::setInitSeedIndexes_10()";
    try {
        LOGD("%s", method_name);
        std::vector<int> initSeedIndexes;
        Mat& initSeedIndexes_mat = *((Mat*)initSeedIndexes_mat_nativeObj);
        Mat_to_vector_int( initSeedIndexes_mat, initSeedIndexes );
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        (*me)->setInitSeedIndexes( initSeedIndexes );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setIterationCount(int iterationCount)
//

using namespace cv::xfeatures2d;

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setIterationCount_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setIterationCount_10
  (JNIEnv* env, jclass , jlong self, jint iterationCount)
{
    static const char method_name[] = "xfeatures2d::setIterationCount_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        (*me)->setIterationCount( (int)iterationCount );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setJoiningDistance(float joiningDistance)
//

using namespace cv::xfeatures2d;

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setJoiningDistance_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setJoiningDistance_10
  (JNIEnv* env, jclass , jlong self, jfloat joiningDistance)
{
    static const char method_name[] = "xfeatures2d::setJoiningDistance_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        (*me)->setJoiningDistance( (float)joiningDistance );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setMaxClustersCount(int maxClustersCount)
//

using namespace cv::xfeatures2d;

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setMaxClustersCount_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setMaxClustersCount_10
  (JNIEnv* env, jclass , jlong self, jint maxClustersCount)
{
    static const char method_name[] = "xfeatures2d::setMaxClustersCount_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        (*me)->setMaxClustersCount( (int)maxClustersCount );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setSamplingPoints(vector_Point2f samplingPoints)
//

using namespace cv::xfeatures2d;

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setSamplingPoints_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setSamplingPoints_10
  (JNIEnv* env, jclass , jlong self, jlong samplingPoints_mat_nativeObj)
{
    static const char method_name[] = "xfeatures2d::setSamplingPoints_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Point2f> samplingPoints;
        Mat& samplingPoints_mat = *((Mat*)samplingPoints_mat_nativeObj);
        Mat_to_vector_Point2f( samplingPoints_mat, samplingPoints );
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        (*me)->setSamplingPoints( samplingPoints );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setTranslation(int idx, float value)
//

using namespace cv::xfeatures2d;

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setTranslation_10 (JNIEnv*, jclass, jlong, jint, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setTranslation_10
  (JNIEnv* env, jclass , jlong self, jint idx, jfloat value)
{
    static const char method_name[] = "xfeatures2d::setTranslation_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        (*me)->setTranslation( (int)idx, (float)value );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setTranslations(vector_float translations)
//

using namespace cv::xfeatures2d;

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setTranslations_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setTranslations_10
  (JNIEnv* env, jclass , jlong self, jlong translations_mat_nativeObj)
{
    static const char method_name[] = "xfeatures2d::setTranslations_10()";
    try {
        LOGD("%s", method_name);
        std::vector<float> translations;
        Mat& translations_mat = *((Mat*)translations_mat_nativeObj);
        Mat_to_vector_float( translations_mat, translations );
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        (*me)->setTranslations( translations );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setWeight(int idx, float value)
//

using namespace cv::xfeatures2d;

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setWeight_10 (JNIEnv*, jclass, jlong, jint, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setWeight_10
  (JNIEnv* env, jclass , jlong self, jint idx, jfloat value)
{
    static const char method_name[] = "xfeatures2d::setWeight_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        (*me)->setWeight( (int)idx, (float)value );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setWeightA(float weight)
//

using namespace cv::xfeatures2d;

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setWeightA_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setWeightA_10
  (JNIEnv* env, jclass , jlong self, jfloat weight)
{
    static const char method_name[] = "xfeatures2d::setWeightA_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        (*me)->setWeightA( (float)weight );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setWeightB(float weight)
//

using namespace cv::xfeatures2d;

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setWeightB_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setWeightB_10
  (JNIEnv* env, jclass , jlong self, jfloat weight)
{
    static const char method_name[] = "xfeatures2d::setWeightB_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        (*me)->setWeightB( (float)weight );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setWeightContrast(float weight)
//

using namespace cv::xfeatures2d;

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setWeightContrast_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setWeightContrast_10
  (JNIEnv* env, jclass , jlong self, jfloat weight)
{
    static const char method_name[] = "xfeatures2d::setWeightContrast_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        (*me)->setWeightContrast( (float)weight );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setWeightEntropy(float weight)
//

using namespace cv::xfeatures2d;

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setWeightEntropy_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setWeightEntropy_10
  (JNIEnv* env, jclass , jlong self, jfloat weight)
{
    static const char method_name[] = "xfeatures2d::setWeightEntropy_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        (*me)->setWeightEntropy( (float)weight );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setWeightL(float weight)
//

using namespace cv::xfeatures2d;

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setWeightL_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setWeightL_10
  (JNIEnv* env, jclass , jlong self, jfloat weight)
{
    static const char method_name[] = "xfeatures2d::setWeightL_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        (*me)->setWeightL( (float)weight );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setWeightX(float weight)
//

using namespace cv::xfeatures2d;

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setWeightX_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setWeightX_10
  (JNIEnv* env, jclass , jlong self, jfloat weight)
{
    static const char method_name[] = "xfeatures2d::setWeightX_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        (*me)->setWeightX( (float)weight );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setWeightY(float weight)
//

using namespace cv::xfeatures2d;

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setWeightY_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setWeightY_10
  (JNIEnv* env, jclass , jlong self, jfloat weight)
{
    static const char method_name[] = "xfeatures2d::setWeightY_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        (*me)->setWeightY( (float)weight );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setWeights(vector_float weights)
//

using namespace cv::xfeatures2d;

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setWeights_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setWeights_10
  (JNIEnv* env, jclass , jlong self, jlong weights_mat_nativeObj)
{
    static const char method_name[] = "xfeatures2d::setWeights_10()";
    try {
        LOGD("%s", method_name);
        std::vector<float> weights;
        Mat& weights_mat = *((Mat*)weights_mat_nativeObj);
        Mat_to_vector_float( weights_mat, weights );
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        (*me)->setWeights( weights );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setWindowRadius(int radius)
//

using namespace cv::xfeatures2d;

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setWindowRadius_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_setWindowRadius_10
  (JNIEnv* env, jclass , jlong self, jint radius)
{
    static const char method_name[] = "xfeatures2d::setWindowRadius_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xfeatures2d::PCTSignatures>* me = (Ptr<cv::xfeatures2d::PCTSignatures>*) self; //TODO: check for NULL
        (*me)->setWindowRadius( (int)radius );
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
//  static void Ptr<cv::xfeatures2d::PCTSignatures>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_xfeatures2d_PCTSignatures_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::xfeatures2d::PCTSignatures>*) self;
}



} // extern "C"

#endif // HAVE_OPENCV_XFEATURES2D
