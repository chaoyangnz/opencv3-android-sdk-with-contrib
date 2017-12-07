
//
// This file is auto-generated, please don't edit!
//

#define LOG_TAG "org.opencv.phase_unwrapping"

#include "common.h"

#include "opencv2/opencv_modules.hpp"
#ifdef HAVE_OPENCV_PHASE_UNWRAPPING

#include <string>

#include "opencv2/phase_unwrapping.hpp"

#include "/Users/Chao/opencv_contrib/modules/phase_unwrapping/include/opencv2/phase_unwrapping/histogramphaseunwrapping.hpp"
#include "/Users/Chao/opencv_contrib/modules/phase_unwrapping/include/opencv2/phase_unwrapping/phase_unwrapping.hpp"

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
//  void unwrapPhaseMap(Mat wrappedPhaseMap, Mat& unwrappedPhaseMap, Mat shadowMask = Mat())
//

using namespace cv::phase_unwrapping;

JNIEXPORT void JNICALL Java_org_opencv_phase_1unwrapping_PhaseUnwrapping_unwrapPhaseMap_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_phase_1unwrapping_PhaseUnwrapping_unwrapPhaseMap_10
  (JNIEnv* env, jclass , jlong self, jlong wrappedPhaseMap_nativeObj, jlong unwrappedPhaseMap_nativeObj, jlong shadowMask_nativeObj)
{
    static const char method_name[] = "phase_1unwrapping::unwrapPhaseMap_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::phase_unwrapping::PhaseUnwrapping>* me = (Ptr<cv::phase_unwrapping::PhaseUnwrapping>*) self; //TODO: check for NULL
        Mat& wrappedPhaseMap = *((Mat*)wrappedPhaseMap_nativeObj);
        Mat& unwrappedPhaseMap = *((Mat*)unwrappedPhaseMap_nativeObj);
        Mat& shadowMask = *((Mat*)shadowMask_nativeObj);
        (*me)->unwrapPhaseMap( wrappedPhaseMap, unwrappedPhaseMap, shadowMask );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



using namespace cv::phase_unwrapping;

JNIEXPORT void JNICALL Java_org_opencv_phase_1unwrapping_PhaseUnwrapping_unwrapPhaseMap_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_phase_1unwrapping_PhaseUnwrapping_unwrapPhaseMap_11
  (JNIEnv* env, jclass , jlong self, jlong wrappedPhaseMap_nativeObj, jlong unwrappedPhaseMap_nativeObj)
{
    static const char method_name[] = "phase_1unwrapping::unwrapPhaseMap_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::phase_unwrapping::PhaseUnwrapping>* me = (Ptr<cv::phase_unwrapping::PhaseUnwrapping>*) self; //TODO: check for NULL
        Mat& wrappedPhaseMap = *((Mat*)wrappedPhaseMap_nativeObj);
        Mat& unwrappedPhaseMap = *((Mat*)unwrappedPhaseMap_nativeObj);
        (*me)->unwrapPhaseMap( wrappedPhaseMap, unwrappedPhaseMap );
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
//  static void Ptr<cv::phase_unwrapping::PhaseUnwrapping>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_phase_1unwrapping_PhaseUnwrapping_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_phase_1unwrapping_PhaseUnwrapping_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::phase_unwrapping::PhaseUnwrapping>*) self;
}


//
//  void getInverseReliabilityMap(Mat& reliabilityMap)
//

using namespace cv::phase_unwrapping;

JNIEXPORT void JNICALL Java_org_opencv_phase_1unwrapping_HistogramPhaseUnwrapping_getInverseReliabilityMap_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_phase_1unwrapping_HistogramPhaseUnwrapping_getInverseReliabilityMap_10
  (JNIEnv* env, jclass , jlong self, jlong reliabilityMap_nativeObj)
{
    static const char method_name[] = "phase_1unwrapping::getInverseReliabilityMap_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::phase_unwrapping::HistogramPhaseUnwrapping>* me = (Ptr<cv::phase_unwrapping::HistogramPhaseUnwrapping>*) self; //TODO: check for NULL
        Mat& reliabilityMap = *((Mat*)reliabilityMap_nativeObj);
        (*me)->getInverseReliabilityMap( reliabilityMap );
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
//  static void Ptr<cv::phase_unwrapping::HistogramPhaseUnwrapping>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_phase_1unwrapping_HistogramPhaseUnwrapping_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_phase_1unwrapping_HistogramPhaseUnwrapping_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::phase_unwrapping::HistogramPhaseUnwrapping>*) self;
}



} // extern "C"

#endif // HAVE_OPENCV_PHASE_UNWRAPPING
