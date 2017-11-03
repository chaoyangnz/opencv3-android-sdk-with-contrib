
//
// This file is auto-generated, please don't edit!
//

#define LOG_TAG "org.opencv.aruco"

#include "common.h"

#include "opencv2/opencv_modules.hpp"
#ifdef HAVE_OPENCV_ARUCO

#include <string>

#include "opencv2/aruco.hpp"

#include "/Users/Chao/opencv/modules/features2d/misc/java/src/cpp/features2d_converters.hpp"
#include "/Users/Chao/opencv_contrib/modules/aruco/include/opencv2/aruco.hpp"
#include "/Users/Chao/opencv_contrib/modules/aruco/include/opencv2/aruco/charuco.hpp"
#include "/Users/Chao/opencv_contrib/modules/aruco/include/opencv2/aruco/dictionary.hpp"

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
// static Ptr_DetectorParameters create()
//

using namespace cv::aruco;

JNIEXPORT jlong JNICALL Java_org_opencv_aruco_DetectorParameters_create_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_aruco_DetectorParameters_create_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "aruco::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::aruco::DetectorParameters> Ptr_DetectorParameters;
        Ptr_DetectorParameters _retval_ = cv::aruco::DetectorParameters::create(  );
        return (jlong)(new Ptr_DetectorParameters(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// int DetectorParameters::adaptiveThreshWinSizeMin
//

using namespace cv::aruco;

JNIEXPORT jint JNICALL Java_org_opencv_aruco_DetectorParameters_get_1adaptiveThreshWinSizeMin_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_aruco_DetectorParameters_get_1adaptiveThreshWinSizeMin_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "aruco::get_1adaptiveThreshWinSizeMin_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        int _retval_ = (*me)->adaptiveThreshWinSizeMin;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::adaptiveThreshWinSizeMin
//

using namespace cv::aruco;

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1adaptiveThreshWinSizeMin_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1adaptiveThreshWinSizeMin_10
  (JNIEnv* env, jclass , jlong self, jint adaptiveThreshWinSizeMin)
{
    static const char method_name[] = "aruco::set_1adaptiveThreshWinSizeMin_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        (*me)->adaptiveThreshWinSizeMin = ( (int)adaptiveThreshWinSizeMin );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int DetectorParameters::adaptiveThreshWinSizeMax
//

using namespace cv::aruco;

JNIEXPORT jint JNICALL Java_org_opencv_aruco_DetectorParameters_get_1adaptiveThreshWinSizeMax_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_aruco_DetectorParameters_get_1adaptiveThreshWinSizeMax_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "aruco::get_1adaptiveThreshWinSizeMax_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        int _retval_ = (*me)->adaptiveThreshWinSizeMax;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::adaptiveThreshWinSizeMax
//

using namespace cv::aruco;

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1adaptiveThreshWinSizeMax_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1adaptiveThreshWinSizeMax_10
  (JNIEnv* env, jclass , jlong self, jint adaptiveThreshWinSizeMax)
{
    static const char method_name[] = "aruco::set_1adaptiveThreshWinSizeMax_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        (*me)->adaptiveThreshWinSizeMax = ( (int)adaptiveThreshWinSizeMax );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int DetectorParameters::adaptiveThreshWinSizeStep
//

using namespace cv::aruco;

JNIEXPORT jint JNICALL Java_org_opencv_aruco_DetectorParameters_get_1adaptiveThreshWinSizeStep_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_aruco_DetectorParameters_get_1adaptiveThreshWinSizeStep_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "aruco::get_1adaptiveThreshWinSizeStep_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        int _retval_ = (*me)->adaptiveThreshWinSizeStep;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::adaptiveThreshWinSizeStep
//

using namespace cv::aruco;

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1adaptiveThreshWinSizeStep_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1adaptiveThreshWinSizeStep_10
  (JNIEnv* env, jclass , jlong self, jint adaptiveThreshWinSizeStep)
{
    static const char method_name[] = "aruco::set_1adaptiveThreshWinSizeStep_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        (*me)->adaptiveThreshWinSizeStep = ( (int)adaptiveThreshWinSizeStep );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double DetectorParameters::adaptiveThreshConstant
//

using namespace cv::aruco;

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_DetectorParameters_get_1adaptiveThreshConstant_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_DetectorParameters_get_1adaptiveThreshConstant_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "aruco::get_1adaptiveThreshConstant_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        double _retval_ = (*me)->adaptiveThreshConstant;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::adaptiveThreshConstant
//

using namespace cv::aruco;

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1adaptiveThreshConstant_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1adaptiveThreshConstant_10
  (JNIEnv* env, jclass , jlong self, jdouble adaptiveThreshConstant)
{
    static const char method_name[] = "aruco::set_1adaptiveThreshConstant_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        (*me)->adaptiveThreshConstant = ( (double)adaptiveThreshConstant );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double DetectorParameters::minMarkerPerimeterRate
//

using namespace cv::aruco;

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_DetectorParameters_get_1minMarkerPerimeterRate_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_DetectorParameters_get_1minMarkerPerimeterRate_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "aruco::get_1minMarkerPerimeterRate_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        double _retval_ = (*me)->minMarkerPerimeterRate;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::minMarkerPerimeterRate
//

using namespace cv::aruco;

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1minMarkerPerimeterRate_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1minMarkerPerimeterRate_10
  (JNIEnv* env, jclass , jlong self, jdouble minMarkerPerimeterRate)
{
    static const char method_name[] = "aruco::set_1minMarkerPerimeterRate_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        (*me)->minMarkerPerimeterRate = ( (double)minMarkerPerimeterRate );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double DetectorParameters::maxMarkerPerimeterRate
//

using namespace cv::aruco;

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_DetectorParameters_get_1maxMarkerPerimeterRate_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_DetectorParameters_get_1maxMarkerPerimeterRate_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "aruco::get_1maxMarkerPerimeterRate_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        double _retval_ = (*me)->maxMarkerPerimeterRate;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::maxMarkerPerimeterRate
//

using namespace cv::aruco;

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1maxMarkerPerimeterRate_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1maxMarkerPerimeterRate_10
  (JNIEnv* env, jclass , jlong self, jdouble maxMarkerPerimeterRate)
{
    static const char method_name[] = "aruco::set_1maxMarkerPerimeterRate_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        (*me)->maxMarkerPerimeterRate = ( (double)maxMarkerPerimeterRate );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double DetectorParameters::polygonalApproxAccuracyRate
//

using namespace cv::aruco;

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_DetectorParameters_get_1polygonalApproxAccuracyRate_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_DetectorParameters_get_1polygonalApproxAccuracyRate_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "aruco::get_1polygonalApproxAccuracyRate_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        double _retval_ = (*me)->polygonalApproxAccuracyRate;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::polygonalApproxAccuracyRate
//

using namespace cv::aruco;

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1polygonalApproxAccuracyRate_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1polygonalApproxAccuracyRate_10
  (JNIEnv* env, jclass , jlong self, jdouble polygonalApproxAccuracyRate)
{
    static const char method_name[] = "aruco::set_1polygonalApproxAccuracyRate_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        (*me)->polygonalApproxAccuracyRate = ( (double)polygonalApproxAccuracyRate );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double DetectorParameters::minCornerDistanceRate
//

using namespace cv::aruco;

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_DetectorParameters_get_1minCornerDistanceRate_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_DetectorParameters_get_1minCornerDistanceRate_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "aruco::get_1minCornerDistanceRate_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        double _retval_ = (*me)->minCornerDistanceRate;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::minCornerDistanceRate
//

using namespace cv::aruco;

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1minCornerDistanceRate_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1minCornerDistanceRate_10
  (JNIEnv* env, jclass , jlong self, jdouble minCornerDistanceRate)
{
    static const char method_name[] = "aruco::set_1minCornerDistanceRate_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        (*me)->minCornerDistanceRate = ( (double)minCornerDistanceRate );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int DetectorParameters::minDistanceToBorder
//

using namespace cv::aruco;

JNIEXPORT jint JNICALL Java_org_opencv_aruco_DetectorParameters_get_1minDistanceToBorder_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_aruco_DetectorParameters_get_1minDistanceToBorder_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "aruco::get_1minDistanceToBorder_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        int _retval_ = (*me)->minDistanceToBorder;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::minDistanceToBorder
//

using namespace cv::aruco;

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1minDistanceToBorder_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1minDistanceToBorder_10
  (JNIEnv* env, jclass , jlong self, jint minDistanceToBorder)
{
    static const char method_name[] = "aruco::set_1minDistanceToBorder_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        (*me)->minDistanceToBorder = ( (int)minDistanceToBorder );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double DetectorParameters::minMarkerDistanceRate
//

using namespace cv::aruco;

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_DetectorParameters_get_1minMarkerDistanceRate_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_DetectorParameters_get_1minMarkerDistanceRate_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "aruco::get_1minMarkerDistanceRate_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        double _retval_ = (*me)->minMarkerDistanceRate;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::minMarkerDistanceRate
//

using namespace cv::aruco;

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1minMarkerDistanceRate_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1minMarkerDistanceRate_10
  (JNIEnv* env, jclass , jlong self, jdouble minMarkerDistanceRate)
{
    static const char method_name[] = "aruco::set_1minMarkerDistanceRate_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        (*me)->minMarkerDistanceRate = ( (double)minMarkerDistanceRate );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int DetectorParameters::cornerRefinementMethod
//

using namespace cv::aruco;

JNIEXPORT jint JNICALL Java_org_opencv_aruco_DetectorParameters_get_1cornerRefinementMethod_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_aruco_DetectorParameters_get_1cornerRefinementMethod_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "aruco::get_1cornerRefinementMethod_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        int _retval_ = (*me)->cornerRefinementMethod;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::cornerRefinementMethod
//

using namespace cv::aruco;

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1cornerRefinementMethod_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1cornerRefinementMethod_10
  (JNIEnv* env, jclass , jlong self, jint cornerRefinementMethod)
{
    static const char method_name[] = "aruco::set_1cornerRefinementMethod_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        (*me)->cornerRefinementMethod = ( (int)cornerRefinementMethod );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int DetectorParameters::cornerRefinementWinSize
//

using namespace cv::aruco;

JNIEXPORT jint JNICALL Java_org_opencv_aruco_DetectorParameters_get_1cornerRefinementWinSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_aruco_DetectorParameters_get_1cornerRefinementWinSize_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "aruco::get_1cornerRefinementWinSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        int _retval_ = (*me)->cornerRefinementWinSize;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::cornerRefinementWinSize
//

using namespace cv::aruco;

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1cornerRefinementWinSize_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1cornerRefinementWinSize_10
  (JNIEnv* env, jclass , jlong self, jint cornerRefinementWinSize)
{
    static const char method_name[] = "aruco::set_1cornerRefinementWinSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        (*me)->cornerRefinementWinSize = ( (int)cornerRefinementWinSize );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int DetectorParameters::cornerRefinementMaxIterations
//

using namespace cv::aruco;

JNIEXPORT jint JNICALL Java_org_opencv_aruco_DetectorParameters_get_1cornerRefinementMaxIterations_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_aruco_DetectorParameters_get_1cornerRefinementMaxIterations_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "aruco::get_1cornerRefinementMaxIterations_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        int _retval_ = (*me)->cornerRefinementMaxIterations;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::cornerRefinementMaxIterations
//

using namespace cv::aruco;

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1cornerRefinementMaxIterations_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1cornerRefinementMaxIterations_10
  (JNIEnv* env, jclass , jlong self, jint cornerRefinementMaxIterations)
{
    static const char method_name[] = "aruco::set_1cornerRefinementMaxIterations_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        (*me)->cornerRefinementMaxIterations = ( (int)cornerRefinementMaxIterations );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double DetectorParameters::cornerRefinementMinAccuracy
//

using namespace cv::aruco;

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_DetectorParameters_get_1cornerRefinementMinAccuracy_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_DetectorParameters_get_1cornerRefinementMinAccuracy_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "aruco::get_1cornerRefinementMinAccuracy_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        double _retval_ = (*me)->cornerRefinementMinAccuracy;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::cornerRefinementMinAccuracy
//

using namespace cv::aruco;

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1cornerRefinementMinAccuracy_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1cornerRefinementMinAccuracy_10
  (JNIEnv* env, jclass , jlong self, jdouble cornerRefinementMinAccuracy)
{
    static const char method_name[] = "aruco::set_1cornerRefinementMinAccuracy_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        (*me)->cornerRefinementMinAccuracy = ( (double)cornerRefinementMinAccuracy );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int DetectorParameters::markerBorderBits
//

using namespace cv::aruco;

JNIEXPORT jint JNICALL Java_org_opencv_aruco_DetectorParameters_get_1markerBorderBits_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_aruco_DetectorParameters_get_1markerBorderBits_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "aruco::get_1markerBorderBits_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        int _retval_ = (*me)->markerBorderBits;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::markerBorderBits
//

using namespace cv::aruco;

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1markerBorderBits_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1markerBorderBits_10
  (JNIEnv* env, jclass , jlong self, jint markerBorderBits)
{
    static const char method_name[] = "aruco::set_1markerBorderBits_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        (*me)->markerBorderBits = ( (int)markerBorderBits );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// int DetectorParameters::perspectiveRemovePixelPerCell
//

using namespace cv::aruco;

JNIEXPORT jint JNICALL Java_org_opencv_aruco_DetectorParameters_get_1perspectiveRemovePixelPerCell_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_aruco_DetectorParameters_get_1perspectiveRemovePixelPerCell_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "aruco::get_1perspectiveRemovePixelPerCell_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        int _retval_ = (*me)->perspectiveRemovePixelPerCell;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::perspectiveRemovePixelPerCell
//

using namespace cv::aruco;

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1perspectiveRemovePixelPerCell_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1perspectiveRemovePixelPerCell_10
  (JNIEnv* env, jclass , jlong self, jint perspectiveRemovePixelPerCell)
{
    static const char method_name[] = "aruco::set_1perspectiveRemovePixelPerCell_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        (*me)->perspectiveRemovePixelPerCell = ( (int)perspectiveRemovePixelPerCell );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double DetectorParameters::perspectiveRemoveIgnoredMarginPerCell
//

using namespace cv::aruco;

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_DetectorParameters_get_1perspectiveRemoveIgnoredMarginPerCell_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_DetectorParameters_get_1perspectiveRemoveIgnoredMarginPerCell_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "aruco::get_1perspectiveRemoveIgnoredMarginPerCell_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        double _retval_ = (*me)->perspectiveRemoveIgnoredMarginPerCell;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::perspectiveRemoveIgnoredMarginPerCell
//

using namespace cv::aruco;

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1perspectiveRemoveIgnoredMarginPerCell_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1perspectiveRemoveIgnoredMarginPerCell_10
  (JNIEnv* env, jclass , jlong self, jdouble perspectiveRemoveIgnoredMarginPerCell)
{
    static const char method_name[] = "aruco::set_1perspectiveRemoveIgnoredMarginPerCell_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        (*me)->perspectiveRemoveIgnoredMarginPerCell = ( (double)perspectiveRemoveIgnoredMarginPerCell );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double DetectorParameters::maxErroneousBitsInBorderRate
//

using namespace cv::aruco;

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_DetectorParameters_get_1maxErroneousBitsInBorderRate_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_DetectorParameters_get_1maxErroneousBitsInBorderRate_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "aruco::get_1maxErroneousBitsInBorderRate_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        double _retval_ = (*me)->maxErroneousBitsInBorderRate;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::maxErroneousBitsInBorderRate
//

using namespace cv::aruco;

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1maxErroneousBitsInBorderRate_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1maxErroneousBitsInBorderRate_10
  (JNIEnv* env, jclass , jlong self, jdouble maxErroneousBitsInBorderRate)
{
    static const char method_name[] = "aruco::set_1maxErroneousBitsInBorderRate_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        (*me)->maxErroneousBitsInBorderRate = ( (double)maxErroneousBitsInBorderRate );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double DetectorParameters::minOtsuStdDev
//

using namespace cv::aruco;

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_DetectorParameters_get_1minOtsuStdDev_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_DetectorParameters_get_1minOtsuStdDev_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "aruco::get_1minOtsuStdDev_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        double _retval_ = (*me)->minOtsuStdDev;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::minOtsuStdDev
//

using namespace cv::aruco;

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1minOtsuStdDev_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1minOtsuStdDev_10
  (JNIEnv* env, jclass , jlong self, jdouble minOtsuStdDev)
{
    static const char method_name[] = "aruco::set_1minOtsuStdDev_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        (*me)->minOtsuStdDev = ( (double)minOtsuStdDev );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double DetectorParameters::errorCorrectionRate
//

using namespace cv::aruco;

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_DetectorParameters_get_1errorCorrectionRate_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_DetectorParameters_get_1errorCorrectionRate_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "aruco::get_1errorCorrectionRate_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        double _retval_ = (*me)->errorCorrectionRate;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::errorCorrectionRate
//

using namespace cv::aruco;

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1errorCorrectionRate_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_set_1errorCorrectionRate_10
  (JNIEnv* env, jclass , jlong self, jdouble errorCorrectionRate)
{
    static const char method_name[] = "aruco::set_1errorCorrectionRate_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::DetectorParameters>* me = (Ptr<cv::aruco::DetectorParameters>*) self; //TODO: check for NULL
        (*me)->errorCorrectionRate = ( (double)errorCorrectionRate );
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
//  static void Ptr<cv::aruco::DetectorParameters>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_aruco_DetectorParameters_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::aruco::DetectorParameters>*) self;
}


//
// static Ptr_CharucoBoard create(int squaresX, int squaresY, float squareLength, float markerLength, Ptr_Dictionary dictionary)
//

using namespace cv::aruco;

JNIEXPORT jlong JNICALL Java_org_opencv_aruco_CharucoBoard_create_10 (JNIEnv*, jclass, jint, jint, jfloat, jfloat, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_aruco_CharucoBoard_create_10
  (JNIEnv* env, jclass , jint squaresX, jint squaresY, jfloat squareLength, jfloat markerLength, jlong dictionary_nativeObj)
{
    static const char method_name[] = "aruco::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::aruco::CharucoBoard> Ptr_CharucoBoard;
        Ptr_CharucoBoard _retval_ = cv::aruco::CharucoBoard::create( (int)squaresX, (int)squaresY, (float)squareLength, (float)markerLength, *((Ptr<cv::aruco::Dictionary>*)dictionary_nativeObj) );
        return (jlong)(new Ptr_CharucoBoard(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Size getChessboardSize()
//

using namespace cv::aruco;

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_aruco_CharucoBoard_getChessboardSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_aruco_CharucoBoard_getChessboardSize_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "aruco::getChessboardSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::CharucoBoard>* me = (Ptr<cv::aruco::CharucoBoard>*) self; //TODO: check for NULL
        Size _retval_ = (*me)->getChessboardSize(  );
        jdoubleArray _da_retval_ = env->NewDoubleArray(2);  jdouble _tmp_retval_[2] = {(jdouble)_retval_.width, (jdouble)_retval_.height}; env->SetDoubleArrayRegion(_da_retval_, 0, 2, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float getMarkerLength()
//

using namespace cv::aruco;

JNIEXPORT jfloat JNICALL Java_org_opencv_aruco_CharucoBoard_getMarkerLength_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_aruco_CharucoBoard_getMarkerLength_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "aruco::getMarkerLength_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::CharucoBoard>* me = (Ptr<cv::aruco::CharucoBoard>*) self; //TODO: check for NULL
        float _retval_ = (*me)->getMarkerLength(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float getSquareLength()
//

using namespace cv::aruco;

JNIEXPORT jfloat JNICALL Java_org_opencv_aruco_CharucoBoard_getSquareLength_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_aruco_CharucoBoard_getSquareLength_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "aruco::getSquareLength_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::CharucoBoard>* me = (Ptr<cv::aruco::CharucoBoard>*) self; //TODO: check for NULL
        float _retval_ = (*me)->getSquareLength(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void draw(Size outSize, Mat& img, int marginSize = 0, int borderBits = 1)
//

using namespace cv::aruco;

JNIEXPORT void JNICALL Java_org_opencv_aruco_CharucoBoard_draw_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_aruco_CharucoBoard_draw_10
  (JNIEnv* env, jclass , jlong self, jdouble outSize_width, jdouble outSize_height, jlong img_nativeObj, jint marginSize, jint borderBits)
{
    static const char method_name[] = "aruco::draw_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::CharucoBoard>* me = (Ptr<cv::aruco::CharucoBoard>*) self; //TODO: check for NULL
        Size outSize((int)outSize_width, (int)outSize_height);
        Mat& img = *((Mat*)img_nativeObj);
        (*me)->draw( outSize, img, (int)marginSize, (int)borderBits );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



using namespace cv::aruco;

JNIEXPORT void JNICALL Java_org_opencv_aruco_CharucoBoard_draw_11 (JNIEnv*, jclass, jlong, jdouble, jdouble, jlong);

JNIEXPORT void JNICALL Java_org_opencv_aruco_CharucoBoard_draw_11
  (JNIEnv* env, jclass , jlong self, jdouble outSize_width, jdouble outSize_height, jlong img_nativeObj)
{
    static const char method_name[] = "aruco::draw_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::CharucoBoard>* me = (Ptr<cv::aruco::CharucoBoard>*) self; //TODO: check for NULL
        Size outSize((int)outSize_width, (int)outSize_height);
        Mat& img = *((Mat*)img_nativeObj);
        (*me)->draw( outSize, img );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// vector_Point3f CharucoBoard::chessboardCorners
//

using namespace cv::aruco;

JNIEXPORT jlong JNICALL Java_org_opencv_aruco_CharucoBoard_get_1chessboardCorners_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_aruco_CharucoBoard_get_1chessboardCorners_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "aruco::get_1chessboardCorners_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::CharucoBoard>* me = (Ptr<cv::aruco::CharucoBoard>*) self; //TODO: check for NULL
        std::vector<Point3f> _ret_val_vector_ = (*me)->chessboardCorners;//(  );
        Mat* _retval_ = new Mat();  vector_Point3f_to_Mat(_ret_val_vector_, *_retval_);
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::aruco::CharucoBoard>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_aruco_CharucoBoard_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_aruco_CharucoBoard_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::aruco::CharucoBoard>*) self;
}


//
// static Ptr_Dictionary create(int nMarkers, int markerSize, Ptr_Dictionary baseDictionary)
//

using namespace cv::aruco;

JNIEXPORT jlong JNICALL Java_org_opencv_aruco_Dictionary_create_1from_10 (JNIEnv*, jclass, jint, jint, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_aruco_Dictionary_create_1from_10
  (JNIEnv* env, jclass , jint nMarkers, jint markerSize, jlong baseDictionary_nativeObj)
{
    static const char method_name[] = "aruco::create_1from_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::aruco::Dictionary> Ptr_Dictionary;
        Ptr_Dictionary _retval_ = cv::aruco::Dictionary::create( (int)nMarkers, (int)markerSize, *((Ptr<cv::aruco::Dictionary>*)baseDictionary_nativeObj) );
        return (jlong)(new Ptr_Dictionary(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Ptr_Dictionary create(int nMarkers, int markerSize)
//

using namespace cv::aruco;

JNIEXPORT jlong JNICALL Java_org_opencv_aruco_Dictionary_create_10 (JNIEnv*, jclass, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_aruco_Dictionary_create_10
  (JNIEnv* env, jclass , jint nMarkers, jint markerSize)
{
    static const char method_name[] = "aruco::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::aruco::Dictionary> Ptr_Dictionary;
        Ptr_Dictionary _retval_ = cv::aruco::Dictionary::create( (int)nMarkers, (int)markerSize );
        return (jlong)(new Ptr_Dictionary(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Ptr_Dictionary get(int dict)
//

using namespace cv::aruco;

JNIEXPORT jlong JNICALL Java_org_opencv_aruco_Dictionary_get_10 (JNIEnv*, jclass, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_aruco_Dictionary_get_10
  (JNIEnv* env, jclass , jint dict)
{
    static const char method_name[] = "aruco::get_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::aruco::Dictionary> Ptr_Dictionary;
        Ptr_Dictionary _retval_ = cv::aruco::Dictionary::get( (int)dict );
        return (jlong)(new Ptr_Dictionary(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void drawMarker(int id, int sidePixels, Mat& _img, int borderBits = 1)
//

using namespace cv::aruco;

JNIEXPORT void JNICALL Java_org_opencv_aruco_Dictionary_drawMarker_10 (JNIEnv*, jclass, jlong, jint, jint, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_aruco_Dictionary_drawMarker_10
  (JNIEnv* env, jclass , jlong self, jint id, jint sidePixels, jlong _img_nativeObj, jint borderBits)
{
    static const char method_name[] = "aruco::drawMarker_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::Dictionary>* me = (Ptr<cv::aruco::Dictionary>*) self; //TODO: check for NULL
        Mat& _img = *((Mat*)_img_nativeObj);
        (*me)->drawMarker( (int)id, (int)sidePixels, _img, (int)borderBits );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



using namespace cv::aruco;

JNIEXPORT void JNICALL Java_org_opencv_aruco_Dictionary_drawMarker_11 (JNIEnv*, jclass, jlong, jint, jint, jlong);

JNIEXPORT void JNICALL Java_org_opencv_aruco_Dictionary_drawMarker_11
  (JNIEnv* env, jclass , jlong self, jint id, jint sidePixels, jlong _img_nativeObj)
{
    static const char method_name[] = "aruco::drawMarker_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::Dictionary>* me = (Ptr<cv::aruco::Dictionary>*) self; //TODO: check for NULL
        Mat& _img = *((Mat*)_img_nativeObj);
        (*me)->drawMarker( (int)id, (int)sidePixels, _img );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// Mat Dictionary::bytesList
//

using namespace cv::aruco;

JNIEXPORT jlong JNICALL Java_org_opencv_aruco_Dictionary_get_1bytesList_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_aruco_Dictionary_get_1bytesList_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "aruco::get_1bytesList_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::Dictionary>* me = (Ptr<cv::aruco::Dictionary>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->bytesList;//(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// int Dictionary::markerSize
//

using namespace cv::aruco;

JNIEXPORT jint JNICALL Java_org_opencv_aruco_Dictionary_get_1markerSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_aruco_Dictionary_get_1markerSize_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "aruco::get_1markerSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::Dictionary>* me = (Ptr<cv::aruco::Dictionary>*) self; //TODO: check for NULL
        int _retval_ = (*me)->markerSize;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// int Dictionary::maxCorrectionBits
//

using namespace cv::aruco;

JNIEXPORT jint JNICALL Java_org_opencv_aruco_Dictionary_get_1maxCorrectionBits_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_aruco_Dictionary_get_1maxCorrectionBits_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "aruco::get_1maxCorrectionBits_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::Dictionary>* me = (Ptr<cv::aruco::Dictionary>*) self; //TODO: check for NULL
        int _retval_ = (*me)->maxCorrectionBits;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::aruco::Dictionary>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_aruco_Dictionary_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_aruco_Dictionary_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::aruco::Dictionary>*) self;
}


//
// static Ptr_GridBoard create(int markersX, int markersY, float markerLength, float markerSeparation, Ptr_Dictionary dictionary, int firstMarker = 0)
//

using namespace cv::aruco;

JNIEXPORT jlong JNICALL Java_org_opencv_aruco_GridBoard_create_10 (JNIEnv*, jclass, jint, jint, jfloat, jfloat, jlong, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_aruco_GridBoard_create_10
  (JNIEnv* env, jclass , jint markersX, jint markersY, jfloat markerLength, jfloat markerSeparation, jlong dictionary_nativeObj, jint firstMarker)
{
    static const char method_name[] = "aruco::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::aruco::GridBoard> Ptr_GridBoard;
        Ptr_GridBoard _retval_ = cv::aruco::GridBoard::create( (int)markersX, (int)markersY, (float)markerLength, (float)markerSeparation, *((Ptr<cv::aruco::Dictionary>*)dictionary_nativeObj), (int)firstMarker );
        return (jlong)(new Ptr_GridBoard(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::aruco;

JNIEXPORT jlong JNICALL Java_org_opencv_aruco_GridBoard_create_11 (JNIEnv*, jclass, jint, jint, jfloat, jfloat, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_aruco_GridBoard_create_11
  (JNIEnv* env, jclass , jint markersX, jint markersY, jfloat markerLength, jfloat markerSeparation, jlong dictionary_nativeObj)
{
    static const char method_name[] = "aruco::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::aruco::GridBoard> Ptr_GridBoard;
        Ptr_GridBoard _retval_ = cv::aruco::GridBoard::create( (int)markersX, (int)markersY, (float)markerLength, (float)markerSeparation, *((Ptr<cv::aruco::Dictionary>*)dictionary_nativeObj) );
        return (jlong)(new Ptr_GridBoard(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Size getGridSize()
//

using namespace cv::aruco;

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_aruco_GridBoard_getGridSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_aruco_GridBoard_getGridSize_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "aruco::getGridSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::GridBoard>* me = (Ptr<cv::aruco::GridBoard>*) self; //TODO: check for NULL
        Size _retval_ = (*me)->getGridSize(  );
        jdoubleArray _da_retval_ = env->NewDoubleArray(2);  jdouble _tmp_retval_[2] = {(jdouble)_retval_.width, (jdouble)_retval_.height}; env->SetDoubleArrayRegion(_da_retval_, 0, 2, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float getMarkerLength()
//

using namespace cv::aruco;

JNIEXPORT jfloat JNICALL Java_org_opencv_aruco_GridBoard_getMarkerLength_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_aruco_GridBoard_getMarkerLength_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "aruco::getMarkerLength_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::GridBoard>* me = (Ptr<cv::aruco::GridBoard>*) self; //TODO: check for NULL
        float _retval_ = (*me)->getMarkerLength(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float getMarkerSeparation()
//

using namespace cv::aruco;

JNIEXPORT jfloat JNICALL Java_org_opencv_aruco_GridBoard_getMarkerSeparation_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_aruco_GridBoard_getMarkerSeparation_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "aruco::getMarkerSeparation_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::GridBoard>* me = (Ptr<cv::aruco::GridBoard>*) self; //TODO: check for NULL
        float _retval_ = (*me)->getMarkerSeparation(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void draw(Size outSize, Mat& img, int marginSize = 0, int borderBits = 1)
//

using namespace cv::aruco;

JNIEXPORT void JNICALL Java_org_opencv_aruco_GridBoard_draw_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_aruco_GridBoard_draw_10
  (JNIEnv* env, jclass , jlong self, jdouble outSize_width, jdouble outSize_height, jlong img_nativeObj, jint marginSize, jint borderBits)
{
    static const char method_name[] = "aruco::draw_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::GridBoard>* me = (Ptr<cv::aruco::GridBoard>*) self; //TODO: check for NULL
        Size outSize((int)outSize_width, (int)outSize_height);
        Mat& img = *((Mat*)img_nativeObj);
        (*me)->draw( outSize, img, (int)marginSize, (int)borderBits );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



using namespace cv::aruco;

JNIEXPORT void JNICALL Java_org_opencv_aruco_GridBoard_draw_11 (JNIEnv*, jclass, jlong, jdouble, jdouble, jlong);

JNIEXPORT void JNICALL Java_org_opencv_aruco_GridBoard_draw_11
  (JNIEnv* env, jclass , jlong self, jdouble outSize_width, jdouble outSize_height, jlong img_nativeObj)
{
    static const char method_name[] = "aruco::draw_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::GridBoard>* me = (Ptr<cv::aruco::GridBoard>*) self; //TODO: check for NULL
        Size outSize((int)outSize_width, (int)outSize_height);
        Mat& img = *((Mat*)img_nativeObj);
        (*me)->draw( outSize, img );
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
//  static void Ptr<cv::aruco::GridBoard>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_aruco_GridBoard_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_aruco_GridBoard_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::aruco::GridBoard>*) self;
}


//
// static Ptr_Board create(vector_Mat objPoints, Ptr_Dictionary dictionary, Mat ids)
//

using namespace cv::aruco;

JNIEXPORT jlong JNICALL Java_org_opencv_aruco_Board_create_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_aruco_Board_create_10
  (JNIEnv* env, jclass , jlong objPoints_mat_nativeObj, jlong dictionary_nativeObj, jlong ids_nativeObj)
{
    static const char method_name[] = "aruco::create_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> objPoints;
        Mat& objPoints_mat = *((Mat*)objPoints_mat_nativeObj);
        Mat_to_vector_Mat( objPoints_mat, objPoints );
        typedef Ptr<cv::aruco::Board> Ptr_Board;
        Mat& ids = *((Mat*)ids_nativeObj);
        Ptr_Board _retval_ = cv::aruco::Board::create( objPoints, *((Ptr<cv::aruco::Dictionary>*)dictionary_nativeObj), ids );
        return (jlong)(new Ptr_Board(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// vector_vector_Point3f Board::objPoints
//

using namespace cv::aruco;

JNIEXPORT jlong JNICALL Java_org_opencv_aruco_Board_get_1objPoints_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_aruco_Board_get_1objPoints_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "aruco::get_1objPoints_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::Board>* me = (Ptr<cv::aruco::Board>*) self; //TODO: check for NULL
        std::vector< std::vector<Point3f> > _ret_val_vector_ = (*me)->objPoints;//(  );
        Mat* _retval_ = new Mat();  vector_vector_Point3f_to_Mat(_ret_val_vector_, *_retval_);
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// Ptr_Dictionary Board::dictionary
//

using namespace cv::aruco;

JNIEXPORT jlong JNICALL Java_org_opencv_aruco_Board_get_1dictionary_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_aruco_Board_get_1dictionary_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "aruco::get_1dictionary_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::aruco::Dictionary> Ptr_Dictionary;
        Ptr<cv::aruco::Board>* me = (Ptr<cv::aruco::Board>*) self; //TODO: check for NULL
        Ptr_Dictionary _retval_ = (*me)->dictionary;//(  );
        return (jlong)(new Ptr_Dictionary(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// vector_int Board::ids
//

using namespace cv::aruco;

JNIEXPORT jlong JNICALL Java_org_opencv_aruco_Board_get_1ids_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_aruco_Board_get_1ids_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "aruco::get_1ids_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::Board>* me = (Ptr<cv::aruco::Board>*) self; //TODO: check for NULL
        std::vector<int> _ret_val_vector_ = (*me)->ids;//(  );
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
//  native support for java finalize()
//  static void Ptr<cv::aruco::Board>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_aruco_Board_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_aruco_Board_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::aruco::Board>*) self;
}


//
//  Ptr_Dictionary generateCustomDictionary(int nMarkers, int markerSize, Ptr_Dictionary baseDictionary)
//



JNIEXPORT jlong JNICALL Java_org_opencv_aruco_Aruco_custom_1dictionary_1from_10 (JNIEnv*, jclass, jint, jint, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_aruco_Aruco_custom_1dictionary_1from_10
  (JNIEnv* env, jclass , jint nMarkers, jint markerSize, jlong baseDictionary_nativeObj)
{
    static const char method_name[] = "aruco::custom_1dictionary_1from_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::aruco::Dictionary> Ptr_Dictionary;
        Ptr_Dictionary _retval_ = cv::aruco::generateCustomDictionary( (int)nMarkers, (int)markerSize, *((Ptr<cv::aruco::Dictionary>*)baseDictionary_nativeObj) );
        return (jlong)(new Ptr_Dictionary(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_Dictionary generateCustomDictionary(int nMarkers, int markerSize)
//



JNIEXPORT jlong JNICALL Java_org_opencv_aruco_Aruco_custom_1dictionary_10 (JNIEnv*, jclass, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_aruco_Aruco_custom_1dictionary_10
  (JNIEnv* env, jclass , jint nMarkers, jint markerSize)
{
    static const char method_name[] = "aruco::custom_1dictionary_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::aruco::Dictionary> Ptr_Dictionary;
        Ptr_Dictionary _retval_ = cv::aruco::generateCustomDictionary( (int)nMarkers, (int)markerSize );
        return (jlong)(new Ptr_Dictionary(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_Dictionary getPredefinedDictionary(int dict)
//



JNIEXPORT jlong JNICALL Java_org_opencv_aruco_Aruco_getPredefinedDictionary_10 (JNIEnv*, jclass, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_aruco_Aruco_getPredefinedDictionary_10
  (JNIEnv* env, jclass , jint dict)
{
    static const char method_name[] = "aruco::getPredefinedDictionary_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::aruco::Dictionary> Ptr_Dictionary;
        Ptr_Dictionary _retval_ = cv::aruco::getPredefinedDictionary( (int)dict );
        return (jlong)(new Ptr_Dictionary(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool estimatePoseCharucoBoard(Mat charucoCorners, Mat charucoIds, Ptr_CharucoBoard board, Mat cameraMatrix, Mat distCoeffs, Mat& rvec, Mat& tvec, bool useExtrinsicGuess = false)
//



JNIEXPORT jboolean JNICALL Java_org_opencv_aruco_Aruco_estimatePoseCharucoBoard_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jboolean);

JNIEXPORT jboolean JNICALL Java_org_opencv_aruco_Aruco_estimatePoseCharucoBoard_10
  (JNIEnv* env, jclass , jlong charucoCorners_nativeObj, jlong charucoIds_nativeObj, jlong board_nativeObj, jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj, jlong rvec_nativeObj, jlong tvec_nativeObj, jboolean useExtrinsicGuess)
{
    static const char method_name[] = "aruco::estimatePoseCharucoBoard_10()";
    try {
        LOGD("%s", method_name);
        Mat& charucoCorners = *((Mat*)charucoCorners_nativeObj);
        Mat& charucoIds = *((Mat*)charucoIds_nativeObj);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        Mat& rvec = *((Mat*)rvec_nativeObj);
        Mat& tvec = *((Mat*)tvec_nativeObj);
        bool _retval_ = cv::aruco::estimatePoseCharucoBoard( charucoCorners, charucoIds, *((Ptr<cv::aruco::CharucoBoard>*)board_nativeObj), cameraMatrix, distCoeffs, rvec, tvec, (bool)useExtrinsicGuess );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jboolean JNICALL Java_org_opencv_aruco_Aruco_estimatePoseCharucoBoard_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_aruco_Aruco_estimatePoseCharucoBoard_11
  (JNIEnv* env, jclass , jlong charucoCorners_nativeObj, jlong charucoIds_nativeObj, jlong board_nativeObj, jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj, jlong rvec_nativeObj, jlong tvec_nativeObj)
{
    static const char method_name[] = "aruco::estimatePoseCharucoBoard_11()";
    try {
        LOGD("%s", method_name);
        Mat& charucoCorners = *((Mat*)charucoCorners_nativeObj);
        Mat& charucoIds = *((Mat*)charucoIds_nativeObj);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        Mat& rvec = *((Mat*)rvec_nativeObj);
        Mat& tvec = *((Mat*)tvec_nativeObj);
        bool _retval_ = cv::aruco::estimatePoseCharucoBoard( charucoCorners, charucoIds, *((Ptr<cv::aruco::CharucoBoard>*)board_nativeObj), cameraMatrix, distCoeffs, rvec, tvec );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double calibrateCameraAruco(vector_Mat corners, Mat ids, Mat counter, Ptr_Board board, Size imageSize, Mat& cameraMatrix, Mat& distCoeffs, vector_Mat& rvecs, vector_Mat& tvecs, Mat& stdDeviationsIntrinsics, Mat& stdDeviationsExtrinsics, Mat& perViewErrors, int flags = 0, TermCriteria criteria = TermCriteria(TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON))
//



JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_Aruco_calibrateCameraArucoExtended_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble, jdouble, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jint, jint, jint, jdouble);

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_Aruco_calibrateCameraArucoExtended_10
  (JNIEnv* env, jclass , jlong corners_mat_nativeObj, jlong ids_nativeObj, jlong counter_nativeObj, jlong board_nativeObj, jdouble imageSize_width, jdouble imageSize_height, jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj, jlong rvecs_mat_nativeObj, jlong tvecs_mat_nativeObj, jlong stdDeviationsIntrinsics_nativeObj, jlong stdDeviationsExtrinsics_nativeObj, jlong perViewErrors_nativeObj, jint flags, jint criteria_type, jint criteria_maxCount, jdouble criteria_epsilon)
{
    static const char method_name[] = "aruco::calibrateCameraArucoExtended_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> corners;
        Mat& corners_mat = *((Mat*)corners_mat_nativeObj);
        Mat_to_vector_Mat( corners_mat, corners );
        std::vector<Mat> rvecs;
        Mat& rvecs_mat = *((Mat*)rvecs_mat_nativeObj);
        std::vector<Mat> tvecs;
        Mat& tvecs_mat = *((Mat*)tvecs_mat_nativeObj);
        Mat& ids = *((Mat*)ids_nativeObj);
        Mat& counter = *((Mat*)counter_nativeObj);
        Size imageSize((int)imageSize_width, (int)imageSize_height);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        Mat& stdDeviationsIntrinsics = *((Mat*)stdDeviationsIntrinsics_nativeObj);
        Mat& stdDeviationsExtrinsics = *((Mat*)stdDeviationsExtrinsics_nativeObj);
        Mat& perViewErrors = *((Mat*)perViewErrors_nativeObj);
        TermCriteria criteria(criteria_type, criteria_maxCount, criteria_epsilon);
        double _retval_ = cv::aruco::calibrateCameraAruco( corners, ids, counter, *((Ptr<cv::aruco::Board>*)board_nativeObj), imageSize, cameraMatrix, distCoeffs, rvecs, tvecs, stdDeviationsIntrinsics, stdDeviationsExtrinsics, perViewErrors, (int)flags, criteria );
        vector_Mat_to_Mat( rvecs, rvecs_mat );  vector_Mat_to_Mat( tvecs, tvecs_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_Aruco_calibrateCameraArucoExtended_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble, jdouble, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jint);

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_Aruco_calibrateCameraArucoExtended_11
  (JNIEnv* env, jclass , jlong corners_mat_nativeObj, jlong ids_nativeObj, jlong counter_nativeObj, jlong board_nativeObj, jdouble imageSize_width, jdouble imageSize_height, jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj, jlong rvecs_mat_nativeObj, jlong tvecs_mat_nativeObj, jlong stdDeviationsIntrinsics_nativeObj, jlong stdDeviationsExtrinsics_nativeObj, jlong perViewErrors_nativeObj, jint flags)
{
    static const char method_name[] = "aruco::calibrateCameraArucoExtended_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> corners;
        Mat& corners_mat = *((Mat*)corners_mat_nativeObj);
        Mat_to_vector_Mat( corners_mat, corners );
        std::vector<Mat> rvecs;
        Mat& rvecs_mat = *((Mat*)rvecs_mat_nativeObj);
        std::vector<Mat> tvecs;
        Mat& tvecs_mat = *((Mat*)tvecs_mat_nativeObj);
        Mat& ids = *((Mat*)ids_nativeObj);
        Mat& counter = *((Mat*)counter_nativeObj);
        Size imageSize((int)imageSize_width, (int)imageSize_height);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        Mat& stdDeviationsIntrinsics = *((Mat*)stdDeviationsIntrinsics_nativeObj);
        Mat& stdDeviationsExtrinsics = *((Mat*)stdDeviationsExtrinsics_nativeObj);
        Mat& perViewErrors = *((Mat*)perViewErrors_nativeObj);
        double _retval_ = cv::aruco::calibrateCameraAruco( corners, ids, counter, *((Ptr<cv::aruco::Board>*)board_nativeObj), imageSize, cameraMatrix, distCoeffs, rvecs, tvecs, stdDeviationsIntrinsics, stdDeviationsExtrinsics, perViewErrors, (int)flags );
        vector_Mat_to_Mat( rvecs, rvecs_mat );  vector_Mat_to_Mat( tvecs, tvecs_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_Aruco_calibrateCameraArucoExtended_12 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble, jdouble, jlong, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_Aruco_calibrateCameraArucoExtended_12
  (JNIEnv* env, jclass , jlong corners_mat_nativeObj, jlong ids_nativeObj, jlong counter_nativeObj, jlong board_nativeObj, jdouble imageSize_width, jdouble imageSize_height, jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj, jlong rvecs_mat_nativeObj, jlong tvecs_mat_nativeObj, jlong stdDeviationsIntrinsics_nativeObj, jlong stdDeviationsExtrinsics_nativeObj, jlong perViewErrors_nativeObj)
{
    static const char method_name[] = "aruco::calibrateCameraArucoExtended_12()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> corners;
        Mat& corners_mat = *((Mat*)corners_mat_nativeObj);
        Mat_to_vector_Mat( corners_mat, corners );
        std::vector<Mat> rvecs;
        Mat& rvecs_mat = *((Mat*)rvecs_mat_nativeObj);
        std::vector<Mat> tvecs;
        Mat& tvecs_mat = *((Mat*)tvecs_mat_nativeObj);
        Mat& ids = *((Mat*)ids_nativeObj);
        Mat& counter = *((Mat*)counter_nativeObj);
        Size imageSize((int)imageSize_width, (int)imageSize_height);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        Mat& stdDeviationsIntrinsics = *((Mat*)stdDeviationsIntrinsics_nativeObj);
        Mat& stdDeviationsExtrinsics = *((Mat*)stdDeviationsExtrinsics_nativeObj);
        Mat& perViewErrors = *((Mat*)perViewErrors_nativeObj);
        double _retval_ = cv::aruco::calibrateCameraAruco( corners, ids, counter, *((Ptr<cv::aruco::Board>*)board_nativeObj), imageSize, cameraMatrix, distCoeffs, rvecs, tvecs, stdDeviationsIntrinsics, stdDeviationsExtrinsics, perViewErrors );
        vector_Mat_to_Mat( rvecs, rvecs_mat );  vector_Mat_to_Mat( tvecs, tvecs_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double calibrateCameraAruco(vector_Mat corners, Mat ids, Mat counter, Ptr_Board board, Size imageSize, Mat& cameraMatrix, Mat& distCoeffs, vector_Mat& rvecs = vector_Mat(), vector_Mat& tvecs = vector_Mat(), int flags = 0, TermCriteria criteria = TermCriteria(TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON))
//



JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_Aruco_calibrateCameraAruco_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble, jdouble, jlong, jlong, jlong, jlong, jint, jint, jint, jdouble);

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_Aruco_calibrateCameraAruco_10
  (JNIEnv* env, jclass , jlong corners_mat_nativeObj, jlong ids_nativeObj, jlong counter_nativeObj, jlong board_nativeObj, jdouble imageSize_width, jdouble imageSize_height, jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj, jlong rvecs_mat_nativeObj, jlong tvecs_mat_nativeObj, jint flags, jint criteria_type, jint criteria_maxCount, jdouble criteria_epsilon)
{
    static const char method_name[] = "aruco::calibrateCameraAruco_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> corners;
        Mat& corners_mat = *((Mat*)corners_mat_nativeObj);
        Mat_to_vector_Mat( corners_mat, corners );
        std::vector<Mat> rvecs;
        Mat& rvecs_mat = *((Mat*)rvecs_mat_nativeObj);
        std::vector<Mat> tvecs;
        Mat& tvecs_mat = *((Mat*)tvecs_mat_nativeObj);
        Mat& ids = *((Mat*)ids_nativeObj);
        Mat& counter = *((Mat*)counter_nativeObj);
        Size imageSize((int)imageSize_width, (int)imageSize_height);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        TermCriteria criteria(criteria_type, criteria_maxCount, criteria_epsilon);
        double _retval_ = cv::aruco::calibrateCameraAruco( corners, ids, counter, *((Ptr<cv::aruco::Board>*)board_nativeObj), imageSize, cameraMatrix, distCoeffs, rvecs, tvecs, (int)flags, criteria );
        vector_Mat_to_Mat( rvecs, rvecs_mat );  vector_Mat_to_Mat( tvecs, tvecs_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_Aruco_calibrateCameraAruco_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble, jdouble, jlong, jlong, jlong, jlong, jint);

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_Aruco_calibrateCameraAruco_11
  (JNIEnv* env, jclass , jlong corners_mat_nativeObj, jlong ids_nativeObj, jlong counter_nativeObj, jlong board_nativeObj, jdouble imageSize_width, jdouble imageSize_height, jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj, jlong rvecs_mat_nativeObj, jlong tvecs_mat_nativeObj, jint flags)
{
    static const char method_name[] = "aruco::calibrateCameraAruco_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> corners;
        Mat& corners_mat = *((Mat*)corners_mat_nativeObj);
        Mat_to_vector_Mat( corners_mat, corners );
        std::vector<Mat> rvecs;
        Mat& rvecs_mat = *((Mat*)rvecs_mat_nativeObj);
        std::vector<Mat> tvecs;
        Mat& tvecs_mat = *((Mat*)tvecs_mat_nativeObj);
        Mat& ids = *((Mat*)ids_nativeObj);
        Mat& counter = *((Mat*)counter_nativeObj);
        Size imageSize((int)imageSize_width, (int)imageSize_height);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        double _retval_ = cv::aruco::calibrateCameraAruco( corners, ids, counter, *((Ptr<cv::aruco::Board>*)board_nativeObj), imageSize, cameraMatrix, distCoeffs, rvecs, tvecs, (int)flags );
        vector_Mat_to_Mat( rvecs, rvecs_mat );  vector_Mat_to_Mat( tvecs, tvecs_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_Aruco_calibrateCameraAruco_12 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble, jdouble, jlong, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_Aruco_calibrateCameraAruco_12
  (JNIEnv* env, jclass , jlong corners_mat_nativeObj, jlong ids_nativeObj, jlong counter_nativeObj, jlong board_nativeObj, jdouble imageSize_width, jdouble imageSize_height, jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj)
{
    static const char method_name[] = "aruco::calibrateCameraAruco_12()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> corners;
        Mat& corners_mat = *((Mat*)corners_mat_nativeObj);
        Mat_to_vector_Mat( corners_mat, corners );
        Mat& ids = *((Mat*)ids_nativeObj);
        Mat& counter = *((Mat*)counter_nativeObj);
        Size imageSize((int)imageSize_width, (int)imageSize_height);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        double _retval_ = cv::aruco::calibrateCameraAruco( corners, ids, counter, *((Ptr<cv::aruco::Board>*)board_nativeObj), imageSize, cameraMatrix, distCoeffs );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double calibrateCameraCharuco(vector_Mat charucoCorners, vector_Mat charucoIds, Ptr_CharucoBoard board, Size imageSize, Mat& cameraMatrix, Mat& distCoeffs, vector_Mat& rvecs, vector_Mat& tvecs, Mat& stdDeviationsIntrinsics, Mat& stdDeviationsExtrinsics, Mat& perViewErrors, int flags = 0, TermCriteria criteria = TermCriteria(TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON))
//



JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_Aruco_calibrateCameraCharucoExtended_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jint, jint, jint, jdouble);

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_Aruco_calibrateCameraCharucoExtended_10
  (JNIEnv* env, jclass , jlong charucoCorners_mat_nativeObj, jlong charucoIds_mat_nativeObj, jlong board_nativeObj, jdouble imageSize_width, jdouble imageSize_height, jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj, jlong rvecs_mat_nativeObj, jlong tvecs_mat_nativeObj, jlong stdDeviationsIntrinsics_nativeObj, jlong stdDeviationsExtrinsics_nativeObj, jlong perViewErrors_nativeObj, jint flags, jint criteria_type, jint criteria_maxCount, jdouble criteria_epsilon)
{
    static const char method_name[] = "aruco::calibrateCameraCharucoExtended_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> charucoCorners;
        Mat& charucoCorners_mat = *((Mat*)charucoCorners_mat_nativeObj);
        Mat_to_vector_Mat( charucoCorners_mat, charucoCorners );
        std::vector<Mat> charucoIds;
        Mat& charucoIds_mat = *((Mat*)charucoIds_mat_nativeObj);
        Mat_to_vector_Mat( charucoIds_mat, charucoIds );
        std::vector<Mat> rvecs;
        Mat& rvecs_mat = *((Mat*)rvecs_mat_nativeObj);
        std::vector<Mat> tvecs;
        Mat& tvecs_mat = *((Mat*)tvecs_mat_nativeObj);
        Size imageSize((int)imageSize_width, (int)imageSize_height);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        Mat& stdDeviationsIntrinsics = *((Mat*)stdDeviationsIntrinsics_nativeObj);
        Mat& stdDeviationsExtrinsics = *((Mat*)stdDeviationsExtrinsics_nativeObj);
        Mat& perViewErrors = *((Mat*)perViewErrors_nativeObj);
        TermCriteria criteria(criteria_type, criteria_maxCount, criteria_epsilon);
        double _retval_ = cv::aruco::calibrateCameraCharuco( charucoCorners, charucoIds, *((Ptr<cv::aruco::CharucoBoard>*)board_nativeObj), imageSize, cameraMatrix, distCoeffs, rvecs, tvecs, stdDeviationsIntrinsics, stdDeviationsExtrinsics, perViewErrors, (int)flags, criteria );
        vector_Mat_to_Mat( rvecs, rvecs_mat );  vector_Mat_to_Mat( tvecs, tvecs_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_Aruco_calibrateCameraCharucoExtended_11 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jint);

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_Aruco_calibrateCameraCharucoExtended_11
  (JNIEnv* env, jclass , jlong charucoCorners_mat_nativeObj, jlong charucoIds_mat_nativeObj, jlong board_nativeObj, jdouble imageSize_width, jdouble imageSize_height, jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj, jlong rvecs_mat_nativeObj, jlong tvecs_mat_nativeObj, jlong stdDeviationsIntrinsics_nativeObj, jlong stdDeviationsExtrinsics_nativeObj, jlong perViewErrors_nativeObj, jint flags)
{
    static const char method_name[] = "aruco::calibrateCameraCharucoExtended_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> charucoCorners;
        Mat& charucoCorners_mat = *((Mat*)charucoCorners_mat_nativeObj);
        Mat_to_vector_Mat( charucoCorners_mat, charucoCorners );
        std::vector<Mat> charucoIds;
        Mat& charucoIds_mat = *((Mat*)charucoIds_mat_nativeObj);
        Mat_to_vector_Mat( charucoIds_mat, charucoIds );
        std::vector<Mat> rvecs;
        Mat& rvecs_mat = *((Mat*)rvecs_mat_nativeObj);
        std::vector<Mat> tvecs;
        Mat& tvecs_mat = *((Mat*)tvecs_mat_nativeObj);
        Size imageSize((int)imageSize_width, (int)imageSize_height);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        Mat& stdDeviationsIntrinsics = *((Mat*)stdDeviationsIntrinsics_nativeObj);
        Mat& stdDeviationsExtrinsics = *((Mat*)stdDeviationsExtrinsics_nativeObj);
        Mat& perViewErrors = *((Mat*)perViewErrors_nativeObj);
        double _retval_ = cv::aruco::calibrateCameraCharuco( charucoCorners, charucoIds, *((Ptr<cv::aruco::CharucoBoard>*)board_nativeObj), imageSize, cameraMatrix, distCoeffs, rvecs, tvecs, stdDeviationsIntrinsics, stdDeviationsExtrinsics, perViewErrors, (int)flags );
        vector_Mat_to_Mat( rvecs, rvecs_mat );  vector_Mat_to_Mat( tvecs, tvecs_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_Aruco_calibrateCameraCharucoExtended_12 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jlong, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_Aruco_calibrateCameraCharucoExtended_12
  (JNIEnv* env, jclass , jlong charucoCorners_mat_nativeObj, jlong charucoIds_mat_nativeObj, jlong board_nativeObj, jdouble imageSize_width, jdouble imageSize_height, jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj, jlong rvecs_mat_nativeObj, jlong tvecs_mat_nativeObj, jlong stdDeviationsIntrinsics_nativeObj, jlong stdDeviationsExtrinsics_nativeObj, jlong perViewErrors_nativeObj)
{
    static const char method_name[] = "aruco::calibrateCameraCharucoExtended_12()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> charucoCorners;
        Mat& charucoCorners_mat = *((Mat*)charucoCorners_mat_nativeObj);
        Mat_to_vector_Mat( charucoCorners_mat, charucoCorners );
        std::vector<Mat> charucoIds;
        Mat& charucoIds_mat = *((Mat*)charucoIds_mat_nativeObj);
        Mat_to_vector_Mat( charucoIds_mat, charucoIds );
        std::vector<Mat> rvecs;
        Mat& rvecs_mat = *((Mat*)rvecs_mat_nativeObj);
        std::vector<Mat> tvecs;
        Mat& tvecs_mat = *((Mat*)tvecs_mat_nativeObj);
        Size imageSize((int)imageSize_width, (int)imageSize_height);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        Mat& stdDeviationsIntrinsics = *((Mat*)stdDeviationsIntrinsics_nativeObj);
        Mat& stdDeviationsExtrinsics = *((Mat*)stdDeviationsExtrinsics_nativeObj);
        Mat& perViewErrors = *((Mat*)perViewErrors_nativeObj);
        double _retval_ = cv::aruco::calibrateCameraCharuco( charucoCorners, charucoIds, *((Ptr<cv::aruco::CharucoBoard>*)board_nativeObj), imageSize, cameraMatrix, distCoeffs, rvecs, tvecs, stdDeviationsIntrinsics, stdDeviationsExtrinsics, perViewErrors );
        vector_Mat_to_Mat( rvecs, rvecs_mat );  vector_Mat_to_Mat( tvecs, tvecs_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double calibrateCameraCharuco(vector_Mat charucoCorners, vector_Mat charucoIds, Ptr_CharucoBoard board, Size imageSize, Mat& cameraMatrix, Mat& distCoeffs, vector_Mat& rvecs = vector_Mat(), vector_Mat& tvecs = vector_Mat(), int flags = 0, TermCriteria criteria = TermCriteria(TermCriteria::COUNT + TermCriteria::EPS, 30, DBL_EPSILON))
//



JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_Aruco_calibrateCameraCharuco_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jlong, jlong, jlong, jlong, jint, jint, jint, jdouble);

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_Aruco_calibrateCameraCharuco_10
  (JNIEnv* env, jclass , jlong charucoCorners_mat_nativeObj, jlong charucoIds_mat_nativeObj, jlong board_nativeObj, jdouble imageSize_width, jdouble imageSize_height, jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj, jlong rvecs_mat_nativeObj, jlong tvecs_mat_nativeObj, jint flags, jint criteria_type, jint criteria_maxCount, jdouble criteria_epsilon)
{
    static const char method_name[] = "aruco::calibrateCameraCharuco_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> charucoCorners;
        Mat& charucoCorners_mat = *((Mat*)charucoCorners_mat_nativeObj);
        Mat_to_vector_Mat( charucoCorners_mat, charucoCorners );
        std::vector<Mat> charucoIds;
        Mat& charucoIds_mat = *((Mat*)charucoIds_mat_nativeObj);
        Mat_to_vector_Mat( charucoIds_mat, charucoIds );
        std::vector<Mat> rvecs;
        Mat& rvecs_mat = *((Mat*)rvecs_mat_nativeObj);
        std::vector<Mat> tvecs;
        Mat& tvecs_mat = *((Mat*)tvecs_mat_nativeObj);
        Size imageSize((int)imageSize_width, (int)imageSize_height);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        TermCriteria criteria(criteria_type, criteria_maxCount, criteria_epsilon);
        double _retval_ = cv::aruco::calibrateCameraCharuco( charucoCorners, charucoIds, *((Ptr<cv::aruco::CharucoBoard>*)board_nativeObj), imageSize, cameraMatrix, distCoeffs, rvecs, tvecs, (int)flags, criteria );
        vector_Mat_to_Mat( rvecs, rvecs_mat );  vector_Mat_to_Mat( tvecs, tvecs_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_Aruco_calibrateCameraCharuco_11 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jlong, jlong, jlong, jlong, jint);

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_Aruco_calibrateCameraCharuco_11
  (JNIEnv* env, jclass , jlong charucoCorners_mat_nativeObj, jlong charucoIds_mat_nativeObj, jlong board_nativeObj, jdouble imageSize_width, jdouble imageSize_height, jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj, jlong rvecs_mat_nativeObj, jlong tvecs_mat_nativeObj, jint flags)
{
    static const char method_name[] = "aruco::calibrateCameraCharuco_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> charucoCorners;
        Mat& charucoCorners_mat = *((Mat*)charucoCorners_mat_nativeObj);
        Mat_to_vector_Mat( charucoCorners_mat, charucoCorners );
        std::vector<Mat> charucoIds;
        Mat& charucoIds_mat = *((Mat*)charucoIds_mat_nativeObj);
        Mat_to_vector_Mat( charucoIds_mat, charucoIds );
        std::vector<Mat> rvecs;
        Mat& rvecs_mat = *((Mat*)rvecs_mat_nativeObj);
        std::vector<Mat> tvecs;
        Mat& tvecs_mat = *((Mat*)tvecs_mat_nativeObj);
        Size imageSize((int)imageSize_width, (int)imageSize_height);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        double _retval_ = cv::aruco::calibrateCameraCharuco( charucoCorners, charucoIds, *((Ptr<cv::aruco::CharucoBoard>*)board_nativeObj), imageSize, cameraMatrix, distCoeffs, rvecs, tvecs, (int)flags );
        vector_Mat_to_Mat( rvecs, rvecs_mat );  vector_Mat_to_Mat( tvecs, tvecs_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_Aruco_calibrateCameraCharuco_12 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jlong, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_aruco_Aruco_calibrateCameraCharuco_12
  (JNIEnv* env, jclass , jlong charucoCorners_mat_nativeObj, jlong charucoIds_mat_nativeObj, jlong board_nativeObj, jdouble imageSize_width, jdouble imageSize_height, jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj)
{
    static const char method_name[] = "aruco::calibrateCameraCharuco_12()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> charucoCorners;
        Mat& charucoCorners_mat = *((Mat*)charucoCorners_mat_nativeObj);
        Mat_to_vector_Mat( charucoCorners_mat, charucoCorners );
        std::vector<Mat> charucoIds;
        Mat& charucoIds_mat = *((Mat*)charucoIds_mat_nativeObj);
        Mat_to_vector_Mat( charucoIds_mat, charucoIds );
        Size imageSize((int)imageSize_width, (int)imageSize_height);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        double _retval_ = cv::aruco::calibrateCameraCharuco( charucoCorners, charucoIds, *((Ptr<cv::aruco::CharucoBoard>*)board_nativeObj), imageSize, cameraMatrix, distCoeffs );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int estimatePoseBoard(vector_Mat corners, Mat ids, Ptr_Board board, Mat cameraMatrix, Mat distCoeffs, Mat& rvec, Mat& tvec, bool useExtrinsicGuess = false)
//



JNIEXPORT jint JNICALL Java_org_opencv_aruco_Aruco_estimatePoseBoard_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jboolean);

JNIEXPORT jint JNICALL Java_org_opencv_aruco_Aruco_estimatePoseBoard_10
  (JNIEnv* env, jclass , jlong corners_mat_nativeObj, jlong ids_nativeObj, jlong board_nativeObj, jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj, jlong rvec_nativeObj, jlong tvec_nativeObj, jboolean useExtrinsicGuess)
{
    static const char method_name[] = "aruco::estimatePoseBoard_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> corners;
        Mat& corners_mat = *((Mat*)corners_mat_nativeObj);
        Mat_to_vector_Mat( corners_mat, corners );
        Mat& ids = *((Mat*)ids_nativeObj);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        Mat& rvec = *((Mat*)rvec_nativeObj);
        Mat& tvec = *((Mat*)tvec_nativeObj);
        int _retval_ = cv::aruco::estimatePoseBoard( corners, ids, *((Ptr<cv::aruco::Board>*)board_nativeObj), cameraMatrix, distCoeffs, rvec, tvec, (bool)useExtrinsicGuess );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jint JNICALL Java_org_opencv_aruco_Aruco_estimatePoseBoard_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_aruco_Aruco_estimatePoseBoard_11
  (JNIEnv* env, jclass , jlong corners_mat_nativeObj, jlong ids_nativeObj, jlong board_nativeObj, jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj, jlong rvec_nativeObj, jlong tvec_nativeObj)
{
    static const char method_name[] = "aruco::estimatePoseBoard_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> corners;
        Mat& corners_mat = *((Mat*)corners_mat_nativeObj);
        Mat_to_vector_Mat( corners_mat, corners );
        Mat& ids = *((Mat*)ids_nativeObj);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        Mat& rvec = *((Mat*)rvec_nativeObj);
        Mat& tvec = *((Mat*)tvec_nativeObj);
        int _retval_ = cv::aruco::estimatePoseBoard( corners, ids, *((Ptr<cv::aruco::Board>*)board_nativeObj), cameraMatrix, distCoeffs, rvec, tvec );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int interpolateCornersCharuco(vector_Mat markerCorners, Mat markerIds, Mat image, Ptr_CharucoBoard board, Mat& charucoCorners, Mat& charucoIds, Mat cameraMatrix = Mat(), Mat distCoeffs = Mat(), int minMarkers = 2)
//



JNIEXPORT jint JNICALL Java_org_opencv_aruco_Aruco_interpolateCornersCharuco_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jint);

JNIEXPORT jint JNICALL Java_org_opencv_aruco_Aruco_interpolateCornersCharuco_10
  (JNIEnv* env, jclass , jlong markerCorners_mat_nativeObj, jlong markerIds_nativeObj, jlong image_nativeObj, jlong board_nativeObj, jlong charucoCorners_nativeObj, jlong charucoIds_nativeObj, jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj, jint minMarkers)
{
    static const char method_name[] = "aruco::interpolateCornersCharuco_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> markerCorners;
        Mat& markerCorners_mat = *((Mat*)markerCorners_mat_nativeObj);
        Mat_to_vector_Mat( markerCorners_mat, markerCorners );
        Mat& markerIds = *((Mat*)markerIds_nativeObj);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& charucoCorners = *((Mat*)charucoCorners_nativeObj);
        Mat& charucoIds = *((Mat*)charucoIds_nativeObj);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        int _retval_ = cv::aruco::interpolateCornersCharuco( markerCorners, markerIds, image, *((Ptr<cv::aruco::CharucoBoard>*)board_nativeObj), charucoCorners, charucoIds, cameraMatrix, distCoeffs, (int)minMarkers );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jint JNICALL Java_org_opencv_aruco_Aruco_interpolateCornersCharuco_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_aruco_Aruco_interpolateCornersCharuco_11
  (JNIEnv* env, jclass , jlong markerCorners_mat_nativeObj, jlong markerIds_nativeObj, jlong image_nativeObj, jlong board_nativeObj, jlong charucoCorners_nativeObj, jlong charucoIds_nativeObj)
{
    static const char method_name[] = "aruco::interpolateCornersCharuco_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> markerCorners;
        Mat& markerCorners_mat = *((Mat*)markerCorners_mat_nativeObj);
        Mat_to_vector_Mat( markerCorners_mat, markerCorners );
        Mat& markerIds = *((Mat*)markerIds_nativeObj);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& charucoCorners = *((Mat*)charucoCorners_nativeObj);
        Mat& charucoIds = *((Mat*)charucoIds_nativeObj);
        int _retval_ = cv::aruco::interpolateCornersCharuco( markerCorners, markerIds, image, *((Ptr<cv::aruco::CharucoBoard>*)board_nativeObj), charucoCorners, charucoIds );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void detectCharucoDiamond(Mat image, vector_Mat markerCorners, Mat markerIds, float squareMarkerLengthRate, vector_Mat& diamondCorners, Mat& diamondIds, Mat cameraMatrix = Mat(), Mat distCoeffs = Mat())
//



JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_detectCharucoDiamond_10 (JNIEnv*, jclass, jlong, jlong, jlong, jfloat, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_detectCharucoDiamond_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong markerCorners_mat_nativeObj, jlong markerIds_nativeObj, jfloat squareMarkerLengthRate, jlong diamondCorners_mat_nativeObj, jlong diamondIds_nativeObj, jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj)
{
    static const char method_name[] = "aruco::detectCharucoDiamond_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> markerCorners;
        Mat& markerCorners_mat = *((Mat*)markerCorners_mat_nativeObj);
        Mat_to_vector_Mat( markerCorners_mat, markerCorners );
        std::vector<Mat> diamondCorners;
        Mat& diamondCorners_mat = *((Mat*)diamondCorners_mat_nativeObj);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& markerIds = *((Mat*)markerIds_nativeObj);
        Mat& diamondIds = *((Mat*)diamondIds_nativeObj);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        cv::aruco::detectCharucoDiamond( image, markerCorners, markerIds, (float)squareMarkerLengthRate, diamondCorners, diamondIds, cameraMatrix, distCoeffs );
        vector_Mat_to_Mat( diamondCorners, diamondCorners_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_detectCharucoDiamond_11 (JNIEnv*, jclass, jlong, jlong, jlong, jfloat, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_detectCharucoDiamond_11
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong markerCorners_mat_nativeObj, jlong markerIds_nativeObj, jfloat squareMarkerLengthRate, jlong diamondCorners_mat_nativeObj, jlong diamondIds_nativeObj)
{
    static const char method_name[] = "aruco::detectCharucoDiamond_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> markerCorners;
        Mat& markerCorners_mat = *((Mat*)markerCorners_mat_nativeObj);
        Mat_to_vector_Mat( markerCorners_mat, markerCorners );
        std::vector<Mat> diamondCorners;
        Mat& diamondCorners_mat = *((Mat*)diamondCorners_mat_nativeObj);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& markerIds = *((Mat*)markerIds_nativeObj);
        Mat& diamondIds = *((Mat*)diamondIds_nativeObj);
        cv::aruco::detectCharucoDiamond( image, markerCorners, markerIds, (float)squareMarkerLengthRate, diamondCorners, diamondIds );
        vector_Mat_to_Mat( diamondCorners, diamondCorners_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void detectMarkers(Mat image, Ptr_Dictionary dictionary, vector_Mat& corners, Mat& ids, Ptr_DetectorParameters parameters = DetectorParameters::create(), vector_Mat& rejectedImgPoints = vector_Mat(), Mat cameraMatrix = Mat(), Mat distCoeff = Mat())
//



JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_detectMarkers_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_detectMarkers_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong dictionary_nativeObj, jlong corners_mat_nativeObj, jlong ids_nativeObj, jlong parameters_nativeObj, jlong rejectedImgPoints_mat_nativeObj, jlong cameraMatrix_nativeObj, jlong distCoeff_nativeObj)
{
    static const char method_name[] = "aruco::detectMarkers_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> corners;
        Mat& corners_mat = *((Mat*)corners_mat_nativeObj);
        std::vector<Mat> rejectedImgPoints;
        Mat& rejectedImgPoints_mat = *((Mat*)rejectedImgPoints_mat_nativeObj);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& ids = *((Mat*)ids_nativeObj);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeff = *((Mat*)distCoeff_nativeObj);
        cv::aruco::detectMarkers( image, *((Ptr<cv::aruco::Dictionary>*)dictionary_nativeObj), corners, ids, *((Ptr<cv::aruco::DetectorParameters>*)parameters_nativeObj), rejectedImgPoints, cameraMatrix, distCoeff );
        vector_Mat_to_Mat( corners, corners_mat );  vector_Mat_to_Mat( rejectedImgPoints, rejectedImgPoints_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_detectMarkers_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_detectMarkers_11
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong dictionary_nativeObj, jlong corners_mat_nativeObj, jlong ids_nativeObj)
{
    static const char method_name[] = "aruco::detectMarkers_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> corners;
        Mat& corners_mat = *((Mat*)corners_mat_nativeObj);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& ids = *((Mat*)ids_nativeObj);
        cv::aruco::detectMarkers( image, *((Ptr<cv::aruco::Dictionary>*)dictionary_nativeObj), corners, ids );
        vector_Mat_to_Mat( corners, corners_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void drawAxis(Mat& image, Mat cameraMatrix, Mat distCoeffs, Mat rvec, Mat tvec, float length)
//



JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_drawAxis_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_drawAxis_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj, jlong rvec_nativeObj, jlong tvec_nativeObj, jfloat length)
{
    static const char method_name[] = "aruco::drawAxis_10()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        Mat& rvec = *((Mat*)rvec_nativeObj);
        Mat& tvec = *((Mat*)tvec_nativeObj);
        cv::aruco::drawAxis( image, cameraMatrix, distCoeffs, rvec, tvec, (float)length );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void drawDetectedCornersCharuco(Mat& image, Mat charucoCorners, Mat charucoIds = Mat(), Scalar cornerColor = Scalar(255, 0, 0))
//



JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_drawDetectedCornersCharuco_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_drawDetectedCornersCharuco_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong charucoCorners_nativeObj, jlong charucoIds_nativeObj, jdouble cornerColor_val0, jdouble cornerColor_val1, jdouble cornerColor_val2, jdouble cornerColor_val3)
{
    static const char method_name[] = "aruco::drawDetectedCornersCharuco_10()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& charucoCorners = *((Mat*)charucoCorners_nativeObj);
        Mat& charucoIds = *((Mat*)charucoIds_nativeObj);
        Scalar cornerColor(cornerColor_val0, cornerColor_val1, cornerColor_val2, cornerColor_val3);
        cv::aruco::drawDetectedCornersCharuco( image, charucoCorners, charucoIds, cornerColor );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_drawDetectedCornersCharuco_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_drawDetectedCornersCharuco_11
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong charucoCorners_nativeObj)
{
    static const char method_name[] = "aruco::drawDetectedCornersCharuco_11()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& charucoCorners = *((Mat*)charucoCorners_nativeObj);
        cv::aruco::drawDetectedCornersCharuco( image, charucoCorners );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void drawDetectedDiamonds(Mat& image, vector_Mat diamondCorners, Mat diamondIds = Mat(), Scalar borderColor = Scalar(0, 0, 255))
//



JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_drawDetectedDiamonds_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_drawDetectedDiamonds_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong diamondCorners_mat_nativeObj, jlong diamondIds_nativeObj, jdouble borderColor_val0, jdouble borderColor_val1, jdouble borderColor_val2, jdouble borderColor_val3)
{
    static const char method_name[] = "aruco::drawDetectedDiamonds_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> diamondCorners;
        Mat& diamondCorners_mat = *((Mat*)diamondCorners_mat_nativeObj);
        Mat_to_vector_Mat( diamondCorners_mat, diamondCorners );
        Mat& image = *((Mat*)image_nativeObj);
        Mat& diamondIds = *((Mat*)diamondIds_nativeObj);
        Scalar borderColor(borderColor_val0, borderColor_val1, borderColor_val2, borderColor_val3);
        cv::aruco::drawDetectedDiamonds( image, diamondCorners, diamondIds, borderColor );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_drawDetectedDiamonds_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_drawDetectedDiamonds_11
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong diamondCorners_mat_nativeObj)
{
    static const char method_name[] = "aruco::drawDetectedDiamonds_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> diamondCorners;
        Mat& diamondCorners_mat = *((Mat*)diamondCorners_mat_nativeObj);
        Mat_to_vector_Mat( diamondCorners_mat, diamondCorners );
        Mat& image = *((Mat*)image_nativeObj);
        cv::aruco::drawDetectedDiamonds( image, diamondCorners );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void drawDetectedMarkers(Mat& image, vector_Mat corners, Mat ids = Mat(), Scalar borderColor = Scalar(0, 255, 0))
//



JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_drawDetectedMarkers_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_drawDetectedMarkers_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong corners_mat_nativeObj, jlong ids_nativeObj, jdouble borderColor_val0, jdouble borderColor_val1, jdouble borderColor_val2, jdouble borderColor_val3)
{
    static const char method_name[] = "aruco::drawDetectedMarkers_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> corners;
        Mat& corners_mat = *((Mat*)corners_mat_nativeObj);
        Mat_to_vector_Mat( corners_mat, corners );
        Mat& image = *((Mat*)image_nativeObj);
        Mat& ids = *((Mat*)ids_nativeObj);
        Scalar borderColor(borderColor_val0, borderColor_val1, borderColor_val2, borderColor_val3);
        cv::aruco::drawDetectedMarkers( image, corners, ids, borderColor );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_drawDetectedMarkers_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_drawDetectedMarkers_11
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong corners_mat_nativeObj)
{
    static const char method_name[] = "aruco::drawDetectedMarkers_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> corners;
        Mat& corners_mat = *((Mat*)corners_mat_nativeObj);
        Mat_to_vector_Mat( corners_mat, corners );
        Mat& image = *((Mat*)image_nativeObj);
        cv::aruco::drawDetectedMarkers( image, corners );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void drawMarker(Ptr_Dictionary dictionary, int id, int sidePixels, Mat& img, int borderBits = 1)
//



JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_drawMarker_10 (JNIEnv*, jclass, jlong, jint, jint, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_drawMarker_10
  (JNIEnv* env, jclass , jlong dictionary_nativeObj, jint id, jint sidePixels, jlong img_nativeObj, jint borderBits)
{
    static const char method_name[] = "aruco::drawMarker_10()";
    try {
        LOGD("%s", method_name);
        Mat& img = *((Mat*)img_nativeObj);
        cv::aruco::drawMarker( *((Ptr<cv::aruco::Dictionary>*)dictionary_nativeObj), (int)id, (int)sidePixels, img, (int)borderBits );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_drawMarker_11 (JNIEnv*, jclass, jlong, jint, jint, jlong);

JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_drawMarker_11
  (JNIEnv* env, jclass , jlong dictionary_nativeObj, jint id, jint sidePixels, jlong img_nativeObj)
{
    static const char method_name[] = "aruco::drawMarker_11()";
    try {
        LOGD("%s", method_name);
        Mat& img = *((Mat*)img_nativeObj);
        cv::aruco::drawMarker( *((Ptr<cv::aruco::Dictionary>*)dictionary_nativeObj), (int)id, (int)sidePixels, img );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void drawPlanarBoard(Ptr_Board board, Size outSize, Mat& img, int marginSize = 0, int borderBits = 1)
//



JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_drawPlanarBoard_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_drawPlanarBoard_10
  (JNIEnv* env, jclass , jlong board_nativeObj, jdouble outSize_width, jdouble outSize_height, jlong img_nativeObj, jint marginSize, jint borderBits)
{
    static const char method_name[] = "aruco::drawPlanarBoard_10()";
    try {
        LOGD("%s", method_name);
        Size outSize((int)outSize_width, (int)outSize_height);
        Mat& img = *((Mat*)img_nativeObj);
        cv::aruco::drawPlanarBoard( *((Ptr<cv::aruco::Board>*)board_nativeObj), outSize, img, (int)marginSize, (int)borderBits );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_drawPlanarBoard_11 (JNIEnv*, jclass, jlong, jdouble, jdouble, jlong);

JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_drawPlanarBoard_11
  (JNIEnv* env, jclass , jlong board_nativeObj, jdouble outSize_width, jdouble outSize_height, jlong img_nativeObj)
{
    static const char method_name[] = "aruco::drawPlanarBoard_11()";
    try {
        LOGD("%s", method_name);
        Size outSize((int)outSize_width, (int)outSize_height);
        Mat& img = *((Mat*)img_nativeObj);
        cv::aruco::drawPlanarBoard( *((Ptr<cv::aruco::Board>*)board_nativeObj), outSize, img );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void estimatePoseSingleMarkers(vector_Mat corners, float markerLength, Mat cameraMatrix, Mat distCoeffs, Mat& rvecs, Mat& tvecs, Mat& _objPoints = Mat())
//



JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_estimatePoseSingleMarkers_10 (JNIEnv*, jclass, jlong, jfloat, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_estimatePoseSingleMarkers_10
  (JNIEnv* env, jclass , jlong corners_mat_nativeObj, jfloat markerLength, jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj, jlong rvecs_nativeObj, jlong tvecs_nativeObj, jlong _objPoints_nativeObj)
{
    static const char method_name[] = "aruco::estimatePoseSingleMarkers_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> corners;
        Mat& corners_mat = *((Mat*)corners_mat_nativeObj);
        Mat_to_vector_Mat( corners_mat, corners );
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        Mat& rvecs = *((Mat*)rvecs_nativeObj);
        Mat& tvecs = *((Mat*)tvecs_nativeObj);
        Mat& _objPoints = *((Mat*)_objPoints_nativeObj);
        cv::aruco::estimatePoseSingleMarkers( corners, (float)markerLength, cameraMatrix, distCoeffs, rvecs, tvecs, _objPoints );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_estimatePoseSingleMarkers_11 (JNIEnv*, jclass, jlong, jfloat, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_estimatePoseSingleMarkers_11
  (JNIEnv* env, jclass , jlong corners_mat_nativeObj, jfloat markerLength, jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj, jlong rvecs_nativeObj, jlong tvecs_nativeObj)
{
    static const char method_name[] = "aruco::estimatePoseSingleMarkers_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> corners;
        Mat& corners_mat = *((Mat*)corners_mat_nativeObj);
        Mat_to_vector_Mat( corners_mat, corners );
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        Mat& rvecs = *((Mat*)rvecs_nativeObj);
        Mat& tvecs = *((Mat*)tvecs_nativeObj);
        cv::aruco::estimatePoseSingleMarkers( corners, (float)markerLength, cameraMatrix, distCoeffs, rvecs, tvecs );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void getBoardObjectAndImagePoints(Ptr_Board board, vector_Mat detectedCorners, Mat detectedIds, Mat& objPoints, Mat& imgPoints)
//



JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_getBoardObjectAndImagePoints_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_getBoardObjectAndImagePoints_10
  (JNIEnv* env, jclass , jlong board_nativeObj, jlong detectedCorners_mat_nativeObj, jlong detectedIds_nativeObj, jlong objPoints_nativeObj, jlong imgPoints_nativeObj)
{
    static const char method_name[] = "aruco::getBoardObjectAndImagePoints_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> detectedCorners;
        Mat& detectedCorners_mat = *((Mat*)detectedCorners_mat_nativeObj);
        Mat_to_vector_Mat( detectedCorners_mat, detectedCorners );
        Mat& detectedIds = *((Mat*)detectedIds_nativeObj);
        Mat& objPoints = *((Mat*)objPoints_nativeObj);
        Mat& imgPoints = *((Mat*)imgPoints_nativeObj);
        cv::aruco::getBoardObjectAndImagePoints( *((Ptr<cv::aruco::Board>*)board_nativeObj), detectedCorners, detectedIds, objPoints, imgPoints );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void refineDetectedMarkers(Mat image, Ptr_Board board, vector_Mat& detectedCorners, Mat& detectedIds, vector_Mat& rejectedCorners, Mat cameraMatrix = Mat(), Mat distCoeffs = Mat(), float minRepDistance = 10.f, float errorCorrectionRate = 3.f, bool checkAllOrders = true, Mat& recoveredIdxs = Mat(), Ptr_DetectorParameters parameters = DetectorParameters::create())
//



JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_refineDetectedMarkers_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jfloat, jfloat, jboolean, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_refineDetectedMarkers_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong board_nativeObj, jlong detectedCorners_mat_nativeObj, jlong detectedIds_nativeObj, jlong rejectedCorners_mat_nativeObj, jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj, jfloat minRepDistance, jfloat errorCorrectionRate, jboolean checkAllOrders, jlong recoveredIdxs_nativeObj, jlong parameters_nativeObj)
{
    static const char method_name[] = "aruco::refineDetectedMarkers_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> detectedCorners;
        Mat& detectedCorners_mat = *((Mat*)detectedCorners_mat_nativeObj);
        Mat_to_vector_Mat( detectedCorners_mat, detectedCorners );
        std::vector<Mat> rejectedCorners;
        Mat& rejectedCorners_mat = *((Mat*)rejectedCorners_mat_nativeObj);
        Mat_to_vector_Mat( rejectedCorners_mat, rejectedCorners );
        Mat& image = *((Mat*)image_nativeObj);
        Mat& detectedIds = *((Mat*)detectedIds_nativeObj);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        Mat& recoveredIdxs = *((Mat*)recoveredIdxs_nativeObj);
        cv::aruco::refineDetectedMarkers( image, *((Ptr<cv::aruco::Board>*)board_nativeObj), detectedCorners, detectedIds, rejectedCorners, cameraMatrix, distCoeffs, (float)minRepDistance, (float)errorCorrectionRate, (bool)checkAllOrders, recoveredIdxs, *((Ptr<cv::aruco::DetectorParameters>*)parameters_nativeObj) );
        vector_Mat_to_Mat( detectedCorners, detectedCorners_mat );  vector_Mat_to_Mat( rejectedCorners, rejectedCorners_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_refineDetectedMarkers_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_aruco_Aruco_refineDetectedMarkers_11
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong board_nativeObj, jlong detectedCorners_mat_nativeObj, jlong detectedIds_nativeObj, jlong rejectedCorners_mat_nativeObj)
{
    static const char method_name[] = "aruco::refineDetectedMarkers_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> detectedCorners;
        Mat& detectedCorners_mat = *((Mat*)detectedCorners_mat_nativeObj);
        Mat_to_vector_Mat( detectedCorners_mat, detectedCorners );
        std::vector<Mat> rejectedCorners;
        Mat& rejectedCorners_mat = *((Mat*)rejectedCorners_mat_nativeObj);
        Mat_to_vector_Mat( rejectedCorners_mat, rejectedCorners );
        Mat& image = *((Mat*)image_nativeObj);
        Mat& detectedIds = *((Mat*)detectedIds_nativeObj);
        cv::aruco::refineDetectedMarkers( image, *((Ptr<cv::aruco::Board>*)board_nativeObj), detectedCorners, detectedIds, rejectedCorners );
        vector_Mat_to_Mat( detectedCorners, detectedCorners_mat );  vector_Mat_to_Mat( rejectedCorners, rejectedCorners_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}




} // extern "C"

#endif // HAVE_OPENCV_ARUCO
