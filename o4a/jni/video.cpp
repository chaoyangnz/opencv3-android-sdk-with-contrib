
//
// This file is auto-generated, please don't edit!
//

#define LOG_TAG "org.opencv.video"

#include "common.h"

#include "opencv2/opencv_modules.hpp"
#ifdef HAVE_OPENCV_VIDEO

#include <string>

#include "opencv2/video.hpp"

#include "/Users/Chao/opencv/modules/video/include/opencv2/video/background_segm.hpp"
#include "/Users/Chao/opencv/modules/video/include/opencv2/video/tracking.hpp"

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
// static Ptr_DualTVL1OpticalFlow create(double tau = 0.25, double lambda = 0.15, double theta = 0.3, int nscales = 5, int warps = 5, double epsilon = 0.01, int innnerIterations = 30, int outerIterations = 10, double scaleStep = 0.8, double gamma = 0.0, int medianFiltering = 5, bool useInitialFlow = false)
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_create_10 (JNIEnv*, jclass, jdouble, jdouble, jdouble, jint, jint, jdouble, jint, jint, jdouble, jdouble, jint, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_create_10
  (JNIEnv* env, jclass , jdouble tau, jdouble lambda, jdouble theta, jint nscales, jint warps, jdouble epsilon, jint innnerIterations, jint outerIterations, jdouble scaleStep, jdouble gamma, jint medianFiltering, jboolean useInitialFlow)
{
    static const char method_name[] = "video::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::DualTVL1OpticalFlow> Ptr_DualTVL1OpticalFlow;
        Ptr_DualTVL1OpticalFlow _retval_ = cv::DualTVL1OpticalFlow::create( (double)tau, (double)lambda, (double)theta, (int)nscales, (int)warps, (double)epsilon, (int)innnerIterations, (int)outerIterations, (double)scaleStep, (double)gamma, (int)medianFiltering, (bool)useInitialFlow );
        return (jlong)(new Ptr_DualTVL1OpticalFlow(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_create_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_create_11
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "video::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::DualTVL1OpticalFlow> Ptr_DualTVL1OpticalFlow;
        Ptr_DualTVL1OpticalFlow _retval_ = cv::DualTVL1OpticalFlow::create(  );
        return (jlong)(new Ptr_DualTVL1OpticalFlow(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool getUseInitialFlow()
//

using namespace cv;

JNIEXPORT jboolean JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_getUseInitialFlow_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_getUseInitialFlow_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getUseInitialFlow_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DualTVL1OpticalFlow>* me = (Ptr<cv::DualTVL1OpticalFlow>*) self; //TODO: check for NULL
        bool _retval_ = (*me)->getUseInitialFlow(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getEpsilon()
//

using namespace cv;

JNIEXPORT jdouble JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_getEpsilon_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_getEpsilon_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getEpsilon_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DualTVL1OpticalFlow>* me = (Ptr<cv::DualTVL1OpticalFlow>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getEpsilon(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getGamma()
//

using namespace cv;

JNIEXPORT jdouble JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_getGamma_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_getGamma_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getGamma_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DualTVL1OpticalFlow>* me = (Ptr<cv::DualTVL1OpticalFlow>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getGamma(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getLambda()
//

using namespace cv;

JNIEXPORT jdouble JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_getLambda_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_getLambda_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getLambda_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DualTVL1OpticalFlow>* me = (Ptr<cv::DualTVL1OpticalFlow>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getLambda(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getScaleStep()
//

using namespace cv;

JNIEXPORT jdouble JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_getScaleStep_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_getScaleStep_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getScaleStep_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DualTVL1OpticalFlow>* me = (Ptr<cv::DualTVL1OpticalFlow>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getScaleStep(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getTau()
//

using namespace cv;

JNIEXPORT jdouble JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_getTau_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_getTau_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getTau_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DualTVL1OpticalFlow>* me = (Ptr<cv::DualTVL1OpticalFlow>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getTau(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getTheta()
//

using namespace cv;

JNIEXPORT jdouble JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_getTheta_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_getTheta_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getTheta_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DualTVL1OpticalFlow>* me = (Ptr<cv::DualTVL1OpticalFlow>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getTheta(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getInnerIterations()
//

using namespace cv;

JNIEXPORT jint JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_getInnerIterations_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_getInnerIterations_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getInnerIterations_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DualTVL1OpticalFlow>* me = (Ptr<cv::DualTVL1OpticalFlow>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getInnerIterations(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getMedianFiltering()
//

using namespace cv;

JNIEXPORT jint JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_getMedianFiltering_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_getMedianFiltering_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getMedianFiltering_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DualTVL1OpticalFlow>* me = (Ptr<cv::DualTVL1OpticalFlow>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getMedianFiltering(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getOuterIterations()
//

using namespace cv;

JNIEXPORT jint JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_getOuterIterations_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_getOuterIterations_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getOuterIterations_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DualTVL1OpticalFlow>* me = (Ptr<cv::DualTVL1OpticalFlow>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getOuterIterations(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getScalesNumber()
//

using namespace cv;

JNIEXPORT jint JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_getScalesNumber_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_getScalesNumber_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getScalesNumber_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DualTVL1OpticalFlow>* me = (Ptr<cv::DualTVL1OpticalFlow>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getScalesNumber(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getWarpingsNumber()
//

using namespace cv;

JNIEXPORT jint JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_getWarpingsNumber_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_getWarpingsNumber_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getWarpingsNumber_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DualTVL1OpticalFlow>* me = (Ptr<cv::DualTVL1OpticalFlow>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getWarpingsNumber(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void setEpsilon(double val)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_setEpsilon_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_setEpsilon_10
  (JNIEnv* env, jclass , jlong self, jdouble val)
{
    static const char method_name[] = "video::setEpsilon_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DualTVL1OpticalFlow>* me = (Ptr<cv::DualTVL1OpticalFlow>*) self; //TODO: check for NULL
        (*me)->setEpsilon( (double)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setGamma(double val)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_setGamma_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_setGamma_10
  (JNIEnv* env, jclass , jlong self, jdouble val)
{
    static const char method_name[] = "video::setGamma_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DualTVL1OpticalFlow>* me = (Ptr<cv::DualTVL1OpticalFlow>*) self; //TODO: check for NULL
        (*me)->setGamma( (double)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setInnerIterations(int val)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_setInnerIterations_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_setInnerIterations_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    static const char method_name[] = "video::setInnerIterations_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DualTVL1OpticalFlow>* me = (Ptr<cv::DualTVL1OpticalFlow>*) self; //TODO: check for NULL
        (*me)->setInnerIterations( (int)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setLambda(double val)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_setLambda_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_setLambda_10
  (JNIEnv* env, jclass , jlong self, jdouble val)
{
    static const char method_name[] = "video::setLambda_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DualTVL1OpticalFlow>* me = (Ptr<cv::DualTVL1OpticalFlow>*) self; //TODO: check for NULL
        (*me)->setLambda( (double)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setMedianFiltering(int val)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_setMedianFiltering_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_setMedianFiltering_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    static const char method_name[] = "video::setMedianFiltering_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DualTVL1OpticalFlow>* me = (Ptr<cv::DualTVL1OpticalFlow>*) self; //TODO: check for NULL
        (*me)->setMedianFiltering( (int)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setOuterIterations(int val)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_setOuterIterations_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_setOuterIterations_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    static const char method_name[] = "video::setOuterIterations_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DualTVL1OpticalFlow>* me = (Ptr<cv::DualTVL1OpticalFlow>*) self; //TODO: check for NULL
        (*me)->setOuterIterations( (int)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setScaleStep(double val)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_setScaleStep_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_setScaleStep_10
  (JNIEnv* env, jclass , jlong self, jdouble val)
{
    static const char method_name[] = "video::setScaleStep_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DualTVL1OpticalFlow>* me = (Ptr<cv::DualTVL1OpticalFlow>*) self; //TODO: check for NULL
        (*me)->setScaleStep( (double)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setScalesNumber(int val)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_setScalesNumber_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_setScalesNumber_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    static const char method_name[] = "video::setScalesNumber_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DualTVL1OpticalFlow>* me = (Ptr<cv::DualTVL1OpticalFlow>*) self; //TODO: check for NULL
        (*me)->setScalesNumber( (int)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setTau(double val)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_setTau_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_setTau_10
  (JNIEnv* env, jclass , jlong self, jdouble val)
{
    static const char method_name[] = "video::setTau_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DualTVL1OpticalFlow>* me = (Ptr<cv::DualTVL1OpticalFlow>*) self; //TODO: check for NULL
        (*me)->setTau( (double)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setTheta(double val)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_setTheta_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_setTheta_10
  (JNIEnv* env, jclass , jlong self, jdouble val)
{
    static const char method_name[] = "video::setTheta_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DualTVL1OpticalFlow>* me = (Ptr<cv::DualTVL1OpticalFlow>*) self; //TODO: check for NULL
        (*me)->setTheta( (double)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setUseInitialFlow(bool val)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_setUseInitialFlow_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_setUseInitialFlow_10
  (JNIEnv* env, jclass , jlong self, jboolean val)
{
    static const char method_name[] = "video::setUseInitialFlow_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DualTVL1OpticalFlow>* me = (Ptr<cv::DualTVL1OpticalFlow>*) self; //TODO: check for NULL
        (*me)->setUseInitialFlow( (bool)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setWarpingsNumber(int val)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_setWarpingsNumber_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_setWarpingsNumber_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    static const char method_name[] = "video::setWarpingsNumber_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DualTVL1OpticalFlow>* me = (Ptr<cv::DualTVL1OpticalFlow>*) self; //TODO: check for NULL
        (*me)->setWarpingsNumber( (int)val );
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
//  static void Ptr<cv::DualTVL1OpticalFlow>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_DualTVL1OpticalFlow_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::DualTVL1OpticalFlow>*) self;
}


//
// static Ptr_SparsePyrLKOpticalFlow create(Size winSize = Size(21, 21), int maxLevel = 3, TermCriteria crit = TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 30, 0.01), int flags = 0, double minEigThreshold = 1e-4)
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_create_10 (JNIEnv*, jclass, jdouble, jdouble, jint, jint, jint, jdouble, jint, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_create_10
  (JNIEnv* env, jclass , jdouble winSize_width, jdouble winSize_height, jint maxLevel, jint crit_type, jint crit_maxCount, jdouble crit_epsilon, jint flags, jdouble minEigThreshold)
{
    static const char method_name[] = "video::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::SparsePyrLKOpticalFlow> Ptr_SparsePyrLKOpticalFlow;
        Size winSize((int)winSize_width, (int)winSize_height);
        TermCriteria crit(crit_type, crit_maxCount, crit_epsilon);
        Ptr_SparsePyrLKOpticalFlow _retval_ = cv::SparsePyrLKOpticalFlow::create( winSize, (int)maxLevel, crit, (int)flags, (double)minEigThreshold );
        return (jlong)(new Ptr_SparsePyrLKOpticalFlow(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_create_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_create_11
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "video::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::SparsePyrLKOpticalFlow> Ptr_SparsePyrLKOpticalFlow;
        Ptr_SparsePyrLKOpticalFlow _retval_ = cv::SparsePyrLKOpticalFlow::create(  );
        return (jlong)(new Ptr_SparsePyrLKOpticalFlow(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Size getWinSize()
//

using namespace cv;

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_getWinSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_getWinSize_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getWinSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::SparsePyrLKOpticalFlow>* me = (Ptr<cv::SparsePyrLKOpticalFlow>*) self; //TODO: check for NULL
        Size _retval_ = (*me)->getWinSize(  );
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
//  TermCriteria getTermCriteria()
//

using namespace cv;

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_getTermCriteria_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_getTermCriteria_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getTermCriteria_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::SparsePyrLKOpticalFlow>* me = (Ptr<cv::SparsePyrLKOpticalFlow>*) self; //TODO: check for NULL
        TermCriteria _retval_ = (*me)->getTermCriteria(  );
        jdoubleArray _da_retval_ = env->NewDoubleArray(3);  jdouble _tmp_retval_[3] = {(jdouble)_retval_.type, (jdouble)_retval_.maxCount, (jdouble)_retval_.epsilon}; env->SetDoubleArrayRegion(_da_retval_, 0, 3, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getMinEigThreshold()
//

using namespace cv;

JNIEXPORT jdouble JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_getMinEigThreshold_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_getMinEigThreshold_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getMinEigThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::SparsePyrLKOpticalFlow>* me = (Ptr<cv::SparsePyrLKOpticalFlow>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getMinEigThreshold(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getFlags()
//

using namespace cv;

JNIEXPORT jint JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_getFlags_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_getFlags_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getFlags_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::SparsePyrLKOpticalFlow>* me = (Ptr<cv::SparsePyrLKOpticalFlow>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getFlags(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getMaxLevel()
//

using namespace cv;

JNIEXPORT jint JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_getMaxLevel_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_getMaxLevel_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getMaxLevel_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::SparsePyrLKOpticalFlow>* me = (Ptr<cv::SparsePyrLKOpticalFlow>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getMaxLevel(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void setFlags(int flags)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_setFlags_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_setFlags_10
  (JNIEnv* env, jclass , jlong self, jint flags)
{
    static const char method_name[] = "video::setFlags_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::SparsePyrLKOpticalFlow>* me = (Ptr<cv::SparsePyrLKOpticalFlow>*) self; //TODO: check for NULL
        (*me)->setFlags( (int)flags );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setMaxLevel(int maxLevel)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_setMaxLevel_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_setMaxLevel_10
  (JNIEnv* env, jclass , jlong self, jint maxLevel)
{
    static const char method_name[] = "video::setMaxLevel_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::SparsePyrLKOpticalFlow>* me = (Ptr<cv::SparsePyrLKOpticalFlow>*) self; //TODO: check for NULL
        (*me)->setMaxLevel( (int)maxLevel );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setMinEigThreshold(double minEigThreshold)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_setMinEigThreshold_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_setMinEigThreshold_10
  (JNIEnv* env, jclass , jlong self, jdouble minEigThreshold)
{
    static const char method_name[] = "video::setMinEigThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::SparsePyrLKOpticalFlow>* me = (Ptr<cv::SparsePyrLKOpticalFlow>*) self; //TODO: check for NULL
        (*me)->setMinEigThreshold( (double)minEigThreshold );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setTermCriteria(TermCriteria crit)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_setTermCriteria_10 (JNIEnv*, jclass, jlong, jint, jint, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_setTermCriteria_10
  (JNIEnv* env, jclass , jlong self, jint crit_type, jint crit_maxCount, jdouble crit_epsilon)
{
    static const char method_name[] = "video::setTermCriteria_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::SparsePyrLKOpticalFlow>* me = (Ptr<cv::SparsePyrLKOpticalFlow>*) self; //TODO: check for NULL
        TermCriteria crit(crit_type, crit_maxCount, crit_epsilon);
        (*me)->setTermCriteria( crit );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setWinSize(Size winSize)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_setWinSize_10 (JNIEnv*, jclass, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_setWinSize_10
  (JNIEnv* env, jclass , jlong self, jdouble winSize_width, jdouble winSize_height)
{
    static const char method_name[] = "video::setWinSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::SparsePyrLKOpticalFlow>* me = (Ptr<cv::SparsePyrLKOpticalFlow>*) self; //TODO: check for NULL
        Size winSize((int)winSize_width, (int)winSize_height);
        (*me)->setWinSize( winSize );
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
//  static void Ptr<cv::SparsePyrLKOpticalFlow>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_SparsePyrLKOpticalFlow_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::SparsePyrLKOpticalFlow>*) self;
}


//
// static Ptr_FarnebackOpticalFlow create(int numLevels = 5, double pyrScale = 0.5, bool fastPyramids = false, int winSize = 13, int numIters = 10, int polyN = 5, double polySigma = 1.1, int flags = 0)
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_video_FarnebackOpticalFlow_create_10 (JNIEnv*, jclass, jint, jdouble, jboolean, jint, jint, jint, jdouble, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_video_FarnebackOpticalFlow_create_10
  (JNIEnv* env, jclass , jint numLevels, jdouble pyrScale, jboolean fastPyramids, jint winSize, jint numIters, jint polyN, jdouble polySigma, jint flags)
{
    static const char method_name[] = "video::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::FarnebackOpticalFlow> Ptr_FarnebackOpticalFlow;
        Ptr_FarnebackOpticalFlow _retval_ = cv::FarnebackOpticalFlow::create( (int)numLevels, (double)pyrScale, (bool)fastPyramids, (int)winSize, (int)numIters, (int)polyN, (double)polySigma, (int)flags );
        return (jlong)(new Ptr_FarnebackOpticalFlow(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_video_FarnebackOpticalFlow_create_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_video_FarnebackOpticalFlow_create_11
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "video::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::FarnebackOpticalFlow> Ptr_FarnebackOpticalFlow;
        Ptr_FarnebackOpticalFlow _retval_ = cv::FarnebackOpticalFlow::create(  );
        return (jlong)(new Ptr_FarnebackOpticalFlow(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool getFastPyramids()
//

using namespace cv;

JNIEXPORT jboolean JNICALL Java_org_opencv_video_FarnebackOpticalFlow_getFastPyramids_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_video_FarnebackOpticalFlow_getFastPyramids_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getFastPyramids_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FarnebackOpticalFlow>* me = (Ptr<cv::FarnebackOpticalFlow>*) self; //TODO: check for NULL
        bool _retval_ = (*me)->getFastPyramids(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getPolySigma()
//

using namespace cv;

JNIEXPORT jdouble JNICALL Java_org_opencv_video_FarnebackOpticalFlow_getPolySigma_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_FarnebackOpticalFlow_getPolySigma_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getPolySigma_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FarnebackOpticalFlow>* me = (Ptr<cv::FarnebackOpticalFlow>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getPolySigma(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getPyrScale()
//

using namespace cv;

JNIEXPORT jdouble JNICALL Java_org_opencv_video_FarnebackOpticalFlow_getPyrScale_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_FarnebackOpticalFlow_getPyrScale_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getPyrScale_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FarnebackOpticalFlow>* me = (Ptr<cv::FarnebackOpticalFlow>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getPyrScale(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getFlags()
//

using namespace cv;

JNIEXPORT jint JNICALL Java_org_opencv_video_FarnebackOpticalFlow_getFlags_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_FarnebackOpticalFlow_getFlags_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getFlags_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FarnebackOpticalFlow>* me = (Ptr<cv::FarnebackOpticalFlow>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getFlags(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getNumIters()
//

using namespace cv;

JNIEXPORT jint JNICALL Java_org_opencv_video_FarnebackOpticalFlow_getNumIters_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_FarnebackOpticalFlow_getNumIters_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getNumIters_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FarnebackOpticalFlow>* me = (Ptr<cv::FarnebackOpticalFlow>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getNumIters(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getNumLevels()
//

using namespace cv;

JNIEXPORT jint JNICALL Java_org_opencv_video_FarnebackOpticalFlow_getNumLevels_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_FarnebackOpticalFlow_getNumLevels_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getNumLevels_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FarnebackOpticalFlow>* me = (Ptr<cv::FarnebackOpticalFlow>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getNumLevels(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getPolyN()
//

using namespace cv;

JNIEXPORT jint JNICALL Java_org_opencv_video_FarnebackOpticalFlow_getPolyN_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_FarnebackOpticalFlow_getPolyN_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getPolyN_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FarnebackOpticalFlow>* me = (Ptr<cv::FarnebackOpticalFlow>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getPolyN(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getWinSize()
//

using namespace cv;

JNIEXPORT jint JNICALL Java_org_opencv_video_FarnebackOpticalFlow_getWinSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_FarnebackOpticalFlow_getWinSize_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getWinSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FarnebackOpticalFlow>* me = (Ptr<cv::FarnebackOpticalFlow>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getWinSize(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void setFastPyramids(bool fastPyramids)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_setFastPyramids_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_setFastPyramids_10
  (JNIEnv* env, jclass , jlong self, jboolean fastPyramids)
{
    static const char method_name[] = "video::setFastPyramids_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FarnebackOpticalFlow>* me = (Ptr<cv::FarnebackOpticalFlow>*) self; //TODO: check for NULL
        (*me)->setFastPyramids( (bool)fastPyramids );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setFlags(int flags)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_setFlags_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_setFlags_10
  (JNIEnv* env, jclass , jlong self, jint flags)
{
    static const char method_name[] = "video::setFlags_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FarnebackOpticalFlow>* me = (Ptr<cv::FarnebackOpticalFlow>*) self; //TODO: check for NULL
        (*me)->setFlags( (int)flags );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setNumIters(int numIters)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_setNumIters_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_setNumIters_10
  (JNIEnv* env, jclass , jlong self, jint numIters)
{
    static const char method_name[] = "video::setNumIters_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FarnebackOpticalFlow>* me = (Ptr<cv::FarnebackOpticalFlow>*) self; //TODO: check for NULL
        (*me)->setNumIters( (int)numIters );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setNumLevels(int numLevels)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_setNumLevels_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_setNumLevels_10
  (JNIEnv* env, jclass , jlong self, jint numLevels)
{
    static const char method_name[] = "video::setNumLevels_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FarnebackOpticalFlow>* me = (Ptr<cv::FarnebackOpticalFlow>*) self; //TODO: check for NULL
        (*me)->setNumLevels( (int)numLevels );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setPolyN(int polyN)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_setPolyN_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_setPolyN_10
  (JNIEnv* env, jclass , jlong self, jint polyN)
{
    static const char method_name[] = "video::setPolyN_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FarnebackOpticalFlow>* me = (Ptr<cv::FarnebackOpticalFlow>*) self; //TODO: check for NULL
        (*me)->setPolyN( (int)polyN );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setPolySigma(double polySigma)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_setPolySigma_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_setPolySigma_10
  (JNIEnv* env, jclass , jlong self, jdouble polySigma)
{
    static const char method_name[] = "video::setPolySigma_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FarnebackOpticalFlow>* me = (Ptr<cv::FarnebackOpticalFlow>*) self; //TODO: check for NULL
        (*me)->setPolySigma( (double)polySigma );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setPyrScale(double pyrScale)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_setPyrScale_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_setPyrScale_10
  (JNIEnv* env, jclass , jlong self, jdouble pyrScale)
{
    static const char method_name[] = "video::setPyrScale_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FarnebackOpticalFlow>* me = (Ptr<cv::FarnebackOpticalFlow>*) self; //TODO: check for NULL
        (*me)->setPyrScale( (double)pyrScale );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setWinSize(int winSize)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_setWinSize_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_setWinSize_10
  (JNIEnv* env, jclass , jlong self, jint winSize)
{
    static const char method_name[] = "video::setWinSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FarnebackOpticalFlow>* me = (Ptr<cv::FarnebackOpticalFlow>*) self; //TODO: check for NULL
        (*me)->setWinSize( (int)winSize );
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
//  static void Ptr<cv::FarnebackOpticalFlow>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_FarnebackOpticalFlow_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::FarnebackOpticalFlow>*) self;
}


//
//  void calc(Mat prevImg, Mat nextImg, Mat prevPts, Mat& nextPts, Mat& status, Mat& err = cv::Mat())
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_SparseOpticalFlow_calc_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_SparseOpticalFlow_calc_10
  (JNIEnv* env, jclass , jlong self, jlong prevImg_nativeObj, jlong nextImg_nativeObj, jlong prevPts_nativeObj, jlong nextPts_nativeObj, jlong status_nativeObj, jlong err_nativeObj)
{
    static const char method_name[] = "video::calc_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::SparseOpticalFlow>* me = (Ptr<cv::SparseOpticalFlow>*) self; //TODO: check for NULL
        Mat& prevImg = *((Mat*)prevImg_nativeObj);
        Mat& nextImg = *((Mat*)nextImg_nativeObj);
        Mat& prevPts = *((Mat*)prevPts_nativeObj);
        Mat& nextPts = *((Mat*)nextPts_nativeObj);
        Mat& status = *((Mat*)status_nativeObj);
        Mat& err = *((Mat*)err_nativeObj);
        (*me)->calc( prevImg, nextImg, prevPts, nextPts, status, err );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_SparseOpticalFlow_calc_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_SparseOpticalFlow_calc_11
  (JNIEnv* env, jclass , jlong self, jlong prevImg_nativeObj, jlong nextImg_nativeObj, jlong prevPts_nativeObj, jlong nextPts_nativeObj, jlong status_nativeObj)
{
    static const char method_name[] = "video::calc_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::SparseOpticalFlow>* me = (Ptr<cv::SparseOpticalFlow>*) self; //TODO: check for NULL
        Mat& prevImg = *((Mat*)prevImg_nativeObj);
        Mat& nextImg = *((Mat*)nextImg_nativeObj);
        Mat& prevPts = *((Mat*)prevPts_nativeObj);
        Mat& nextPts = *((Mat*)nextPts_nativeObj);
        Mat& status = *((Mat*)status_nativeObj);
        (*me)->calc( prevImg, nextImg, prevPts, nextPts, status );
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
//  static void Ptr<cv::SparseOpticalFlow>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_SparseOpticalFlow_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_SparseOpticalFlow_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::SparseOpticalFlow>*) self;
}


//
//  void calc(Mat I0, Mat I1, Mat& flow)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_DenseOpticalFlow_calc_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_DenseOpticalFlow_calc_10
  (JNIEnv* env, jclass , jlong self, jlong I0_nativeObj, jlong I1_nativeObj, jlong flow_nativeObj)
{
    static const char method_name[] = "video::calc_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DenseOpticalFlow>* me = (Ptr<cv::DenseOpticalFlow>*) self; //TODO: check for NULL
        Mat& I0 = *((Mat*)I0_nativeObj);
        Mat& I1 = *((Mat*)I1_nativeObj);
        Mat& flow = *((Mat*)flow_nativeObj);
        (*me)->calc( I0, I1, flow );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void collectGarbage()
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_DenseOpticalFlow_collectGarbage_10 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_DenseOpticalFlow_collectGarbage_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::collectGarbage_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::DenseOpticalFlow>* me = (Ptr<cv::DenseOpticalFlow>*) self; //TODO: check for NULL
        (*me)->collectGarbage(  );
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
//  static void Ptr<cv::DenseOpticalFlow>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_DenseOpticalFlow_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_DenseOpticalFlow_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::DenseOpticalFlow>*) self;
}


//
//  void apply(Mat image, Mat& fgmask, double learningRate = -1)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractor_apply_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractor_apply_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong fgmask_nativeObj, jdouble learningRate)
{
    static const char method_name[] = "video::apply_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractor>* me = (Ptr<cv::BackgroundSubtractor>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& fgmask = *((Mat*)fgmask_nativeObj);
        (*me)->apply( image, fgmask, (double)learningRate );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractor_apply_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractor_apply_11
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong fgmask_nativeObj)
{
    static const char method_name[] = "video::apply_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractor>* me = (Ptr<cv::BackgroundSubtractor>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& fgmask = *((Mat*)fgmask_nativeObj);
        (*me)->apply( image, fgmask );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void getBackgroundImage(Mat& backgroundImage)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractor_getBackgroundImage_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractor_getBackgroundImage_10
  (JNIEnv* env, jclass , jlong self, jlong backgroundImage_nativeObj)
{
    static const char method_name[] = "video::getBackgroundImage_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractor>* me = (Ptr<cv::BackgroundSubtractor>*) self; //TODO: check for NULL
        Mat& backgroundImage = *((Mat*)backgroundImage_nativeObj);
        (*me)->getBackgroundImage( backgroundImage );
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
//  static void Ptr<cv::BackgroundSubtractor>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractor_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractor_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::BackgroundSubtractor>*) self;
}


//
//  Mat estimateRigidTransform(Mat src, Mat dst, bool fullAffine)
//



JNIEXPORT jlong JNICALL Java_org_opencv_video_Video_estimateRigidTransform_10 (JNIEnv*, jclass, jlong, jlong, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_video_Video_estimateRigidTransform_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jboolean fullAffine)
{
    static const char method_name[] = "video::estimateRigidTransform_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        ::Mat _retval_ = cv::estimateRigidTransform( src, dst, (bool)fullAffine );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_BackgroundSubtractorKNN createBackgroundSubtractorKNN(int history = 500, double dist2Threshold = 400.0, bool detectShadows = true)
//



JNIEXPORT jlong JNICALL Java_org_opencv_video_Video_createBackgroundSubtractorKNN_10 (JNIEnv*, jclass, jint, jdouble, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_video_Video_createBackgroundSubtractorKNN_10
  (JNIEnv* env, jclass , jint history, jdouble dist2Threshold, jboolean detectShadows)
{
    static const char method_name[] = "video::createBackgroundSubtractorKNN_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::BackgroundSubtractorKNN> Ptr_BackgroundSubtractorKNN;
        Ptr_BackgroundSubtractorKNN _retval_ = cv::createBackgroundSubtractorKNN( (int)history, (double)dist2Threshold, (bool)detectShadows );
        return (jlong)(new Ptr_BackgroundSubtractorKNN(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_video_Video_createBackgroundSubtractorKNN_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_video_Video_createBackgroundSubtractorKNN_11
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "video::createBackgroundSubtractorKNN_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::BackgroundSubtractorKNN> Ptr_BackgroundSubtractorKNN;
        Ptr_BackgroundSubtractorKNN _retval_ = cv::createBackgroundSubtractorKNN(  );
        return (jlong)(new Ptr_BackgroundSubtractorKNN(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_BackgroundSubtractorMOG2 createBackgroundSubtractorMOG2(int history = 500, double varThreshold = 16, bool detectShadows = true)
//



JNIEXPORT jlong JNICALL Java_org_opencv_video_Video_createBackgroundSubtractorMOG2_10 (JNIEnv*, jclass, jint, jdouble, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_video_Video_createBackgroundSubtractorMOG2_10
  (JNIEnv* env, jclass , jint history, jdouble varThreshold, jboolean detectShadows)
{
    static const char method_name[] = "video::createBackgroundSubtractorMOG2_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::BackgroundSubtractorMOG2> Ptr_BackgroundSubtractorMOG2;
        Ptr_BackgroundSubtractorMOG2 _retval_ = cv::createBackgroundSubtractorMOG2( (int)history, (double)varThreshold, (bool)detectShadows );
        return (jlong)(new Ptr_BackgroundSubtractorMOG2(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_video_Video_createBackgroundSubtractorMOG2_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_video_Video_createBackgroundSubtractorMOG2_11
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "video::createBackgroundSubtractorMOG2_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::BackgroundSubtractorMOG2> Ptr_BackgroundSubtractorMOG2;
        Ptr_BackgroundSubtractorMOG2 _retval_ = cv::createBackgroundSubtractorMOG2(  );
        return (jlong)(new Ptr_BackgroundSubtractorMOG2(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_DualTVL1OpticalFlow createOptFlow_DualTVL1()
//



JNIEXPORT jlong JNICALL Java_org_opencv_video_Video_createOptFlow_1DualTVL1_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_video_Video_createOptFlow_1DualTVL1_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "video::createOptFlow_1DualTVL1_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::DualTVL1OpticalFlow> Ptr_DualTVL1OpticalFlow;
        Ptr_DualTVL1OpticalFlow _retval_ = cv::createOptFlow_DualTVL1(  );
        return (jlong)(new Ptr_DualTVL1OpticalFlow(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  RotatedRect CamShift(Mat probImage, Rect& window, TermCriteria criteria)
//



JNIEXPORT jdoubleArray JNICALL Java_org_opencv_video_Video_CamShift_10 (JNIEnv*, jclass, jlong, jint, jint, jint, jint, jdoubleArray, jint, jint, jdouble);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_video_Video_CamShift_10
  (JNIEnv* env, jclass , jlong probImage_nativeObj, jint window_x, jint window_y, jint window_width, jint window_height, jdoubleArray window_out, jint criteria_type, jint criteria_maxCount, jdouble criteria_epsilon)
{
    static const char method_name[] = "video::CamShift_10()";
    try {
        LOGD("%s", method_name);
        Mat& probImage = *((Mat*)probImage_nativeObj);
        Rect window(window_x, window_y, window_width, window_height);
        TermCriteria criteria(criteria_type, criteria_maxCount, criteria_epsilon);
        RotatedRect _retval_ = cv::CamShift( probImage, window, criteria );
        jdoubleArray _da_retval_ = env->NewDoubleArray(5);  jdouble _tmp_retval_[5] = {(jdouble)_retval_.center.x, (jdouble)_retval_.center.y, (jdouble)_retval_.size.width, (jdouble)_retval_.size.height, (jdouble)_retval_.angle}; env->SetDoubleArrayRegion(_da_retval_, 0, 5, _tmp_retval_);  jdouble tmp_window[4] = {(jdouble)window.x, (jdouble)window.y, (jdouble)window.width, (jdouble)window.height}; env->SetDoubleArrayRegion(window_out, 0, 4, tmp_window);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double findTransformECC(Mat templateImage, Mat inputImage, Mat& warpMatrix, int motionType = MOTION_AFFINE, TermCriteria criteria = TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 50, 0.001), Mat inputMask = Mat())
//



JNIEXPORT jdouble JNICALL Java_org_opencv_video_Video_findTransformECC_10 (JNIEnv*, jclass, jlong, jlong, jlong, jint, jint, jint, jdouble, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_Video_findTransformECC_10
  (JNIEnv* env, jclass , jlong templateImage_nativeObj, jlong inputImage_nativeObj, jlong warpMatrix_nativeObj, jint motionType, jint criteria_type, jint criteria_maxCount, jdouble criteria_epsilon, jlong inputMask_nativeObj)
{
    static const char method_name[] = "video::findTransformECC_10()";
    try {
        LOGD("%s", method_name);
        Mat& templateImage = *((Mat*)templateImage_nativeObj);
        Mat& inputImage = *((Mat*)inputImage_nativeObj);
        Mat& warpMatrix = *((Mat*)warpMatrix_nativeObj);
        TermCriteria criteria(criteria_type, criteria_maxCount, criteria_epsilon);
        Mat& inputMask = *((Mat*)inputMask_nativeObj);
        double _retval_ = cv::findTransformECC( templateImage, inputImage, warpMatrix, (int)motionType, criteria, inputMask );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jdouble JNICALL Java_org_opencv_video_Video_findTransformECC_11 (JNIEnv*, jclass, jlong, jlong, jlong, jint);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_Video_findTransformECC_11
  (JNIEnv* env, jclass , jlong templateImage_nativeObj, jlong inputImage_nativeObj, jlong warpMatrix_nativeObj, jint motionType)
{
    static const char method_name[] = "video::findTransformECC_11()";
    try {
        LOGD("%s", method_name);
        Mat& templateImage = *((Mat*)templateImage_nativeObj);
        Mat& inputImage = *((Mat*)inputImage_nativeObj);
        Mat& warpMatrix = *((Mat*)warpMatrix_nativeObj);
        double _retval_ = cv::findTransformECC( templateImage, inputImage, warpMatrix, (int)motionType );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jdouble JNICALL Java_org_opencv_video_Video_findTransformECC_12 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_Video_findTransformECC_12
  (JNIEnv* env, jclass , jlong templateImage_nativeObj, jlong inputImage_nativeObj, jlong warpMatrix_nativeObj)
{
    static const char method_name[] = "video::findTransformECC_12()";
    try {
        LOGD("%s", method_name);
        Mat& templateImage = *((Mat*)templateImage_nativeObj);
        Mat& inputImage = *((Mat*)inputImage_nativeObj);
        Mat& warpMatrix = *((Mat*)warpMatrix_nativeObj);
        double _retval_ = cv::findTransformECC( templateImage, inputImage, warpMatrix );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int buildOpticalFlowPyramid(Mat img, vector_Mat& pyramid, Size winSize, int maxLevel, bool withDerivatives = true, int pyrBorder = BORDER_REFLECT_101, int derivBorder = BORDER_CONSTANT, bool tryReuseInputImage = true)
//



JNIEXPORT jint JNICALL Java_org_opencv_video_Video_buildOpticalFlowPyramid_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jint, jboolean, jint, jint, jboolean);

JNIEXPORT jint JNICALL Java_org_opencv_video_Video_buildOpticalFlowPyramid_10
  (JNIEnv* env, jclass , jlong img_nativeObj, jlong pyramid_mat_nativeObj, jdouble winSize_width, jdouble winSize_height, jint maxLevel, jboolean withDerivatives, jint pyrBorder, jint derivBorder, jboolean tryReuseInputImage)
{
    static const char method_name[] = "video::buildOpticalFlowPyramid_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> pyramid;
        Mat& pyramid_mat = *((Mat*)pyramid_mat_nativeObj);
        Mat& img = *((Mat*)img_nativeObj);
        Size winSize((int)winSize_width, (int)winSize_height);
        int _retval_ = cv::buildOpticalFlowPyramid( img, pyramid, winSize, (int)maxLevel, (bool)withDerivatives, (int)pyrBorder, (int)derivBorder, (bool)tryReuseInputImage );
        vector_Mat_to_Mat( pyramid, pyramid_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jint JNICALL Java_org_opencv_video_Video_buildOpticalFlowPyramid_11 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jint);

JNIEXPORT jint JNICALL Java_org_opencv_video_Video_buildOpticalFlowPyramid_11
  (JNIEnv* env, jclass , jlong img_nativeObj, jlong pyramid_mat_nativeObj, jdouble winSize_width, jdouble winSize_height, jint maxLevel)
{
    static const char method_name[] = "video::buildOpticalFlowPyramid_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> pyramid;
        Mat& pyramid_mat = *((Mat*)pyramid_mat_nativeObj);
        Mat& img = *((Mat*)img_nativeObj);
        Size winSize((int)winSize_width, (int)winSize_height);
        int _retval_ = cv::buildOpticalFlowPyramid( img, pyramid, winSize, (int)maxLevel );
        vector_Mat_to_Mat( pyramid, pyramid_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int meanShift(Mat probImage, Rect& window, TermCriteria criteria)
//



JNIEXPORT jint JNICALL Java_org_opencv_video_Video_meanShift_10 (JNIEnv*, jclass, jlong, jint, jint, jint, jint, jdoubleArray, jint, jint, jdouble);

JNIEXPORT jint JNICALL Java_org_opencv_video_Video_meanShift_10
  (JNIEnv* env, jclass , jlong probImage_nativeObj, jint window_x, jint window_y, jint window_width, jint window_height, jdoubleArray window_out, jint criteria_type, jint criteria_maxCount, jdouble criteria_epsilon)
{
    static const char method_name[] = "video::meanShift_10()";
    try {
        LOGD("%s", method_name);
        Mat& probImage = *((Mat*)probImage_nativeObj);
        Rect window(window_x, window_y, window_width, window_height);
        TermCriteria criteria(criteria_type, criteria_maxCount, criteria_epsilon);
        int _retval_ = cv::meanShift( probImage, window, criteria );
        jdouble tmp_window[4] = {(jdouble)window.x, (jdouble)window.y, (jdouble)window.width, (jdouble)window.height}; env->SetDoubleArrayRegion(window_out, 0, 4, tmp_window);
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void calcOpticalFlowFarneback(Mat prev, Mat next, Mat& flow, double pyr_scale, int levels, int winsize, int iterations, int poly_n, double poly_sigma, int flags)
//



JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowFarneback_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jint, jint, jint, jint, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowFarneback_10
  (JNIEnv* env, jclass , jlong prev_nativeObj, jlong next_nativeObj, jlong flow_nativeObj, jdouble pyr_scale, jint levels, jint winsize, jint iterations, jint poly_n, jdouble poly_sigma, jint flags)
{
    static const char method_name[] = "video::calcOpticalFlowFarneback_10()";
    try {
        LOGD("%s", method_name);
        Mat& prev = *((Mat*)prev_nativeObj);
        Mat& next = *((Mat*)next_nativeObj);
        Mat& flow = *((Mat*)flow_nativeObj);
        cv::calcOpticalFlowFarneback( prev, next, flow, (double)pyr_scale, (int)levels, (int)winsize, (int)iterations, (int)poly_n, (double)poly_sigma, (int)flags );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void calcOpticalFlowPyrLK(Mat prevImg, Mat nextImg, vector_Point2f prevPts, vector_Point2f& nextPts, vector_uchar& status, vector_float& err, Size winSize = Size(21,21), int maxLevel = 3, TermCriteria criteria = TermCriteria(TermCriteria::COUNT+TermCriteria::EPS, 30, 0.01), int flags = 0, double minEigThreshold = 1e-4)
//



JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowPyrLK_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jdouble, jdouble, jint, jint, jint, jdouble, jint, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowPyrLK_10
  (JNIEnv* env, jclass , jlong prevImg_nativeObj, jlong nextImg_nativeObj, jlong prevPts_mat_nativeObj, jlong nextPts_mat_nativeObj, jlong status_mat_nativeObj, jlong err_mat_nativeObj, jdouble winSize_width, jdouble winSize_height, jint maxLevel, jint criteria_type, jint criteria_maxCount, jdouble criteria_epsilon, jint flags, jdouble minEigThreshold)
{
    static const char method_name[] = "video::calcOpticalFlowPyrLK_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Point2f> prevPts;
        Mat& prevPts_mat = *((Mat*)prevPts_mat_nativeObj);
        Mat_to_vector_Point2f( prevPts_mat, prevPts );
        std::vector<Point2f> nextPts;
        Mat& nextPts_mat = *((Mat*)nextPts_mat_nativeObj);
        Mat_to_vector_Point2f( nextPts_mat, nextPts );
        std::vector<uchar> status;
        Mat& status_mat = *((Mat*)status_mat_nativeObj);
        std::vector<float> err;
        Mat& err_mat = *((Mat*)err_mat_nativeObj);
        Mat& prevImg = *((Mat*)prevImg_nativeObj);
        Mat& nextImg = *((Mat*)nextImg_nativeObj);
        Size winSize((int)winSize_width, (int)winSize_height);
        TermCriteria criteria(criteria_type, criteria_maxCount, criteria_epsilon);
        cv::calcOpticalFlowPyrLK( prevImg, nextImg, prevPts, nextPts, status, err, winSize, (int)maxLevel, criteria, (int)flags, (double)minEigThreshold );
        vector_Point2f_to_Mat( nextPts, nextPts_mat );  vector_uchar_to_Mat( status, status_mat );  vector_float_to_Mat( err, err_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowPyrLK_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jdouble, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowPyrLK_11
  (JNIEnv* env, jclass , jlong prevImg_nativeObj, jlong nextImg_nativeObj, jlong prevPts_mat_nativeObj, jlong nextPts_mat_nativeObj, jlong status_mat_nativeObj, jlong err_mat_nativeObj, jdouble winSize_width, jdouble winSize_height, jint maxLevel)
{
    static const char method_name[] = "video::calcOpticalFlowPyrLK_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Point2f> prevPts;
        Mat& prevPts_mat = *((Mat*)prevPts_mat_nativeObj);
        Mat_to_vector_Point2f( prevPts_mat, prevPts );
        std::vector<Point2f> nextPts;
        Mat& nextPts_mat = *((Mat*)nextPts_mat_nativeObj);
        Mat_to_vector_Point2f( nextPts_mat, nextPts );
        std::vector<uchar> status;
        Mat& status_mat = *((Mat*)status_mat_nativeObj);
        std::vector<float> err;
        Mat& err_mat = *((Mat*)err_mat_nativeObj);
        Mat& prevImg = *((Mat*)prevImg_nativeObj);
        Mat& nextImg = *((Mat*)nextImg_nativeObj);
        Size winSize((int)winSize_width, (int)winSize_height);
        cv::calcOpticalFlowPyrLK( prevImg, nextImg, prevPts, nextPts, status, err, winSize, (int)maxLevel );
        vector_Point2f_to_Mat( nextPts, nextPts_mat );  vector_uchar_to_Mat( status, status_mat );  vector_float_to_Mat( err, err_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowPyrLK_12 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_Video_calcOpticalFlowPyrLK_12
  (JNIEnv* env, jclass , jlong prevImg_nativeObj, jlong nextImg_nativeObj, jlong prevPts_mat_nativeObj, jlong nextPts_mat_nativeObj, jlong status_mat_nativeObj, jlong err_mat_nativeObj)
{
    static const char method_name[] = "video::calcOpticalFlowPyrLK_12()";
    try {
        LOGD("%s", method_name);
        std::vector<Point2f> prevPts;
        Mat& prevPts_mat = *((Mat*)prevPts_mat_nativeObj);
        Mat_to_vector_Point2f( prevPts_mat, prevPts );
        std::vector<Point2f> nextPts;
        Mat& nextPts_mat = *((Mat*)nextPts_mat_nativeObj);
        Mat_to_vector_Point2f( nextPts_mat, nextPts );
        std::vector<uchar> status;
        Mat& status_mat = *((Mat*)status_mat_nativeObj);
        std::vector<float> err;
        Mat& err_mat = *((Mat*)err_mat_nativeObj);
        Mat& prevImg = *((Mat*)prevImg_nativeObj);
        Mat& nextImg = *((Mat*)nextImg_nativeObj);
        cv::calcOpticalFlowPyrLK( prevImg, nextImg, prevPts, nextPts, status, err );
        vector_Point2f_to_Mat( nextPts, nextPts_mat );  vector_uchar_to_Mat( status, status_mat );  vector_float_to_Mat( err, err_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//   KalmanFilter(int dynamParams, int measureParams, int controlParams = 0, int type = CV_32F)
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_KalmanFilter_10 (JNIEnv*, jclass, jint, jint, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_KalmanFilter_10
  (JNIEnv* env, jclass , jint dynamParams, jint measureParams, jint controlParams, jint type)
{
    static const char method_name[] = "video::KalmanFilter_10()";
    try {
        LOGD("%s", method_name);
        
        cv::KalmanFilter* _retval_ = new cv::KalmanFilter( (int)dynamParams, (int)measureParams, (int)controlParams, (int)type );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_KalmanFilter_11 (JNIEnv*, jclass, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_KalmanFilter_11
  (JNIEnv* env, jclass , jint dynamParams, jint measureParams)
{
    static const char method_name[] = "video::KalmanFilter_11()";
    try {
        LOGD("%s", method_name);
        
        cv::KalmanFilter* _retval_ = new cv::KalmanFilter( (int)dynamParams, (int)measureParams );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   KalmanFilter()
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_KalmanFilter_12 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_KalmanFilter_12
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "video::KalmanFilter_12()";
    try {
        LOGD("%s", method_name);
        
        cv::KalmanFilter* _retval_ = new cv::KalmanFilter(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat correct(Mat measurement)
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_correct_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_correct_10
  (JNIEnv* env, jclass , jlong self, jlong measurement_nativeObj)
{
    static const char method_name[] = "video::correct_10()";
    try {
        LOGD("%s", method_name);
        cv::KalmanFilter* me = (cv::KalmanFilter*) self; //TODO: check for NULL
        Mat& measurement = *((Mat*)measurement_nativeObj);
        ::Mat _retval_ = me->correct( measurement );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat predict(Mat control = Mat())
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_predict_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_predict_10
  (JNIEnv* env, jclass , jlong self, jlong control_nativeObj)
{
    static const char method_name[] = "video::predict_10()";
    try {
        LOGD("%s", method_name);
        cv::KalmanFilter* me = (cv::KalmanFilter*) self; //TODO: check for NULL
        Mat& control = *((Mat*)control_nativeObj);
        ::Mat _retval_ = me->predict( control );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_predict_11 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_predict_11
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::predict_11()";
    try {
        LOGD("%s", method_name);
        cv::KalmanFilter* me = (cv::KalmanFilter*) self; //TODO: check for NULL
        ::Mat _retval_ = me->predict(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// Mat KalmanFilter::statePre
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1statePre_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1statePre_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::get_1statePre_10()";
    try {
        LOGD("%s", method_name);
        cv::KalmanFilter* me = (cv::KalmanFilter*) self; //TODO: check for NULL
        ::Mat _retval_ = me->statePre;//(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void KalmanFilter::statePre
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1statePre_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1statePre_10
  (JNIEnv* env, jclass , jlong self, jlong statePre_nativeObj)
{
    static const char method_name[] = "video::set_1statePre_10()";
    try {
        LOGD("%s", method_name);
        cv::KalmanFilter* me = (cv::KalmanFilter*) self; //TODO: check for NULL
        Mat& statePre = *((Mat*)statePre_nativeObj);
        me->statePre = ( statePre );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// Mat KalmanFilter::statePost
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1statePost_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1statePost_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::get_1statePost_10()";
    try {
        LOGD("%s", method_name);
        cv::KalmanFilter* me = (cv::KalmanFilter*) self; //TODO: check for NULL
        ::Mat _retval_ = me->statePost;//(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void KalmanFilter::statePost
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1statePost_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1statePost_10
  (JNIEnv* env, jclass , jlong self, jlong statePost_nativeObj)
{
    static const char method_name[] = "video::set_1statePost_10()";
    try {
        LOGD("%s", method_name);
        cv::KalmanFilter* me = (cv::KalmanFilter*) self; //TODO: check for NULL
        Mat& statePost = *((Mat*)statePost_nativeObj);
        me->statePost = ( statePost );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// Mat KalmanFilter::transitionMatrix
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1transitionMatrix_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1transitionMatrix_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::get_1transitionMatrix_10()";
    try {
        LOGD("%s", method_name);
        cv::KalmanFilter* me = (cv::KalmanFilter*) self; //TODO: check for NULL
        ::Mat _retval_ = me->transitionMatrix;//(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void KalmanFilter::transitionMatrix
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1transitionMatrix_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1transitionMatrix_10
  (JNIEnv* env, jclass , jlong self, jlong transitionMatrix_nativeObj)
{
    static const char method_name[] = "video::set_1transitionMatrix_10()";
    try {
        LOGD("%s", method_name);
        cv::KalmanFilter* me = (cv::KalmanFilter*) self; //TODO: check for NULL
        Mat& transitionMatrix = *((Mat*)transitionMatrix_nativeObj);
        me->transitionMatrix = ( transitionMatrix );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// Mat KalmanFilter::controlMatrix
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1controlMatrix_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1controlMatrix_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::get_1controlMatrix_10()";
    try {
        LOGD("%s", method_name);
        cv::KalmanFilter* me = (cv::KalmanFilter*) self; //TODO: check for NULL
        ::Mat _retval_ = me->controlMatrix;//(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void KalmanFilter::controlMatrix
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1controlMatrix_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1controlMatrix_10
  (JNIEnv* env, jclass , jlong self, jlong controlMatrix_nativeObj)
{
    static const char method_name[] = "video::set_1controlMatrix_10()";
    try {
        LOGD("%s", method_name);
        cv::KalmanFilter* me = (cv::KalmanFilter*) self; //TODO: check for NULL
        Mat& controlMatrix = *((Mat*)controlMatrix_nativeObj);
        me->controlMatrix = ( controlMatrix );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// Mat KalmanFilter::measurementMatrix
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1measurementMatrix_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1measurementMatrix_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::get_1measurementMatrix_10()";
    try {
        LOGD("%s", method_name);
        cv::KalmanFilter* me = (cv::KalmanFilter*) self; //TODO: check for NULL
        ::Mat _retval_ = me->measurementMatrix;//(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void KalmanFilter::measurementMatrix
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1measurementMatrix_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1measurementMatrix_10
  (JNIEnv* env, jclass , jlong self, jlong measurementMatrix_nativeObj)
{
    static const char method_name[] = "video::set_1measurementMatrix_10()";
    try {
        LOGD("%s", method_name);
        cv::KalmanFilter* me = (cv::KalmanFilter*) self; //TODO: check for NULL
        Mat& measurementMatrix = *((Mat*)measurementMatrix_nativeObj);
        me->measurementMatrix = ( measurementMatrix );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// Mat KalmanFilter::processNoiseCov
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1processNoiseCov_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1processNoiseCov_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::get_1processNoiseCov_10()";
    try {
        LOGD("%s", method_name);
        cv::KalmanFilter* me = (cv::KalmanFilter*) self; //TODO: check for NULL
        ::Mat _retval_ = me->processNoiseCov;//(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void KalmanFilter::processNoiseCov
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1processNoiseCov_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1processNoiseCov_10
  (JNIEnv* env, jclass , jlong self, jlong processNoiseCov_nativeObj)
{
    static const char method_name[] = "video::set_1processNoiseCov_10()";
    try {
        LOGD("%s", method_name);
        cv::KalmanFilter* me = (cv::KalmanFilter*) self; //TODO: check for NULL
        Mat& processNoiseCov = *((Mat*)processNoiseCov_nativeObj);
        me->processNoiseCov = ( processNoiseCov );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// Mat KalmanFilter::measurementNoiseCov
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1measurementNoiseCov_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1measurementNoiseCov_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::get_1measurementNoiseCov_10()";
    try {
        LOGD("%s", method_name);
        cv::KalmanFilter* me = (cv::KalmanFilter*) self; //TODO: check for NULL
        ::Mat _retval_ = me->measurementNoiseCov;//(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void KalmanFilter::measurementNoiseCov
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1measurementNoiseCov_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1measurementNoiseCov_10
  (JNIEnv* env, jclass , jlong self, jlong measurementNoiseCov_nativeObj)
{
    static const char method_name[] = "video::set_1measurementNoiseCov_10()";
    try {
        LOGD("%s", method_name);
        cv::KalmanFilter* me = (cv::KalmanFilter*) self; //TODO: check for NULL
        Mat& measurementNoiseCov = *((Mat*)measurementNoiseCov_nativeObj);
        me->measurementNoiseCov = ( measurementNoiseCov );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// Mat KalmanFilter::errorCovPre
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1errorCovPre_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1errorCovPre_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::get_1errorCovPre_10()";
    try {
        LOGD("%s", method_name);
        cv::KalmanFilter* me = (cv::KalmanFilter*) self; //TODO: check for NULL
        ::Mat _retval_ = me->errorCovPre;//(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void KalmanFilter::errorCovPre
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1errorCovPre_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1errorCovPre_10
  (JNIEnv* env, jclass , jlong self, jlong errorCovPre_nativeObj)
{
    static const char method_name[] = "video::set_1errorCovPre_10()";
    try {
        LOGD("%s", method_name);
        cv::KalmanFilter* me = (cv::KalmanFilter*) self; //TODO: check for NULL
        Mat& errorCovPre = *((Mat*)errorCovPre_nativeObj);
        me->errorCovPre = ( errorCovPre );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// Mat KalmanFilter::gain
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1gain_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1gain_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::get_1gain_10()";
    try {
        LOGD("%s", method_name);
        cv::KalmanFilter* me = (cv::KalmanFilter*) self; //TODO: check for NULL
        ::Mat _retval_ = me->gain;//(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void KalmanFilter::gain
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1gain_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1gain_10
  (JNIEnv* env, jclass , jlong self, jlong gain_nativeObj)
{
    static const char method_name[] = "video::set_1gain_10()";
    try {
        LOGD("%s", method_name);
        cv::KalmanFilter* me = (cv::KalmanFilter*) self; //TODO: check for NULL
        Mat& gain = *((Mat*)gain_nativeObj);
        me->gain = ( gain );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// Mat KalmanFilter::errorCovPost
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1errorCovPost_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_video_KalmanFilter_get_1errorCovPost_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::get_1errorCovPost_10()";
    try {
        LOGD("%s", method_name);
        cv::KalmanFilter* me = (cv::KalmanFilter*) self; //TODO: check for NULL
        ::Mat _retval_ = me->errorCovPost;//(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void KalmanFilter::errorCovPost
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1errorCovPost_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_set_1errorCovPost_10
  (JNIEnv* env, jclass , jlong self, jlong errorCovPost_nativeObj)
{
    static const char method_name[] = "video::set_1errorCovPost_10()";
    try {
        LOGD("%s", method_name);
        cv::KalmanFilter* me = (cv::KalmanFilter*) self; //TODO: check for NULL
        Mat& errorCovPost = *((Mat*)errorCovPost_nativeObj);
        me->errorCovPost = ( errorCovPost );
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
//  static void cv::KalmanFilter::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_KalmanFilter_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::KalmanFilter*) self;
}


//
//  bool getDetectShadows()
//

using namespace cv;

JNIEXPORT jboolean JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getDetectShadows_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getDetectShadows_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getDetectShadows_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        bool _retval_ = (*me)->getDetectShadows(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getBackgroundRatio()
//

using namespace cv;

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getBackgroundRatio_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getBackgroundRatio_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getBackgroundRatio_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getBackgroundRatio(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getComplexityReductionThreshold()
//

using namespace cv;

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getComplexityReductionThreshold_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getComplexityReductionThreshold_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getComplexityReductionThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getComplexityReductionThreshold(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getShadowThreshold()
//

using namespace cv;

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getShadowThreshold_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getShadowThreshold_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getShadowThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getShadowThreshold(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getVarInit()
//

using namespace cv;

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getVarInit_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getVarInit_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getVarInit_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getVarInit(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getVarMax()
//

using namespace cv;

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getVarMax_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getVarMax_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getVarMax_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getVarMax(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getVarMin()
//

using namespace cv;

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getVarMin_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getVarMin_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getVarMin_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getVarMin(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getVarThreshold()
//

using namespace cv;

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getVarThreshold_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getVarThreshold_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getVarThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getVarThreshold(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getVarThresholdGen()
//

using namespace cv;

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getVarThresholdGen_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getVarThresholdGen_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getVarThresholdGen_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getVarThresholdGen(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getHistory()
//

using namespace cv;

JNIEXPORT jint JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getHistory_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getHistory_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getHistory_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getHistory(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getNMixtures()
//

using namespace cv;

JNIEXPORT jint JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getNMixtures_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getNMixtures_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getNMixtures_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getNMixtures(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getShadowValue()
//

using namespace cv;

JNIEXPORT jint JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getShadowValue_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_getShadowValue_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getShadowValue_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getShadowValue(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void apply(Mat image, Mat& fgmask, double learningRate = -1)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_apply_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_apply_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong fgmask_nativeObj, jdouble learningRate)
{
    static const char method_name[] = "video::apply_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& fgmask = *((Mat*)fgmask_nativeObj);
        (*me)->apply( image, fgmask, (double)learningRate );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_apply_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_apply_11
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong fgmask_nativeObj)
{
    static const char method_name[] = "video::apply_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& fgmask = *((Mat*)fgmask_nativeObj);
        (*me)->apply( image, fgmask );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setBackgroundRatio(double ratio)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setBackgroundRatio_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setBackgroundRatio_10
  (JNIEnv* env, jclass , jlong self, jdouble ratio)
{
    static const char method_name[] = "video::setBackgroundRatio_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        (*me)->setBackgroundRatio( (double)ratio );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setComplexityReductionThreshold(double ct)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setComplexityReductionThreshold_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setComplexityReductionThreshold_10
  (JNIEnv* env, jclass , jlong self, jdouble ct)
{
    static const char method_name[] = "video::setComplexityReductionThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        (*me)->setComplexityReductionThreshold( (double)ct );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setDetectShadows(bool detectShadows)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setDetectShadows_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setDetectShadows_10
  (JNIEnv* env, jclass , jlong self, jboolean detectShadows)
{
    static const char method_name[] = "video::setDetectShadows_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        (*me)->setDetectShadows( (bool)detectShadows );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setHistory(int history)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setHistory_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setHistory_10
  (JNIEnv* env, jclass , jlong self, jint history)
{
    static const char method_name[] = "video::setHistory_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        (*me)->setHistory( (int)history );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setNMixtures(int nmixtures)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setNMixtures_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setNMixtures_10
  (JNIEnv* env, jclass , jlong self, jint nmixtures)
{
    static const char method_name[] = "video::setNMixtures_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        (*me)->setNMixtures( (int)nmixtures );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setShadowThreshold(double threshold)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setShadowThreshold_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setShadowThreshold_10
  (JNIEnv* env, jclass , jlong self, jdouble threshold)
{
    static const char method_name[] = "video::setShadowThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        (*me)->setShadowThreshold( (double)threshold );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setShadowValue(int value)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setShadowValue_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setShadowValue_10
  (JNIEnv* env, jclass , jlong self, jint value)
{
    static const char method_name[] = "video::setShadowValue_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        (*me)->setShadowValue( (int)value );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setVarInit(double varInit)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setVarInit_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setVarInit_10
  (JNIEnv* env, jclass , jlong self, jdouble varInit)
{
    static const char method_name[] = "video::setVarInit_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        (*me)->setVarInit( (double)varInit );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setVarMax(double varMax)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setVarMax_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setVarMax_10
  (JNIEnv* env, jclass , jlong self, jdouble varMax)
{
    static const char method_name[] = "video::setVarMax_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        (*me)->setVarMax( (double)varMax );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setVarMin(double varMin)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setVarMin_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setVarMin_10
  (JNIEnv* env, jclass , jlong self, jdouble varMin)
{
    static const char method_name[] = "video::setVarMin_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        (*me)->setVarMin( (double)varMin );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setVarThreshold(double varThreshold)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setVarThreshold_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setVarThreshold_10
  (JNIEnv* env, jclass , jlong self, jdouble varThreshold)
{
    static const char method_name[] = "video::setVarThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        (*me)->setVarThreshold( (double)varThreshold );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setVarThresholdGen(double varThresholdGen)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setVarThresholdGen_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_setVarThresholdGen_10
  (JNIEnv* env, jclass , jlong self, jdouble varThresholdGen)
{
    static const char method_name[] = "video::setVarThresholdGen_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorMOG2>* me = (Ptr<cv::BackgroundSubtractorMOG2>*) self; //TODO: check for NULL
        (*me)->setVarThresholdGen( (double)varThresholdGen );
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
//  static void Ptr<cv::BackgroundSubtractorMOG2>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorMOG2_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::BackgroundSubtractorMOG2>*) self;
}


//
//  bool getDetectShadows()
//

using namespace cv;

JNIEXPORT jboolean JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_getDetectShadows_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_getDetectShadows_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getDetectShadows_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorKNN>* me = (Ptr<cv::BackgroundSubtractorKNN>*) self; //TODO: check for NULL
        bool _retval_ = (*me)->getDetectShadows(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getDist2Threshold()
//

using namespace cv;

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_getDist2Threshold_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_getDist2Threshold_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getDist2Threshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorKNN>* me = (Ptr<cv::BackgroundSubtractorKNN>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getDist2Threshold(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getShadowThreshold()
//

using namespace cv;

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_getShadowThreshold_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_getShadowThreshold_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getShadowThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorKNN>* me = (Ptr<cv::BackgroundSubtractorKNN>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getShadowThreshold(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getHistory()
//

using namespace cv;

JNIEXPORT jint JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_getHistory_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_getHistory_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getHistory_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorKNN>* me = (Ptr<cv::BackgroundSubtractorKNN>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getHistory(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getNSamples()
//

using namespace cv;

JNIEXPORT jint JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_getNSamples_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_getNSamples_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getNSamples_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorKNN>* me = (Ptr<cv::BackgroundSubtractorKNN>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getNSamples(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getShadowValue()
//

using namespace cv;

JNIEXPORT jint JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_getShadowValue_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_getShadowValue_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getShadowValue_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorKNN>* me = (Ptr<cv::BackgroundSubtractorKNN>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getShadowValue(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getkNNSamples()
//

using namespace cv;

JNIEXPORT jint JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_getkNNSamples_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_getkNNSamples_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "video::getkNNSamples_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorKNN>* me = (Ptr<cv::BackgroundSubtractorKNN>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getkNNSamples(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void setDetectShadows(bool detectShadows)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_setDetectShadows_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_setDetectShadows_10
  (JNIEnv* env, jclass , jlong self, jboolean detectShadows)
{
    static const char method_name[] = "video::setDetectShadows_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorKNN>* me = (Ptr<cv::BackgroundSubtractorKNN>*) self; //TODO: check for NULL
        (*me)->setDetectShadows( (bool)detectShadows );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setDist2Threshold(double _dist2Threshold)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_setDist2Threshold_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_setDist2Threshold_10
  (JNIEnv* env, jclass , jlong self, jdouble _dist2Threshold)
{
    static const char method_name[] = "video::setDist2Threshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorKNN>* me = (Ptr<cv::BackgroundSubtractorKNN>*) self; //TODO: check for NULL
        (*me)->setDist2Threshold( (double)_dist2Threshold );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setHistory(int history)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_setHistory_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_setHistory_10
  (JNIEnv* env, jclass , jlong self, jint history)
{
    static const char method_name[] = "video::setHistory_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorKNN>* me = (Ptr<cv::BackgroundSubtractorKNN>*) self; //TODO: check for NULL
        (*me)->setHistory( (int)history );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setNSamples(int _nN)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_setNSamples_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_setNSamples_10
  (JNIEnv* env, jclass , jlong self, jint _nN)
{
    static const char method_name[] = "video::setNSamples_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorKNN>* me = (Ptr<cv::BackgroundSubtractorKNN>*) self; //TODO: check for NULL
        (*me)->setNSamples( (int)_nN );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setShadowThreshold(double threshold)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_setShadowThreshold_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_setShadowThreshold_10
  (JNIEnv* env, jclass , jlong self, jdouble threshold)
{
    static const char method_name[] = "video::setShadowThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorKNN>* me = (Ptr<cv::BackgroundSubtractorKNN>*) self; //TODO: check for NULL
        (*me)->setShadowThreshold( (double)threshold );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setShadowValue(int value)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_setShadowValue_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_setShadowValue_10
  (JNIEnv* env, jclass , jlong self, jint value)
{
    static const char method_name[] = "video::setShadowValue_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorKNN>* me = (Ptr<cv::BackgroundSubtractorKNN>*) self; //TODO: check for NULL
        (*me)->setShadowValue( (int)value );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setkNNSamples(int _nkNN)
//

using namespace cv;

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_setkNNSamples_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_setkNNSamples_10
  (JNIEnv* env, jclass , jlong self, jint _nkNN)
{
    static const char method_name[] = "video::setkNNSamples_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::BackgroundSubtractorKNN>* me = (Ptr<cv::BackgroundSubtractorKNN>*) self; //TODO: check for NULL
        (*me)->setkNNSamples( (int)_nkNN );
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
//  static void Ptr<cv::BackgroundSubtractorKNN>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_video_BackgroundSubtractorKNN_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::BackgroundSubtractorKNN>*) self;
}



} // extern "C"

#endif // HAVE_OPENCV_VIDEO
