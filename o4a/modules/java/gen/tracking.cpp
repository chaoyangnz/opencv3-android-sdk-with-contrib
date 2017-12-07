
//
// This file is auto-generated, please don't edit!
//

#define LOG_TAG "org.opencv.tracking"

#include "common.h"

#include "opencv2/opencv_modules.hpp"
#ifdef HAVE_OPENCV_TRACKING

#include <string>

#include "opencv2/tracking.hpp"

#include "/Users/Chao/opencv/modules/dnn/misc/java/src/cpp/dnn_converters.hpp"
#include "/Users/Chao/opencv/modules/features2d/misc/java/src/cpp/features2d_converters.hpp"
#include "/Users/Chao/opencv_contrib/modules/tracking/include/opencv2/tracking/feature.hpp"
#include "/Users/Chao/opencv_contrib/modules/tracking/include/opencv2/tracking/tracker.hpp"

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
//  bool init(Mat image, Rect2d boundingBox)
//

using namespace cv;

JNIEXPORT jboolean JNICALL Java_org_opencv_tracking_Tracker_init_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT jboolean JNICALL Java_org_opencv_tracking_Tracker_init_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jdouble boundingBox_x, jdouble boundingBox_y, jdouble boundingBox_width, jdouble boundingBox_height)
{
    static const char method_name[] = "tracking::init_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::Tracker>* me = (Ptr<cv::Tracker>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Rect boundingBox(boundingBox_x, boundingBox_y, boundingBox_width, boundingBox_height);
        bool _retval_ = (*me)->init( image, boundingBox );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool update(Mat image, Rect2d& boundingBox)
//

using namespace cv;

JNIEXPORT jboolean JNICALL Java_org_opencv_tracking_Tracker_update_10 (JNIEnv*, jclass, jlong, jlong, jdoubleArray);

JNIEXPORT jboolean JNICALL Java_org_opencv_tracking_Tracker_update_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jdoubleArray boundingBox_out)
{
    static const char method_name[] = "tracking::update_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::Tracker>* me = (Ptr<cv::Tracker>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Rect2d boundingBox;
        bool _retval_ = (*me)->update( image, boundingBox );
        jdouble tmp_boundingBox[4] = {(jdouble)boundingBox.x, (jdouble)boundingBox.y, (jdouble)boundingBox.width, (jdouble)boundingBox.height}; env->SetDoubleArrayRegion(boundingBox_out, 0, 4, tmp_boundingBox);
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
//  static void Ptr<cv::Tracker>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_tracking_Tracker_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_tracking_Tracker_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::Tracker>*) self;
}


//
// static Ptr_TrackerMIL create()
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_tracking_TrackerMIL_create_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_tracking_TrackerMIL_create_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "tracking::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::TrackerMIL> Ptr_TrackerMIL;
        Ptr_TrackerMIL _retval_ = cv::TrackerMIL::create(  );
        return (jlong)(new Ptr_TrackerMIL(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::TrackerMIL>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_tracking_TrackerMIL_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_tracking_TrackerMIL_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::TrackerMIL>*) self;
}


//
// static Ptr_TrackerGOTURN create()
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_tracking_TrackerGOTURN_create_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_tracking_TrackerGOTURN_create_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "tracking::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::TrackerGOTURN> Ptr_TrackerGOTURN;
        Ptr_TrackerGOTURN _retval_ = cv::TrackerGOTURN::create(  );
        return (jlong)(new Ptr_TrackerGOTURN(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::TrackerGOTURN>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_tracking_TrackerGOTURN_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_tracking_TrackerGOTURN_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::TrackerGOTURN>*) self;
}


//
// static Ptr_TrackerTLD create()
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_tracking_TrackerTLD_create_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_tracking_TrackerTLD_create_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "tracking::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::TrackerTLD> Ptr_TrackerTLD;
        Ptr_TrackerTLD _retval_ = cv::TrackerTLD::create(  );
        return (jlong)(new Ptr_TrackerTLD(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::TrackerTLD>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_tracking_TrackerTLD_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_tracking_TrackerTLD_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::TrackerTLD>*) self;
}


//
// static Ptr_TrackerMedianFlow create()
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_tracking_TrackerMedianFlow_create_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_tracking_TrackerMedianFlow_create_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "tracking::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::TrackerMedianFlow> Ptr_TrackerMedianFlow;
        Ptr_TrackerMedianFlow _retval_ = cv::TrackerMedianFlow::create(  );
        return (jlong)(new Ptr_TrackerMedianFlow(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::TrackerMedianFlow>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_tracking_TrackerMedianFlow_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_tracking_TrackerMedianFlow_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::TrackerMedianFlow>*) self;
}


//
// static Ptr_TrackerBoosting create()
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_tracking_TrackerBoosting_create_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_tracking_TrackerBoosting_create_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "tracking::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::TrackerBoosting> Ptr_TrackerBoosting;
        Ptr_TrackerBoosting _retval_ = cv::TrackerBoosting::create(  );
        return (jlong)(new Ptr_TrackerBoosting(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::TrackerBoosting>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_tracking_TrackerBoosting_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_tracking_TrackerBoosting_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::TrackerBoosting>*) self;
}


//
//   MultiTracker()
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_tracking_MultiTracker_MultiTracker_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_tracking_MultiTracker_MultiTracker_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "tracking::MultiTracker_10()";
    try {
        LOGD("%s", method_name);
        
        cv::MultiTracker* _retval_ = new cv::MultiTracker(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Ptr_MultiTracker create()
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_tracking_MultiTracker_create_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_tracking_MultiTracker_create_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "tracking::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::MultiTracker> Ptr_MultiTracker;
        Ptr_MultiTracker _retval_ = cv::MultiTracker::create(  );
        return (jlong)(new Ptr_MultiTracker(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool add(Ptr_Tracker newTracker, Mat image, Rect2d boundingBox)
//

using namespace cv;

JNIEXPORT jboolean JNICALL Java_org_opencv_tracking_MultiTracker_add_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT jboolean JNICALL Java_org_opencv_tracking_MultiTracker_add_10
  (JNIEnv* env, jclass , jlong self, jlong newTracker_nativeObj, jlong image_nativeObj, jdouble boundingBox_x, jdouble boundingBox_y, jdouble boundingBox_width, jdouble boundingBox_height)
{
    static const char method_name[] = "tracking::add_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::MultiTracker>* me = (Ptr<cv::MultiTracker>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Rect boundingBox(boundingBox_x, boundingBox_y, boundingBox_width, boundingBox_height);
        bool _retval_ = (*me)->add( *((Ptr<cv::Tracker>*)newTracker_nativeObj), image, boundingBox );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool update(Mat image, vector_Rect2d& boundingBox)
//

using namespace cv;

JNIEXPORT jboolean JNICALL Java_org_opencv_tracking_MultiTracker_update_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_tracking_MultiTracker_update_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong boundingBox_mat_nativeObj)
{
    static const char method_name[] = "tracking::update_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect2d> boundingBox;
        Mat& boundingBox_mat = *((Mat*)boundingBox_mat_nativeObj);
        Ptr<cv::MultiTracker>* me = (Ptr<cv::MultiTracker>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        bool _retval_ = (*me)->update( image, boundingBox );
        vector_Rect2d_to_Mat( boundingBox, boundingBox_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  vector_Rect2d getObjects()
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_tracking_MultiTracker_getObjects_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_tracking_MultiTracker_getObjects_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "tracking::getObjects_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::MultiTracker>* me = (Ptr<cv::MultiTracker>*) self; //TODO: check for NULL
        std::vector<Rect2d> _ret_val_vector_ = (*me)->getObjects(  );
        Mat* _retval_ = new Mat();  vector_Rect2d_to_Mat(_ret_val_vector_, *_retval_);
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
//  static void Ptr<cv::MultiTracker>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_tracking_MultiTracker_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_tracking_MultiTracker_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::MultiTracker>*) self;
}


//
// static Ptr_TrackerMOSSE create()
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_tracking_TrackerMOSSE_create_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_tracking_TrackerMOSSE_create_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "tracking::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::TrackerMOSSE> Ptr_TrackerMOSSE;
        Ptr_TrackerMOSSE _retval_ = cv::TrackerMOSSE::create(  );
        return (jlong)(new Ptr_TrackerMOSSE(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::TrackerMOSSE>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_tracking_TrackerMOSSE_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_tracking_TrackerMOSSE_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::TrackerMOSSE>*) self;
}


//
// static Ptr_TrackerKCF create()
//

using namespace cv;

JNIEXPORT jlong JNICALL Java_org_opencv_tracking_TrackerKCF_create_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_tracking_TrackerKCF_create_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "tracking::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::TrackerKCF> Ptr_TrackerKCF;
        Ptr_TrackerKCF _retval_ = cv::TrackerKCF::create(  );
        return (jlong)(new Ptr_TrackerKCF(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::TrackerKCF>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_tracking_TrackerKCF_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_tracking_TrackerKCF_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::TrackerKCF>*) self;
}



} // extern "C"

#endif // HAVE_OPENCV_TRACKING
