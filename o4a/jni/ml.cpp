
//
// This file is auto-generated, please don't edit!
//

#define LOG_TAG "org.opencv.ml"

#include "common.h"

#include "opencv2/opencv_modules.hpp"
#ifdef HAVE_OPENCV_ML

#include <string>

#include "opencv2/ml.hpp"

#include "/Users/Chao/opencv/modules/ml/include/opencv2/ml.hpp"

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
//  Mat getMeans()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_EM_getMeans_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_EM_getMeans_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getMeans_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::EM>* me = (Ptr<cv::ml::EM>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getMeans(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat getWeights()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_EM_getWeights_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_EM_getWeights_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getWeights_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::EM>* me = (Ptr<cv::ml::EM>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getWeights(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Ptr_EM create()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_EM_create_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_EM_create_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "ml::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ml::EM> Ptr_EM;
        Ptr_EM _retval_ = cv::ml::EM::create(  );
        return (jlong)(new Ptr_EM(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Ptr_EM load(String filepath, String nodeName = String())
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_EM_load_10 (JNIEnv*, jclass, jstring, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_EM_load_10
  (JNIEnv* env, jclass , jstring filepath, jstring nodeName)
{
    static const char method_name[] = "ml::load_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ml::EM> Ptr_EM;
        const char* utf_filepath = env->GetStringUTFChars(filepath, 0); String n_filepath( utf_filepath ? utf_filepath : "" ); env->ReleaseStringUTFChars(filepath, utf_filepath);
        const char* utf_nodeName = env->GetStringUTFChars(nodeName, 0); String n_nodeName( utf_nodeName ? utf_nodeName : "" ); env->ReleaseStringUTFChars(nodeName, utf_nodeName);
        Ptr_EM _retval_ = cv::ml::EM::load( n_filepath, n_nodeName );
        return (jlong)(new Ptr_EM(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_EM_load_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_EM_load_11
  (JNIEnv* env, jclass , jstring filepath)
{
    static const char method_name[] = "ml::load_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ml::EM> Ptr_EM;
        const char* utf_filepath = env->GetStringUTFChars(filepath, 0); String n_filepath( utf_filepath ? utf_filepath : "" ); env->ReleaseStringUTFChars(filepath, utf_filepath);
        Ptr_EM _retval_ = cv::ml::EM::load( n_filepath );
        return (jlong)(new Ptr_EM(_retval_));
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

using namespace cv::ml;

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_ml_EM_getTermCriteria_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_ml_EM_getTermCriteria_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getTermCriteria_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::EM>* me = (Ptr<cv::ml::EM>*) self; //TODO: check for NULL
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
//  Vec2d predict2(Mat sample, Mat& probs)
//

using namespace cv::ml;

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_ml_EM_predict2_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_ml_EM_predict2_10
  (JNIEnv* env, jclass , jlong self, jlong sample_nativeObj, jlong probs_nativeObj)
{
    static const char method_name[] = "ml::predict2_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::EM>* me = (Ptr<cv::ml::EM>*) self; //TODO: check for NULL
        Mat& sample = *((Mat*)sample_nativeObj);
        Mat& probs = *((Mat*)probs_nativeObj);
        Vec2d _retval_ = (*me)->predict2( sample, probs );
        jdoubleArray _da_retval_ = env->NewDoubleArray(2);  jdouble _tmp_retval_[2] = {(jdouble)_retval_.val[0], (jdouble)_retval_.val[1]}; env->SetDoubleArrayRegion(_da_retval_, 0, 2, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool trainE(Mat samples, Mat means0, Mat covs0 = Mat(), Mat weights0 = Mat(), Mat& logLikelihoods = Mat(), Mat& labels = Mat(), Mat& probs = Mat())
//

using namespace cv::ml;

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_EM_trainE_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_EM_trainE_10
  (JNIEnv* env, jclass , jlong self, jlong samples_nativeObj, jlong means0_nativeObj, jlong covs0_nativeObj, jlong weights0_nativeObj, jlong logLikelihoods_nativeObj, jlong labels_nativeObj, jlong probs_nativeObj)
{
    static const char method_name[] = "ml::trainE_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::EM>* me = (Ptr<cv::ml::EM>*) self; //TODO: check for NULL
        Mat& samples = *((Mat*)samples_nativeObj);
        Mat& means0 = *((Mat*)means0_nativeObj);
        Mat& covs0 = *((Mat*)covs0_nativeObj);
        Mat& weights0 = *((Mat*)weights0_nativeObj);
        Mat& logLikelihoods = *((Mat*)logLikelihoods_nativeObj);
        Mat& labels = *((Mat*)labels_nativeObj);
        Mat& probs = *((Mat*)probs_nativeObj);
        bool _retval_ = (*me)->trainE( samples, means0, covs0, weights0, logLikelihoods, labels, probs );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::ml;

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_EM_trainE_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_EM_trainE_11
  (JNIEnv* env, jclass , jlong self, jlong samples_nativeObj, jlong means0_nativeObj)
{
    static const char method_name[] = "ml::trainE_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::EM>* me = (Ptr<cv::ml::EM>*) self; //TODO: check for NULL
        Mat& samples = *((Mat*)samples_nativeObj);
        Mat& means0 = *((Mat*)means0_nativeObj);
        bool _retval_ = (*me)->trainE( samples, means0 );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool trainEM(Mat samples, Mat& logLikelihoods = Mat(), Mat& labels = Mat(), Mat& probs = Mat())
//

using namespace cv::ml;

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_EM_trainEM_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_EM_trainEM_10
  (JNIEnv* env, jclass , jlong self, jlong samples_nativeObj, jlong logLikelihoods_nativeObj, jlong labels_nativeObj, jlong probs_nativeObj)
{
    static const char method_name[] = "ml::trainEM_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::EM>* me = (Ptr<cv::ml::EM>*) self; //TODO: check for NULL
        Mat& samples = *((Mat*)samples_nativeObj);
        Mat& logLikelihoods = *((Mat*)logLikelihoods_nativeObj);
        Mat& labels = *((Mat*)labels_nativeObj);
        Mat& probs = *((Mat*)probs_nativeObj);
        bool _retval_ = (*me)->trainEM( samples, logLikelihoods, labels, probs );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::ml;

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_EM_trainEM_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_EM_trainEM_11
  (JNIEnv* env, jclass , jlong self, jlong samples_nativeObj)
{
    static const char method_name[] = "ml::trainEM_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::EM>* me = (Ptr<cv::ml::EM>*) self; //TODO: check for NULL
        Mat& samples = *((Mat*)samples_nativeObj);
        bool _retval_ = (*me)->trainEM( samples );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool trainM(Mat samples, Mat probs0, Mat& logLikelihoods = Mat(), Mat& labels = Mat(), Mat& probs = Mat())
//

using namespace cv::ml;

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_EM_trainM_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_EM_trainM_10
  (JNIEnv* env, jclass , jlong self, jlong samples_nativeObj, jlong probs0_nativeObj, jlong logLikelihoods_nativeObj, jlong labels_nativeObj, jlong probs_nativeObj)
{
    static const char method_name[] = "ml::trainM_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::EM>* me = (Ptr<cv::ml::EM>*) self; //TODO: check for NULL
        Mat& samples = *((Mat*)samples_nativeObj);
        Mat& probs0 = *((Mat*)probs0_nativeObj);
        Mat& logLikelihoods = *((Mat*)logLikelihoods_nativeObj);
        Mat& labels = *((Mat*)labels_nativeObj);
        Mat& probs = *((Mat*)probs_nativeObj);
        bool _retval_ = (*me)->trainM( samples, probs0, logLikelihoods, labels, probs );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::ml;

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_EM_trainM_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_EM_trainM_11
  (JNIEnv* env, jclass , jlong self, jlong samples_nativeObj, jlong probs0_nativeObj)
{
    static const char method_name[] = "ml::trainM_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::EM>* me = (Ptr<cv::ml::EM>*) self; //TODO: check for NULL
        Mat& samples = *((Mat*)samples_nativeObj);
        Mat& probs0 = *((Mat*)probs0_nativeObj);
        bool _retval_ = (*me)->trainM( samples, probs0 );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float predict(Mat samples, Mat& results = Mat(), int flags = 0)
//

using namespace cv::ml;

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_EM_predict_10 (JNIEnv*, jclass, jlong, jlong, jlong, jint);

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_EM_predict_10
  (JNIEnv* env, jclass , jlong self, jlong samples_nativeObj, jlong results_nativeObj, jint flags)
{
    static const char method_name[] = "ml::predict_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::EM>* me = (Ptr<cv::ml::EM>*) self; //TODO: check for NULL
        Mat& samples = *((Mat*)samples_nativeObj);
        Mat& results = *((Mat*)results_nativeObj);
        float _retval_ = (*me)->predict( samples, results, (int)flags );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::ml;

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_EM_predict_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_EM_predict_11
  (JNIEnv* env, jclass , jlong self, jlong samples_nativeObj)
{
    static const char method_name[] = "ml::predict_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::EM>* me = (Ptr<cv::ml::EM>*) self; //TODO: check for NULL
        Mat& samples = *((Mat*)samples_nativeObj);
        float _retval_ = (*me)->predict( samples );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getClustersNumber()
//

using namespace cv::ml;

JNIEXPORT jint JNICALL Java_org_opencv_ml_EM_getClustersNumber_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_EM_getClustersNumber_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getClustersNumber_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::EM>* me = (Ptr<cv::ml::EM>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getClustersNumber(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getCovarianceMatrixType()
//

using namespace cv::ml;

JNIEXPORT jint JNICALL Java_org_opencv_ml_EM_getCovarianceMatrixType_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_EM_getCovarianceMatrixType_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getCovarianceMatrixType_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::EM>* me = (Ptr<cv::ml::EM>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getCovarianceMatrixType(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void getCovs(vector_Mat& covs)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_EM_getCovs_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_EM_getCovs_10
  (JNIEnv* env, jclass , jlong self, jlong covs_mat_nativeObj)
{
    static const char method_name[] = "ml::getCovs_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> covs;
        Mat& covs_mat = *((Mat*)covs_mat_nativeObj);
        Ptr<cv::ml::EM>* me = (Ptr<cv::ml::EM>*) self; //TODO: check for NULL
        (*me)->getCovs( covs );
        vector_Mat_to_Mat( covs, covs_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setClustersNumber(int val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_EM_setClustersNumber_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_EM_setClustersNumber_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    static const char method_name[] = "ml::setClustersNumber_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::EM>* me = (Ptr<cv::ml::EM>*) self; //TODO: check for NULL
        (*me)->setClustersNumber( (int)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setCovarianceMatrixType(int val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_EM_setCovarianceMatrixType_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_EM_setCovarianceMatrixType_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    static const char method_name[] = "ml::setCovarianceMatrixType_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::EM>* me = (Ptr<cv::ml::EM>*) self; //TODO: check for NULL
        (*me)->setCovarianceMatrixType( (int)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setTermCriteria(TermCriteria val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_EM_setTermCriteria_10 (JNIEnv*, jclass, jlong, jint, jint, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_EM_setTermCriteria_10
  (JNIEnv* env, jclass , jlong self, jint val_type, jint val_maxCount, jdouble val_epsilon)
{
    static const char method_name[] = "ml::setTermCriteria_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::EM>* me = (Ptr<cv::ml::EM>*) self; //TODO: check for NULL
        TermCriteria val(val_type, val_maxCount, val_epsilon);
        (*me)->setTermCriteria( val );
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
//  static void Ptr<cv::ml::EM>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ml_EM_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_EM_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ml::EM>*) self;
}


//
//  Mat getClassWeights()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_SVM_getClassWeights_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_SVM_getClassWeights_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getClassWeights_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVM>* me = (Ptr<cv::ml::SVM>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getClassWeights(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat getSupportVectors()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_SVM_getSupportVectors_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_SVM_getSupportVectors_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getSupportVectors_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVM>* me = (Ptr<cv::ml::SVM>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getSupportVectors(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat getUncompressedSupportVectors()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_SVM_getUncompressedSupportVectors_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_SVM_getUncompressedSupportVectors_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getUncompressedSupportVectors_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVM>* me = (Ptr<cv::ml::SVM>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getUncompressedSupportVectors(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Ptr_ParamGrid getDefaultGridPtr(int param_id)
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_SVM_getDefaultGridPtr_10 (JNIEnv*, jclass, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_SVM_getDefaultGridPtr_10
  (JNIEnv* env, jclass , jint param_id)
{
    static const char method_name[] = "ml::getDefaultGridPtr_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ml::ParamGrid> Ptr_ParamGrid;
        Ptr_ParamGrid _retval_ = cv::ml::SVM::getDefaultGridPtr( (int)param_id );
        return (jlong)(new Ptr_ParamGrid(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Ptr_SVM create()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_SVM_create_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_SVM_create_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "ml::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ml::SVM> Ptr_SVM;
        Ptr_SVM _retval_ = cv::ml::SVM::create(  );
        return (jlong)(new Ptr_SVM(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Ptr_SVM load(String filepath)
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_SVM_load_10 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_SVM_load_10
  (JNIEnv* env, jclass , jstring filepath)
{
    static const char method_name[] = "ml::load_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ml::SVM> Ptr_SVM;
        const char* utf_filepath = env->GetStringUTFChars(filepath, 0); String n_filepath( utf_filepath ? utf_filepath : "" ); env->ReleaseStringUTFChars(filepath, utf_filepath);
        Ptr_SVM _retval_ = cv::ml::SVM::load( n_filepath );
        return (jlong)(new Ptr_SVM(_retval_));
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

using namespace cv::ml;

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_ml_SVM_getTermCriteria_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_ml_SVM_getTermCriteria_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getTermCriteria_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVM>* me = (Ptr<cv::ml::SVM>*) self; //TODO: check for NULL
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
//  bool trainAuto(Mat samples, int layout, Mat responses, int kFold = 10, Ptr_ParamGrid Cgrid = SVM::getDefaultGridPtr(SVM::C), Ptr_ParamGrid gammaGrid = SVM::getDefaultGridPtr(SVM::GAMMA), Ptr_ParamGrid pGrid = SVM::getDefaultGridPtr(SVM::P), Ptr_ParamGrid nuGrid = SVM::getDefaultGridPtr(SVM::NU), Ptr_ParamGrid coeffGrid = SVM::getDefaultGridPtr(SVM::COEF), Ptr_ParamGrid degreeGrid = SVM::getDefaultGridPtr(SVM::DEGREE), bool balanced = false)
//

using namespace cv::ml;

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_SVM_trainAuto_10 (JNIEnv*, jclass, jlong, jlong, jint, jlong, jint, jlong, jlong, jlong, jlong, jlong, jlong, jboolean);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_SVM_trainAuto_10
  (JNIEnv* env, jclass , jlong self, jlong samples_nativeObj, jint layout, jlong responses_nativeObj, jint kFold, jlong Cgrid_nativeObj, jlong gammaGrid_nativeObj, jlong pGrid_nativeObj, jlong nuGrid_nativeObj, jlong coeffGrid_nativeObj, jlong degreeGrid_nativeObj, jboolean balanced)
{
    static const char method_name[] = "ml::trainAuto_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVM>* me = (Ptr<cv::ml::SVM>*) self; //TODO: check for NULL
        Mat& samples = *((Mat*)samples_nativeObj);
        Mat& responses = *((Mat*)responses_nativeObj);
        bool _retval_ = (*me)->trainAuto( samples, (int)layout, responses, (int)kFold, *((Ptr<cv::ml::ParamGrid>*)Cgrid_nativeObj), *((Ptr<cv::ml::ParamGrid>*)gammaGrid_nativeObj), *((Ptr<cv::ml::ParamGrid>*)pGrid_nativeObj), *((Ptr<cv::ml::ParamGrid>*)nuGrid_nativeObj), *((Ptr<cv::ml::ParamGrid>*)coeffGrid_nativeObj), *((Ptr<cv::ml::ParamGrid>*)degreeGrid_nativeObj), (bool)balanced );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::ml;

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_SVM_trainAuto_11 (JNIEnv*, jclass, jlong, jlong, jint, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_SVM_trainAuto_11
  (JNIEnv* env, jclass , jlong self, jlong samples_nativeObj, jint layout, jlong responses_nativeObj)
{
    static const char method_name[] = "ml::trainAuto_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVM>* me = (Ptr<cv::ml::SVM>*) self; //TODO: check for NULL
        Mat& samples = *((Mat*)samples_nativeObj);
        Mat& responses = *((Mat*)responses_nativeObj);
        bool _retval_ = (*me)->trainAuto( samples, (int)layout, responses );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getC()
//

using namespace cv::ml;

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_SVM_getC_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_SVM_getC_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getC_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVM>* me = (Ptr<cv::ml::SVM>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getC(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getCoef0()
//

using namespace cv::ml;

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_SVM_getCoef0_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_SVM_getCoef0_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getCoef0_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVM>* me = (Ptr<cv::ml::SVM>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getCoef0(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getDecisionFunction(int i, Mat& alpha, Mat& svidx)
//

using namespace cv::ml;

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_SVM_getDecisionFunction_10 (JNIEnv*, jclass, jlong, jint, jlong, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_SVM_getDecisionFunction_10
  (JNIEnv* env, jclass , jlong self, jint i, jlong alpha_nativeObj, jlong svidx_nativeObj)
{
    static const char method_name[] = "ml::getDecisionFunction_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVM>* me = (Ptr<cv::ml::SVM>*) self; //TODO: check for NULL
        Mat& alpha = *((Mat*)alpha_nativeObj);
        Mat& svidx = *((Mat*)svidx_nativeObj);
        double _retval_ = (*me)->getDecisionFunction( (int)i, alpha, svidx );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getDegree()
//

using namespace cv::ml;

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_SVM_getDegree_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_SVM_getDegree_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getDegree_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVM>* me = (Ptr<cv::ml::SVM>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getDegree(  );
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

using namespace cv::ml;

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_SVM_getGamma_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_SVM_getGamma_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getGamma_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVM>* me = (Ptr<cv::ml::SVM>*) self; //TODO: check for NULL
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
//  double getNu()
//

using namespace cv::ml;

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_SVM_getNu_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_SVM_getNu_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getNu_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVM>* me = (Ptr<cv::ml::SVM>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getNu(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getP()
//

using namespace cv::ml;

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_SVM_getP_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_SVM_getP_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getP_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVM>* me = (Ptr<cv::ml::SVM>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getP(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getKernelType()
//

using namespace cv::ml;

JNIEXPORT jint JNICALL Java_org_opencv_ml_SVM_getKernelType_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_SVM_getKernelType_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getKernelType_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVM>* me = (Ptr<cv::ml::SVM>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getKernelType(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getType()
//

using namespace cv::ml;

JNIEXPORT jint JNICALL Java_org_opencv_ml_SVM_getType_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_SVM_getType_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getType_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVM>* me = (Ptr<cv::ml::SVM>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getType(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void setC(double val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_SVM_setC_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_SVM_setC_10
  (JNIEnv* env, jclass , jlong self, jdouble val)
{
    static const char method_name[] = "ml::setC_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVM>* me = (Ptr<cv::ml::SVM>*) self; //TODO: check for NULL
        (*me)->setC( (double)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setClassWeights(Mat val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_SVM_setClassWeights_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_SVM_setClassWeights_10
  (JNIEnv* env, jclass , jlong self, jlong val_nativeObj)
{
    static const char method_name[] = "ml::setClassWeights_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVM>* me = (Ptr<cv::ml::SVM>*) self; //TODO: check for NULL
        Mat& val = *((Mat*)val_nativeObj);
        (*me)->setClassWeights( val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setCoef0(double val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_SVM_setCoef0_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_SVM_setCoef0_10
  (JNIEnv* env, jclass , jlong self, jdouble val)
{
    static const char method_name[] = "ml::setCoef0_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVM>* me = (Ptr<cv::ml::SVM>*) self; //TODO: check for NULL
        (*me)->setCoef0( (double)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setDegree(double val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_SVM_setDegree_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_SVM_setDegree_10
  (JNIEnv* env, jclass , jlong self, jdouble val)
{
    static const char method_name[] = "ml::setDegree_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVM>* me = (Ptr<cv::ml::SVM>*) self; //TODO: check for NULL
        (*me)->setDegree( (double)val );
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

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_SVM_setGamma_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_SVM_setGamma_10
  (JNIEnv* env, jclass , jlong self, jdouble val)
{
    static const char method_name[] = "ml::setGamma_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVM>* me = (Ptr<cv::ml::SVM>*) self; //TODO: check for NULL
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
//  void setKernel(int kernelType)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_SVM_setKernel_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_SVM_setKernel_10
  (JNIEnv* env, jclass , jlong self, jint kernelType)
{
    static const char method_name[] = "ml::setKernel_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVM>* me = (Ptr<cv::ml::SVM>*) self; //TODO: check for NULL
        (*me)->setKernel( (int)kernelType );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setNu(double val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_SVM_setNu_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_SVM_setNu_10
  (JNIEnv* env, jclass , jlong self, jdouble val)
{
    static const char method_name[] = "ml::setNu_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVM>* me = (Ptr<cv::ml::SVM>*) self; //TODO: check for NULL
        (*me)->setNu( (double)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setP(double val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_SVM_setP_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_SVM_setP_10
  (JNIEnv* env, jclass , jlong self, jdouble val)
{
    static const char method_name[] = "ml::setP_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVM>* me = (Ptr<cv::ml::SVM>*) self; //TODO: check for NULL
        (*me)->setP( (double)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setTermCriteria(TermCriteria val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_SVM_setTermCriteria_10 (JNIEnv*, jclass, jlong, jint, jint, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_SVM_setTermCriteria_10
  (JNIEnv* env, jclass , jlong self, jint val_type, jint val_maxCount, jdouble val_epsilon)
{
    static const char method_name[] = "ml::setTermCriteria_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVM>* me = (Ptr<cv::ml::SVM>*) self; //TODO: check for NULL
        TermCriteria val(val_type, val_maxCount, val_epsilon);
        (*me)->setTermCriteria( val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setType(int val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_SVM_setType_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_SVM_setType_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    static const char method_name[] = "ml::setType_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVM>* me = (Ptr<cv::ml::SVM>*) self; //TODO: check for NULL
        (*me)->setType( (int)val );
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
//  static void Ptr<cv::ml::SVM>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ml_SVM_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_SVM_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ml::SVM>*) self;
}


//
// static Ptr_NormalBayesClassifier create()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_NormalBayesClassifier_create_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_NormalBayesClassifier_create_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "ml::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ml::NormalBayesClassifier> Ptr_NormalBayesClassifier;
        Ptr_NormalBayesClassifier _retval_ = cv::ml::NormalBayesClassifier::create(  );
        return (jlong)(new Ptr_NormalBayesClassifier(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Ptr_NormalBayesClassifier load(String filepath, String nodeName = String())
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_NormalBayesClassifier_load_10 (JNIEnv*, jclass, jstring, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_NormalBayesClassifier_load_10
  (JNIEnv* env, jclass , jstring filepath, jstring nodeName)
{
    static const char method_name[] = "ml::load_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ml::NormalBayesClassifier> Ptr_NormalBayesClassifier;
        const char* utf_filepath = env->GetStringUTFChars(filepath, 0); String n_filepath( utf_filepath ? utf_filepath : "" ); env->ReleaseStringUTFChars(filepath, utf_filepath);
        const char* utf_nodeName = env->GetStringUTFChars(nodeName, 0); String n_nodeName( utf_nodeName ? utf_nodeName : "" ); env->ReleaseStringUTFChars(nodeName, utf_nodeName);
        Ptr_NormalBayesClassifier _retval_ = cv::ml::NormalBayesClassifier::load( n_filepath, n_nodeName );
        return (jlong)(new Ptr_NormalBayesClassifier(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_NormalBayesClassifier_load_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_NormalBayesClassifier_load_11
  (JNIEnv* env, jclass , jstring filepath)
{
    static const char method_name[] = "ml::load_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ml::NormalBayesClassifier> Ptr_NormalBayesClassifier;
        const char* utf_filepath = env->GetStringUTFChars(filepath, 0); String n_filepath( utf_filepath ? utf_filepath : "" ); env->ReleaseStringUTFChars(filepath, utf_filepath);
        Ptr_NormalBayesClassifier _retval_ = cv::ml::NormalBayesClassifier::load( n_filepath );
        return (jlong)(new Ptr_NormalBayesClassifier(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float predictProb(Mat inputs, Mat& outputs, Mat& outputProbs, int flags = 0)
//

using namespace cv::ml;

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_NormalBayesClassifier_predictProb_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jint);

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_NormalBayesClassifier_predictProb_10
  (JNIEnv* env, jclass , jlong self, jlong inputs_nativeObj, jlong outputs_nativeObj, jlong outputProbs_nativeObj, jint flags)
{
    static const char method_name[] = "ml::predictProb_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::NormalBayesClassifier>* me = (Ptr<cv::ml::NormalBayesClassifier>*) self; //TODO: check for NULL
        Mat& inputs = *((Mat*)inputs_nativeObj);
        Mat& outputs = *((Mat*)outputs_nativeObj);
        Mat& outputProbs = *((Mat*)outputProbs_nativeObj);
        float _retval_ = (*me)->predictProb( inputs, outputs, outputProbs, (int)flags );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::ml;

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_NormalBayesClassifier_predictProb_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_NormalBayesClassifier_predictProb_11
  (JNIEnv* env, jclass , jlong self, jlong inputs_nativeObj, jlong outputs_nativeObj, jlong outputProbs_nativeObj)
{
    static const char method_name[] = "ml::predictProb_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::NormalBayesClassifier>* me = (Ptr<cv::ml::NormalBayesClassifier>*) self; //TODO: check for NULL
        Mat& inputs = *((Mat*)inputs_nativeObj);
        Mat& outputs = *((Mat*)outputs_nativeObj);
        Mat& outputProbs = *((Mat*)outputProbs_nativeObj);
        float _retval_ = (*me)->predictProb( inputs, outputs, outputProbs );
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
//  static void Ptr<cv::ml::NormalBayesClassifier>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ml_NormalBayesClassifier_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_NormalBayesClassifier_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ml::NormalBayesClassifier>*) self;
}


//
//  Mat getCatMap()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getCatMap_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getCatMap_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getCatMap_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getCatMap(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat getCatOfs()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getCatOfs_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getCatOfs_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getCatOfs_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getCatOfs(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat getClassLabels()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getClassLabels_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getClassLabels_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getClassLabels_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getClassLabels(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat getDefaultSubstValues()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getDefaultSubstValues_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getDefaultSubstValues_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getDefaultSubstValues_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getDefaultSubstValues(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat getMissing()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getMissing_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getMissing_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getMissing_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getMissing(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat getNormCatResponses()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getNormCatResponses_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getNormCatResponses_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getNormCatResponses_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getNormCatResponses(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat getResponses()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getResponses_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getResponses_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getResponses_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getResponses(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat getSampleWeights()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getSampleWeights_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getSampleWeights_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getSampleWeights_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getSampleWeights(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat getSamples()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getSamples_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getSamples_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getSamples_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getSamples(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Mat getSubVector(Mat vec, Mat idx)
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getSubVector_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getSubVector_10
  (JNIEnv* env, jclass , jlong vec_nativeObj, jlong idx_nativeObj)
{
    static const char method_name[] = "ml::getSubVector_10()";
    try {
        LOGD("%s", method_name);
        Mat& vec = *((Mat*)vec_nativeObj);
        Mat& idx = *((Mat*)idx_nativeObj);
        ::Mat _retval_ = cv::ml::TrainData::getSubVector( vec, idx );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat getTestNormCatResponses()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getTestNormCatResponses_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getTestNormCatResponses_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getTestNormCatResponses_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getTestNormCatResponses(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat getTestResponses()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getTestResponses_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getTestResponses_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getTestResponses_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getTestResponses(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat getTestSampleIdx()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getTestSampleIdx_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getTestSampleIdx_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getTestSampleIdx_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getTestSampleIdx(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat getTestSampleWeights()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getTestSampleWeights_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getTestSampleWeights_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getTestSampleWeights_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getTestSampleWeights(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat getTestSamples()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getTestSamples_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getTestSamples_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getTestSamples_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getTestSamples(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat getTrainNormCatResponses()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getTrainNormCatResponses_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getTrainNormCatResponses_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getTrainNormCatResponses_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getTrainNormCatResponses(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat getTrainResponses()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getTrainResponses_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getTrainResponses_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getTrainResponses_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getTrainResponses(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat getTrainSampleIdx()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getTrainSampleIdx_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getTrainSampleIdx_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getTrainSampleIdx_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getTrainSampleIdx(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat getTrainSampleWeights()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getTrainSampleWeights_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getTrainSampleWeights_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getTrainSampleWeights_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getTrainSampleWeights(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat getTrainSamples(int layout = ROW_SAMPLE, bool compressSamples = true, bool compressVars = true)
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getTrainSamples_10 (JNIEnv*, jclass, jlong, jint, jboolean, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getTrainSamples_10
  (JNIEnv* env, jclass , jlong self, jint layout, jboolean compressSamples, jboolean compressVars)
{
    static const char method_name[] = "ml::getTrainSamples_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getTrainSamples( (int)layout, (bool)compressSamples, (bool)compressVars );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getTrainSamples_11 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getTrainSamples_11
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getTrainSamples_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getTrainSamples(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat getVarIdx()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getVarIdx_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getVarIdx_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getVarIdx_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getVarIdx(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat getVarSymbolFlags()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getVarSymbolFlags_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getVarSymbolFlags_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getVarSymbolFlags_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getVarSymbolFlags(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat getVarType()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getVarType_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_getVarType_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getVarType_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getVarType(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Ptr_TrainData create(Mat samples, int layout, Mat responses, Mat varIdx = Mat(), Mat sampleIdx = Mat(), Mat sampleWeights = Mat(), Mat varType = Mat())
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_create_10 (JNIEnv*, jclass, jlong, jint, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_create_10
  (JNIEnv* env, jclass , jlong samples_nativeObj, jint layout, jlong responses_nativeObj, jlong varIdx_nativeObj, jlong sampleIdx_nativeObj, jlong sampleWeights_nativeObj, jlong varType_nativeObj)
{
    static const char method_name[] = "ml::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ml::TrainData> Ptr_TrainData;
        Mat& samples = *((Mat*)samples_nativeObj);
        Mat& responses = *((Mat*)responses_nativeObj);
        Mat& varIdx = *((Mat*)varIdx_nativeObj);
        Mat& sampleIdx = *((Mat*)sampleIdx_nativeObj);
        Mat& sampleWeights = *((Mat*)sampleWeights_nativeObj);
        Mat& varType = *((Mat*)varType_nativeObj);
        Ptr_TrainData _retval_ = cv::ml::TrainData::create( samples, (int)layout, responses, varIdx, sampleIdx, sampleWeights, varType );
        return (jlong)(new Ptr_TrainData(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_create_11 (JNIEnv*, jclass, jlong, jint, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_TrainData_create_11
  (JNIEnv* env, jclass , jlong samples_nativeObj, jint layout, jlong responses_nativeObj)
{
    static const char method_name[] = "ml::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ml::TrainData> Ptr_TrainData;
        Mat& samples = *((Mat*)samples_nativeObj);
        Mat& responses = *((Mat*)responses_nativeObj);
        Ptr_TrainData _retval_ = cv::ml::TrainData::create( samples, (int)layout, responses );
        return (jlong)(new Ptr_TrainData(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getCatCount(int vi)
//

using namespace cv::ml;

JNIEXPORT jint JNICALL Java_org_opencv_ml_TrainData_getCatCount_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jint JNICALL Java_org_opencv_ml_TrainData_getCatCount_10
  (JNIEnv* env, jclass , jlong self, jint vi)
{
    static const char method_name[] = "ml::getCatCount_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getCatCount( (int)vi );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getLayout()
//

using namespace cv::ml;

JNIEXPORT jint JNICALL Java_org_opencv_ml_TrainData_getLayout_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_TrainData_getLayout_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getLayout_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getLayout(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getNAllVars()
//

using namespace cv::ml;

JNIEXPORT jint JNICALL Java_org_opencv_ml_TrainData_getNAllVars_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_TrainData_getNAllVars_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getNAllVars_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getNAllVars(  );
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

using namespace cv::ml;

JNIEXPORT jint JNICALL Java_org_opencv_ml_TrainData_getNSamples_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_TrainData_getNSamples_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getNSamples_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
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
//  int getNTestSamples()
//

using namespace cv::ml;

JNIEXPORT jint JNICALL Java_org_opencv_ml_TrainData_getNTestSamples_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_TrainData_getNTestSamples_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getNTestSamples_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getNTestSamples(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getNTrainSamples()
//

using namespace cv::ml;

JNIEXPORT jint JNICALL Java_org_opencv_ml_TrainData_getNTrainSamples_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_TrainData_getNTrainSamples_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getNTrainSamples_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getNTrainSamples(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getNVars()
//

using namespace cv::ml;

JNIEXPORT jint JNICALL Java_org_opencv_ml_TrainData_getNVars_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_TrainData_getNVars_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getNVars_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getNVars(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getResponseType()
//

using namespace cv::ml;

JNIEXPORT jint JNICALL Java_org_opencv_ml_TrainData_getResponseType_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_TrainData_getResponseType_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getResponseType_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getResponseType(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void getNames(vector_String names)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_TrainData_getNames_10 (JNIEnv*, jclass, jlong, jobject);

JNIEXPORT void JNICALL Java_org_opencv_ml_TrainData_getNames_10
  (JNIEnv* env, jclass , jlong self, jobject names_list)
{
    static const char method_name[] = "ml::getNames_10()";
    try {
        LOGD("%s", method_name);
        std::vector< String > names;
        names = List_to_vector_String(env, names_list);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        (*me)->getNames( names );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void getSample(Mat varIdx, int sidx, float* buf)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_TrainData_getSample_10 (JNIEnv*, jclass, jlong, jlong, jint, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ml_TrainData_getSample_10
  (JNIEnv* env, jclass , jlong self, jlong varIdx_nativeObj, jint sidx, jfloat buf)
{
    static const char method_name[] = "ml::getSample_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        Mat& varIdx = *((Mat*)varIdx_nativeObj);
        (*me)->getSample( varIdx, (int)sidx, &buf );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void getValues(int vi, Mat sidx, float* values)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_TrainData_getValues_10 (JNIEnv*, jclass, jlong, jint, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ml_TrainData_getValues_10
  (JNIEnv* env, jclass , jlong self, jint vi, jlong sidx_nativeObj, jfloat values)
{
    static const char method_name[] = "ml::getValues_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        Mat& sidx = *((Mat*)sidx_nativeObj);
        (*me)->getValues( (int)vi, sidx, &values );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setTrainTestSplit(int count, bool shuffle = true)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_TrainData_setTrainTestSplit_10 (JNIEnv*, jclass, jlong, jint, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_ml_TrainData_setTrainTestSplit_10
  (JNIEnv* env, jclass , jlong self, jint count, jboolean shuffle)
{
    static const char method_name[] = "ml::setTrainTestSplit_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        (*me)->setTrainTestSplit( (int)count, (bool)shuffle );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_TrainData_setTrainTestSplit_11 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_TrainData_setTrainTestSplit_11
  (JNIEnv* env, jclass , jlong self, jint count)
{
    static const char method_name[] = "ml::setTrainTestSplit_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        (*me)->setTrainTestSplit( (int)count );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setTrainTestSplitRatio(double ratio, bool shuffle = true)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_TrainData_setTrainTestSplitRatio_10 (JNIEnv*, jclass, jlong, jdouble, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_ml_TrainData_setTrainTestSplitRatio_10
  (JNIEnv* env, jclass , jlong self, jdouble ratio, jboolean shuffle)
{
    static const char method_name[] = "ml::setTrainTestSplitRatio_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        (*me)->setTrainTestSplitRatio( (double)ratio, (bool)shuffle );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_TrainData_setTrainTestSplitRatio_11 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_TrainData_setTrainTestSplitRatio_11
  (JNIEnv* env, jclass , jlong self, jdouble ratio)
{
    static const char method_name[] = "ml::setTrainTestSplitRatio_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        (*me)->setTrainTestSplitRatio( (double)ratio );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void shuffleTrainTest()
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_TrainData_shuffleTrainTest_10 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_TrainData_shuffleTrainTest_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::shuffleTrainTest_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::TrainData>* me = (Ptr<cv::ml::TrainData>*) self; //TODO: check for NULL
        (*me)->shuffleTrainTest(  );
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
//  static void Ptr<cv::ml::TrainData>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ml_TrainData_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_TrainData_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ml::TrainData>*) self;
}


//
// static Ptr_Boost create()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_Boost_create_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_Boost_create_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "ml::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ml::Boost> Ptr_Boost;
        Ptr_Boost _retval_ = cv::ml::Boost::create(  );
        return (jlong)(new Ptr_Boost(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Ptr_Boost load(String filepath, String nodeName = String())
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_Boost_load_10 (JNIEnv*, jclass, jstring, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_Boost_load_10
  (JNIEnv* env, jclass , jstring filepath, jstring nodeName)
{
    static const char method_name[] = "ml::load_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ml::Boost> Ptr_Boost;
        const char* utf_filepath = env->GetStringUTFChars(filepath, 0); String n_filepath( utf_filepath ? utf_filepath : "" ); env->ReleaseStringUTFChars(filepath, utf_filepath);
        const char* utf_nodeName = env->GetStringUTFChars(nodeName, 0); String n_nodeName( utf_nodeName ? utf_nodeName : "" ); env->ReleaseStringUTFChars(nodeName, utf_nodeName);
        Ptr_Boost _retval_ = cv::ml::Boost::load( n_filepath, n_nodeName );
        return (jlong)(new Ptr_Boost(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_Boost_load_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_Boost_load_11
  (JNIEnv* env, jclass , jstring filepath)
{
    static const char method_name[] = "ml::load_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ml::Boost> Ptr_Boost;
        const char* utf_filepath = env->GetStringUTFChars(filepath, 0); String n_filepath( utf_filepath ? utf_filepath : "" ); env->ReleaseStringUTFChars(filepath, utf_filepath);
        Ptr_Boost _retval_ = cv::ml::Boost::load( n_filepath );
        return (jlong)(new Ptr_Boost(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getWeightTrimRate()
//

using namespace cv::ml;

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_Boost_getWeightTrimRate_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_Boost_getWeightTrimRate_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getWeightTrimRate_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::Boost>* me = (Ptr<cv::ml::Boost>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getWeightTrimRate(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getBoostType()
//

using namespace cv::ml;

JNIEXPORT jint JNICALL Java_org_opencv_ml_Boost_getBoostType_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_Boost_getBoostType_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getBoostType_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::Boost>* me = (Ptr<cv::ml::Boost>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getBoostType(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getWeakCount()
//

using namespace cv::ml;

JNIEXPORT jint JNICALL Java_org_opencv_ml_Boost_getWeakCount_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_Boost_getWeakCount_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getWeakCount_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::Boost>* me = (Ptr<cv::ml::Boost>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getWeakCount(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void setBoostType(int val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_Boost_setBoostType_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_Boost_setBoostType_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    static const char method_name[] = "ml::setBoostType_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::Boost>* me = (Ptr<cv::ml::Boost>*) self; //TODO: check for NULL
        (*me)->setBoostType( (int)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setWeakCount(int val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_Boost_setWeakCount_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_Boost_setWeakCount_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    static const char method_name[] = "ml::setWeakCount_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::Boost>* me = (Ptr<cv::ml::Boost>*) self; //TODO: check for NULL
        (*me)->setWeakCount( (int)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setWeightTrimRate(double val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_Boost_setWeightTrimRate_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_Boost_setWeightTrimRate_10
  (JNIEnv* env, jclass , jlong self, jdouble val)
{
    static const char method_name[] = "ml::setWeightTrimRate_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::Boost>* me = (Ptr<cv::ml::Boost>*) self; //TODO: check for NULL
        (*me)->setWeightTrimRate( (double)val );
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
//  static void Ptr<cv::ml::Boost>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ml_Boost_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_Boost_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ml::Boost>*) self;
}


//
//  Mat get_learnt_thetas()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_LogisticRegression_get_1learnt_1thetas_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_LogisticRegression_get_1learnt_1thetas_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1learnt_1thetas_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::LogisticRegression>* me = (Ptr<cv::ml::LogisticRegression>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->get_learnt_thetas(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Ptr_LogisticRegression create()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_LogisticRegression_create_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_LogisticRegression_create_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "ml::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ml::LogisticRegression> Ptr_LogisticRegression;
        Ptr_LogisticRegression _retval_ = cv::ml::LogisticRegression::create(  );
        return (jlong)(new Ptr_LogisticRegression(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Ptr_LogisticRegression load(String filepath, String nodeName = String())
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_LogisticRegression_load_10 (JNIEnv*, jclass, jstring, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_LogisticRegression_load_10
  (JNIEnv* env, jclass , jstring filepath, jstring nodeName)
{
    static const char method_name[] = "ml::load_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ml::LogisticRegression> Ptr_LogisticRegression;
        const char* utf_filepath = env->GetStringUTFChars(filepath, 0); String n_filepath( utf_filepath ? utf_filepath : "" ); env->ReleaseStringUTFChars(filepath, utf_filepath);
        const char* utf_nodeName = env->GetStringUTFChars(nodeName, 0); String n_nodeName( utf_nodeName ? utf_nodeName : "" ); env->ReleaseStringUTFChars(nodeName, utf_nodeName);
        Ptr_LogisticRegression _retval_ = cv::ml::LogisticRegression::load( n_filepath, n_nodeName );
        return (jlong)(new Ptr_LogisticRegression(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_LogisticRegression_load_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_LogisticRegression_load_11
  (JNIEnv* env, jclass , jstring filepath)
{
    static const char method_name[] = "ml::load_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ml::LogisticRegression> Ptr_LogisticRegression;
        const char* utf_filepath = env->GetStringUTFChars(filepath, 0); String n_filepath( utf_filepath ? utf_filepath : "" ); env->ReleaseStringUTFChars(filepath, utf_filepath);
        Ptr_LogisticRegression _retval_ = cv::ml::LogisticRegression::load( n_filepath );
        return (jlong)(new Ptr_LogisticRegression(_retval_));
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

using namespace cv::ml;

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_ml_LogisticRegression_getTermCriteria_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_ml_LogisticRegression_getTermCriteria_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getTermCriteria_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::LogisticRegression>* me = (Ptr<cv::ml::LogisticRegression>*) self; //TODO: check for NULL
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
//  double getLearningRate()
//

using namespace cv::ml;

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_LogisticRegression_getLearningRate_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_LogisticRegression_getLearningRate_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getLearningRate_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::LogisticRegression>* me = (Ptr<cv::ml::LogisticRegression>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getLearningRate(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float predict(Mat samples, Mat& results = Mat(), int flags = 0)
//

using namespace cv::ml;

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_LogisticRegression_predict_10 (JNIEnv*, jclass, jlong, jlong, jlong, jint);

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_LogisticRegression_predict_10
  (JNIEnv* env, jclass , jlong self, jlong samples_nativeObj, jlong results_nativeObj, jint flags)
{
    static const char method_name[] = "ml::predict_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::LogisticRegression>* me = (Ptr<cv::ml::LogisticRegression>*) self; //TODO: check for NULL
        Mat& samples = *((Mat*)samples_nativeObj);
        Mat& results = *((Mat*)results_nativeObj);
        float _retval_ = (*me)->predict( samples, results, (int)flags );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::ml;

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_LogisticRegression_predict_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_LogisticRegression_predict_11
  (JNIEnv* env, jclass , jlong self, jlong samples_nativeObj)
{
    static const char method_name[] = "ml::predict_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::LogisticRegression>* me = (Ptr<cv::ml::LogisticRegression>*) self; //TODO: check for NULL
        Mat& samples = *((Mat*)samples_nativeObj);
        float _retval_ = (*me)->predict( samples );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getIterations()
//

using namespace cv::ml;

JNIEXPORT jint JNICALL Java_org_opencv_ml_LogisticRegression_getIterations_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_LogisticRegression_getIterations_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getIterations_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::LogisticRegression>* me = (Ptr<cv::ml::LogisticRegression>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getIterations(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getMiniBatchSize()
//

using namespace cv::ml;

JNIEXPORT jint JNICALL Java_org_opencv_ml_LogisticRegression_getMiniBatchSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_LogisticRegression_getMiniBatchSize_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getMiniBatchSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::LogisticRegression>* me = (Ptr<cv::ml::LogisticRegression>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getMiniBatchSize(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getRegularization()
//

using namespace cv::ml;

JNIEXPORT jint JNICALL Java_org_opencv_ml_LogisticRegression_getRegularization_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_LogisticRegression_getRegularization_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getRegularization_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::LogisticRegression>* me = (Ptr<cv::ml::LogisticRegression>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getRegularization(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getTrainMethod()
//

using namespace cv::ml;

JNIEXPORT jint JNICALL Java_org_opencv_ml_LogisticRegression_getTrainMethod_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_LogisticRegression_getTrainMethod_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getTrainMethod_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::LogisticRegression>* me = (Ptr<cv::ml::LogisticRegression>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getTrainMethod(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void setIterations(int val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_LogisticRegression_setIterations_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_LogisticRegression_setIterations_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    static const char method_name[] = "ml::setIterations_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::LogisticRegression>* me = (Ptr<cv::ml::LogisticRegression>*) self; //TODO: check for NULL
        (*me)->setIterations( (int)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setLearningRate(double val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_LogisticRegression_setLearningRate_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_LogisticRegression_setLearningRate_10
  (JNIEnv* env, jclass , jlong self, jdouble val)
{
    static const char method_name[] = "ml::setLearningRate_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::LogisticRegression>* me = (Ptr<cv::ml::LogisticRegression>*) self; //TODO: check for NULL
        (*me)->setLearningRate( (double)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setMiniBatchSize(int val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_LogisticRegression_setMiniBatchSize_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_LogisticRegression_setMiniBatchSize_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    static const char method_name[] = "ml::setMiniBatchSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::LogisticRegression>* me = (Ptr<cv::ml::LogisticRegression>*) self; //TODO: check for NULL
        (*me)->setMiniBatchSize( (int)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setRegularization(int val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_LogisticRegression_setRegularization_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_LogisticRegression_setRegularization_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    static const char method_name[] = "ml::setRegularization_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::LogisticRegression>* me = (Ptr<cv::ml::LogisticRegression>*) self; //TODO: check for NULL
        (*me)->setRegularization( (int)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setTermCriteria(TermCriteria val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_LogisticRegression_setTermCriteria_10 (JNIEnv*, jclass, jlong, jint, jint, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_LogisticRegression_setTermCriteria_10
  (JNIEnv* env, jclass , jlong self, jint val_type, jint val_maxCount, jdouble val_epsilon)
{
    static const char method_name[] = "ml::setTermCriteria_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::LogisticRegression>* me = (Ptr<cv::ml::LogisticRegression>*) self; //TODO: check for NULL
        TermCriteria val(val_type, val_maxCount, val_epsilon);
        (*me)->setTermCriteria( val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setTrainMethod(int val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_LogisticRegression_setTrainMethod_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_LogisticRegression_setTrainMethod_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    static const char method_name[] = "ml::setTrainMethod_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::LogisticRegression>* me = (Ptr<cv::ml::LogisticRegression>*) self; //TODO: check for NULL
        (*me)->setTrainMethod( (int)val );
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
//  static void Ptr<cv::ml::LogisticRegression>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ml_LogisticRegression_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_LogisticRegression_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ml::LogisticRegression>*) self;
}


//
// static Ptr_ParamGrid create(double minVal = 0., double maxVal = 0., double logstep = 1.)
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_ParamGrid_create_10 (JNIEnv*, jclass, jdouble, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_ParamGrid_create_10
  (JNIEnv* env, jclass , jdouble minVal, jdouble maxVal, jdouble logstep)
{
    static const char method_name[] = "ml::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ml::ParamGrid> Ptr_ParamGrid;
        Ptr_ParamGrid _retval_ = cv::ml::ParamGrid::create( (double)minVal, (double)maxVal, (double)logstep );
        return (jlong)(new Ptr_ParamGrid(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_ParamGrid_create_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_ParamGrid_create_11
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "ml::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ml::ParamGrid> Ptr_ParamGrid;
        Ptr_ParamGrid _retval_ = cv::ml::ParamGrid::create(  );
        return (jlong)(new Ptr_ParamGrid(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// double ParamGrid::minVal
//

using namespace cv::ml;

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_ParamGrid_get_1minVal_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_ParamGrid_get_1minVal_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1minVal_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::ParamGrid>* me = (Ptr<cv::ml::ParamGrid>*) self; //TODO: check for NULL
        double _retval_ = (*me)->minVal;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void ParamGrid::minVal
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_ParamGrid_set_1minVal_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_ParamGrid_set_1minVal_10
  (JNIEnv* env, jclass , jlong self, jdouble minVal)
{
    static const char method_name[] = "ml::set_1minVal_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::ParamGrid>* me = (Ptr<cv::ml::ParamGrid>*) self; //TODO: check for NULL
        (*me)->minVal = ( (double)minVal );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double ParamGrid::maxVal
//

using namespace cv::ml;

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_ParamGrid_get_1maxVal_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_ParamGrid_get_1maxVal_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1maxVal_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::ParamGrid>* me = (Ptr<cv::ml::ParamGrid>*) self; //TODO: check for NULL
        double _retval_ = (*me)->maxVal;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void ParamGrid::maxVal
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_ParamGrid_set_1maxVal_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_ParamGrid_set_1maxVal_10
  (JNIEnv* env, jclass , jlong self, jdouble maxVal)
{
    static const char method_name[] = "ml::set_1maxVal_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::ParamGrid>* me = (Ptr<cv::ml::ParamGrid>*) self; //TODO: check for NULL
        (*me)->maxVal = ( (double)maxVal );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// double ParamGrid::logStep
//

using namespace cv::ml;

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_ParamGrid_get_1logStep_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_ParamGrid_get_1logStep_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::get_1logStep_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::ParamGrid>* me = (Ptr<cv::ml::ParamGrid>*) self; //TODO: check for NULL
        double _retval_ = (*me)->logStep;//(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void ParamGrid::logStep
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_ParamGrid_set_1logStep_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_ParamGrid_set_1logStep_10
  (JNIEnv* env, jclass , jlong self, jdouble logStep)
{
    static const char method_name[] = "ml::set_1logStep_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::ParamGrid>* me = (Ptr<cv::ml::ParamGrid>*) self; //TODO: check for NULL
        (*me)->logStep = ( (double)logStep );
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
//  static void Ptr<cv::ml::ParamGrid>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ml_ParamGrid_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_ParamGrid_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ml::ParamGrid>*) self;
}


//
// static Ptr_KNearest create()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_KNearest_create_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_KNearest_create_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "ml::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ml::KNearest> Ptr_KNearest;
        Ptr_KNearest _retval_ = cv::ml::KNearest::create(  );
        return (jlong)(new Ptr_KNearest(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool getIsClassifier()
//

using namespace cv::ml;

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_KNearest_getIsClassifier_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_KNearest_getIsClassifier_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getIsClassifier_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::KNearest>* me = (Ptr<cv::ml::KNearest>*) self; //TODO: check for NULL
        bool _retval_ = (*me)->getIsClassifier(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float findNearest(Mat samples, int k, Mat& results, Mat& neighborResponses = Mat(), Mat& dist = Mat())
//

using namespace cv::ml;

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_KNearest_findNearest_10 (JNIEnv*, jclass, jlong, jlong, jint, jlong, jlong, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_KNearest_findNearest_10
  (JNIEnv* env, jclass , jlong self, jlong samples_nativeObj, jint k, jlong results_nativeObj, jlong neighborResponses_nativeObj, jlong dist_nativeObj)
{
    static const char method_name[] = "ml::findNearest_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::KNearest>* me = (Ptr<cv::ml::KNearest>*) self; //TODO: check for NULL
        Mat& samples = *((Mat*)samples_nativeObj);
        Mat& results = *((Mat*)results_nativeObj);
        Mat& neighborResponses = *((Mat*)neighborResponses_nativeObj);
        Mat& dist = *((Mat*)dist_nativeObj);
        float _retval_ = (*me)->findNearest( samples, (int)k, results, neighborResponses, dist );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::ml;

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_KNearest_findNearest_11 (JNIEnv*, jclass, jlong, jlong, jint, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_KNearest_findNearest_11
  (JNIEnv* env, jclass , jlong self, jlong samples_nativeObj, jint k, jlong results_nativeObj)
{
    static const char method_name[] = "ml::findNearest_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::KNearest>* me = (Ptr<cv::ml::KNearest>*) self; //TODO: check for NULL
        Mat& samples = *((Mat*)samples_nativeObj);
        Mat& results = *((Mat*)results_nativeObj);
        float _retval_ = (*me)->findNearest( samples, (int)k, results );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getAlgorithmType()
//

using namespace cv::ml;

JNIEXPORT jint JNICALL Java_org_opencv_ml_KNearest_getAlgorithmType_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_KNearest_getAlgorithmType_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getAlgorithmType_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::KNearest>* me = (Ptr<cv::ml::KNearest>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getAlgorithmType(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getDefaultK()
//

using namespace cv::ml;

JNIEXPORT jint JNICALL Java_org_opencv_ml_KNearest_getDefaultK_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_KNearest_getDefaultK_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getDefaultK_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::KNearest>* me = (Ptr<cv::ml::KNearest>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getDefaultK(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getEmax()
//

using namespace cv::ml;

JNIEXPORT jint JNICALL Java_org_opencv_ml_KNearest_getEmax_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_KNearest_getEmax_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getEmax_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::KNearest>* me = (Ptr<cv::ml::KNearest>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getEmax(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void setAlgorithmType(int val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_KNearest_setAlgorithmType_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_KNearest_setAlgorithmType_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    static const char method_name[] = "ml::setAlgorithmType_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::KNearest>* me = (Ptr<cv::ml::KNearest>*) self; //TODO: check for NULL
        (*me)->setAlgorithmType( (int)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setDefaultK(int val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_KNearest_setDefaultK_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_KNearest_setDefaultK_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    static const char method_name[] = "ml::setDefaultK_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::KNearest>* me = (Ptr<cv::ml::KNearest>*) self; //TODO: check for NULL
        (*me)->setDefaultK( (int)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setEmax(int val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_KNearest_setEmax_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_KNearest_setEmax_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    static const char method_name[] = "ml::setEmax_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::KNearest>* me = (Ptr<cv::ml::KNearest>*) self; //TODO: check for NULL
        (*me)->setEmax( (int)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setIsClassifier(bool val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_KNearest_setIsClassifier_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_ml_KNearest_setIsClassifier_10
  (JNIEnv* env, jclass , jlong self, jboolean val)
{
    static const char method_name[] = "ml::setIsClassifier_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::KNearest>* me = (Ptr<cv::ml::KNearest>*) self; //TODO: check for NULL
        (*me)->setIsClassifier( (bool)val );
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
//  static void Ptr<cv::ml::KNearest>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ml_KNearest_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_KNearest_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ml::KNearest>*) self;
}


//
//  Mat getWeights()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_SVMSGD_getWeights_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_SVMSGD_getWeights_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getWeights_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVMSGD>* me = (Ptr<cv::ml::SVMSGD>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getWeights(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Ptr_SVMSGD create()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_SVMSGD_create_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_SVMSGD_create_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "ml::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ml::SVMSGD> Ptr_SVMSGD;
        Ptr_SVMSGD _retval_ = cv::ml::SVMSGD::create(  );
        return (jlong)(new Ptr_SVMSGD(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Ptr_SVMSGD load(String filepath, String nodeName = String())
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_SVMSGD_load_10 (JNIEnv*, jclass, jstring, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_SVMSGD_load_10
  (JNIEnv* env, jclass , jstring filepath, jstring nodeName)
{
    static const char method_name[] = "ml::load_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ml::SVMSGD> Ptr_SVMSGD;
        const char* utf_filepath = env->GetStringUTFChars(filepath, 0); String n_filepath( utf_filepath ? utf_filepath : "" ); env->ReleaseStringUTFChars(filepath, utf_filepath);
        const char* utf_nodeName = env->GetStringUTFChars(nodeName, 0); String n_nodeName( utf_nodeName ? utf_nodeName : "" ); env->ReleaseStringUTFChars(nodeName, utf_nodeName);
        Ptr_SVMSGD _retval_ = cv::ml::SVMSGD::load( n_filepath, n_nodeName );
        return (jlong)(new Ptr_SVMSGD(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_SVMSGD_load_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_SVMSGD_load_11
  (JNIEnv* env, jclass , jstring filepath)
{
    static const char method_name[] = "ml::load_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ml::SVMSGD> Ptr_SVMSGD;
        const char* utf_filepath = env->GetStringUTFChars(filepath, 0); String n_filepath( utf_filepath ? utf_filepath : "" ); env->ReleaseStringUTFChars(filepath, utf_filepath);
        Ptr_SVMSGD _retval_ = cv::ml::SVMSGD::load( n_filepath );
        return (jlong)(new Ptr_SVMSGD(_retval_));
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

using namespace cv::ml;

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_ml_SVMSGD_getTermCriteria_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_ml_SVMSGD_getTermCriteria_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getTermCriteria_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVMSGD>* me = (Ptr<cv::ml::SVMSGD>*) self; //TODO: check for NULL
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
//  float getInitialStepSize()
//

using namespace cv::ml;

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_SVMSGD_getInitialStepSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_SVMSGD_getInitialStepSize_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getInitialStepSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVMSGD>* me = (Ptr<cv::ml::SVMSGD>*) self; //TODO: check for NULL
        float _retval_ = (*me)->getInitialStepSize(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float getMarginRegularization()
//

using namespace cv::ml;

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_SVMSGD_getMarginRegularization_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_SVMSGD_getMarginRegularization_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getMarginRegularization_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVMSGD>* me = (Ptr<cv::ml::SVMSGD>*) self; //TODO: check for NULL
        float _retval_ = (*me)->getMarginRegularization(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float getShift()
//

using namespace cv::ml;

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_SVMSGD_getShift_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_SVMSGD_getShift_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getShift_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVMSGD>* me = (Ptr<cv::ml::SVMSGD>*) self; //TODO: check for NULL
        float _retval_ = (*me)->getShift(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float getStepDecreasingPower()
//

using namespace cv::ml;

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_SVMSGD_getStepDecreasingPower_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_SVMSGD_getStepDecreasingPower_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getStepDecreasingPower_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVMSGD>* me = (Ptr<cv::ml::SVMSGD>*) self; //TODO: check for NULL
        float _retval_ = (*me)->getStepDecreasingPower(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getMarginType()
//

using namespace cv::ml;

JNIEXPORT jint JNICALL Java_org_opencv_ml_SVMSGD_getMarginType_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_SVMSGD_getMarginType_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getMarginType_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVMSGD>* me = (Ptr<cv::ml::SVMSGD>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getMarginType(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getSvmsgdType()
//

using namespace cv::ml;

JNIEXPORT jint JNICALL Java_org_opencv_ml_SVMSGD_getSvmsgdType_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_SVMSGD_getSvmsgdType_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getSvmsgdType_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVMSGD>* me = (Ptr<cv::ml::SVMSGD>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getSvmsgdType(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void setInitialStepSize(float InitialStepSize)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_SVMSGD_setInitialStepSize_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ml_SVMSGD_setInitialStepSize_10
  (JNIEnv* env, jclass , jlong self, jfloat InitialStepSize)
{
    static const char method_name[] = "ml::setInitialStepSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVMSGD>* me = (Ptr<cv::ml::SVMSGD>*) self; //TODO: check for NULL
        (*me)->setInitialStepSize( (float)InitialStepSize );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setMarginRegularization(float marginRegularization)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_SVMSGD_setMarginRegularization_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ml_SVMSGD_setMarginRegularization_10
  (JNIEnv* env, jclass , jlong self, jfloat marginRegularization)
{
    static const char method_name[] = "ml::setMarginRegularization_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVMSGD>* me = (Ptr<cv::ml::SVMSGD>*) self; //TODO: check for NULL
        (*me)->setMarginRegularization( (float)marginRegularization );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setMarginType(int marginType)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_SVMSGD_setMarginType_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_SVMSGD_setMarginType_10
  (JNIEnv* env, jclass , jlong self, jint marginType)
{
    static const char method_name[] = "ml::setMarginType_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVMSGD>* me = (Ptr<cv::ml::SVMSGD>*) self; //TODO: check for NULL
        (*me)->setMarginType( (int)marginType );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setOptimalParameters(int svmsgdType = SVMSGD::ASGD, int marginType = SVMSGD::SOFT_MARGIN)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_SVMSGD_setOptimalParameters_10 (JNIEnv*, jclass, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_SVMSGD_setOptimalParameters_10
  (JNIEnv* env, jclass , jlong self, jint svmsgdType, jint marginType)
{
    static const char method_name[] = "ml::setOptimalParameters_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVMSGD>* me = (Ptr<cv::ml::SVMSGD>*) self; //TODO: check for NULL
        (*me)->setOptimalParameters( (int)svmsgdType, (int)marginType );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_SVMSGD_setOptimalParameters_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_SVMSGD_setOptimalParameters_11
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::setOptimalParameters_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVMSGD>* me = (Ptr<cv::ml::SVMSGD>*) self; //TODO: check for NULL
        (*me)->setOptimalParameters(  );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setStepDecreasingPower(float stepDecreasingPower)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_SVMSGD_setStepDecreasingPower_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ml_SVMSGD_setStepDecreasingPower_10
  (JNIEnv* env, jclass , jlong self, jfloat stepDecreasingPower)
{
    static const char method_name[] = "ml::setStepDecreasingPower_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVMSGD>* me = (Ptr<cv::ml::SVMSGD>*) self; //TODO: check for NULL
        (*me)->setStepDecreasingPower( (float)stepDecreasingPower );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setSvmsgdType(int svmsgdType)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_SVMSGD_setSvmsgdType_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_SVMSGD_setSvmsgdType_10
  (JNIEnv* env, jclass , jlong self, jint svmsgdType)
{
    static const char method_name[] = "ml::setSvmsgdType_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVMSGD>* me = (Ptr<cv::ml::SVMSGD>*) self; //TODO: check for NULL
        (*me)->setSvmsgdType( (int)svmsgdType );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setTermCriteria(TermCriteria val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_SVMSGD_setTermCriteria_10 (JNIEnv*, jclass, jlong, jint, jint, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_SVMSGD_setTermCriteria_10
  (JNIEnv* env, jclass , jlong self, jint val_type, jint val_maxCount, jdouble val_epsilon)
{
    static const char method_name[] = "ml::setTermCriteria_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::SVMSGD>* me = (Ptr<cv::ml::SVMSGD>*) self; //TODO: check for NULL
        TermCriteria val(val_type, val_maxCount, val_epsilon);
        (*me)->setTermCriteria( val );
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
//  static void Ptr<cv::ml::SVMSGD>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ml_SVMSGD_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_SVMSGD_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ml::SVMSGD>*) self;
}


//
//  Mat getPriors()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_DTrees_getPriors_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_DTrees_getPriors_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getPriors_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::DTrees>* me = (Ptr<cv::ml::DTrees>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getPriors(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Ptr_DTrees create()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_DTrees_create_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_DTrees_create_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "ml::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ml::DTrees> Ptr_DTrees;
        Ptr_DTrees _retval_ = cv::ml::DTrees::create(  );
        return (jlong)(new Ptr_DTrees(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Ptr_DTrees load(String filepath, String nodeName = String())
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_DTrees_load_10 (JNIEnv*, jclass, jstring, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_DTrees_load_10
  (JNIEnv* env, jclass , jstring filepath, jstring nodeName)
{
    static const char method_name[] = "ml::load_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ml::DTrees> Ptr_DTrees;
        const char* utf_filepath = env->GetStringUTFChars(filepath, 0); String n_filepath( utf_filepath ? utf_filepath : "" ); env->ReleaseStringUTFChars(filepath, utf_filepath);
        const char* utf_nodeName = env->GetStringUTFChars(nodeName, 0); String n_nodeName( utf_nodeName ? utf_nodeName : "" ); env->ReleaseStringUTFChars(nodeName, utf_nodeName);
        Ptr_DTrees _retval_ = cv::ml::DTrees::load( n_filepath, n_nodeName );
        return (jlong)(new Ptr_DTrees(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_DTrees_load_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_DTrees_load_11
  (JNIEnv* env, jclass , jstring filepath)
{
    static const char method_name[] = "ml::load_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ml::DTrees> Ptr_DTrees;
        const char* utf_filepath = env->GetStringUTFChars(filepath, 0); String n_filepath( utf_filepath ? utf_filepath : "" ); env->ReleaseStringUTFChars(filepath, utf_filepath);
        Ptr_DTrees _retval_ = cv::ml::DTrees::load( n_filepath );
        return (jlong)(new Ptr_DTrees(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool getTruncatePrunedTree()
//

using namespace cv::ml;

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_DTrees_getTruncatePrunedTree_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_DTrees_getTruncatePrunedTree_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getTruncatePrunedTree_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::DTrees>* me = (Ptr<cv::ml::DTrees>*) self; //TODO: check for NULL
        bool _retval_ = (*me)->getTruncatePrunedTree(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool getUse1SERule()
//

using namespace cv::ml;

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_DTrees_getUse1SERule_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_DTrees_getUse1SERule_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getUse1SERule_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::DTrees>* me = (Ptr<cv::ml::DTrees>*) self; //TODO: check for NULL
        bool _retval_ = (*me)->getUse1SERule(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool getUseSurrogates()
//

using namespace cv::ml;

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_DTrees_getUseSurrogates_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_DTrees_getUseSurrogates_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getUseSurrogates_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::DTrees>* me = (Ptr<cv::ml::DTrees>*) self; //TODO: check for NULL
        bool _retval_ = (*me)->getUseSurrogates(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float getRegressionAccuracy()
//

using namespace cv::ml;

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_DTrees_getRegressionAccuracy_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_DTrees_getRegressionAccuracy_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getRegressionAccuracy_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::DTrees>* me = (Ptr<cv::ml::DTrees>*) self; //TODO: check for NULL
        float _retval_ = (*me)->getRegressionAccuracy(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getCVFolds()
//

using namespace cv::ml;

JNIEXPORT jint JNICALL Java_org_opencv_ml_DTrees_getCVFolds_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_DTrees_getCVFolds_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getCVFolds_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::DTrees>* me = (Ptr<cv::ml::DTrees>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getCVFolds(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getMaxCategories()
//

using namespace cv::ml;

JNIEXPORT jint JNICALL Java_org_opencv_ml_DTrees_getMaxCategories_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_DTrees_getMaxCategories_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getMaxCategories_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::DTrees>* me = (Ptr<cv::ml::DTrees>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getMaxCategories(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getMaxDepth()
//

using namespace cv::ml;

JNIEXPORT jint JNICALL Java_org_opencv_ml_DTrees_getMaxDepth_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_DTrees_getMaxDepth_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getMaxDepth_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::DTrees>* me = (Ptr<cv::ml::DTrees>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getMaxDepth(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getMinSampleCount()
//

using namespace cv::ml;

JNIEXPORT jint JNICALL Java_org_opencv_ml_DTrees_getMinSampleCount_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_DTrees_getMinSampleCount_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getMinSampleCount_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::DTrees>* me = (Ptr<cv::ml::DTrees>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getMinSampleCount(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void setCVFolds(int val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_DTrees_setCVFolds_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_DTrees_setCVFolds_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    static const char method_name[] = "ml::setCVFolds_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::DTrees>* me = (Ptr<cv::ml::DTrees>*) self; //TODO: check for NULL
        (*me)->setCVFolds( (int)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setMaxCategories(int val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_DTrees_setMaxCategories_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_DTrees_setMaxCategories_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    static const char method_name[] = "ml::setMaxCategories_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::DTrees>* me = (Ptr<cv::ml::DTrees>*) self; //TODO: check for NULL
        (*me)->setMaxCategories( (int)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setMaxDepth(int val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_DTrees_setMaxDepth_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_DTrees_setMaxDepth_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    static const char method_name[] = "ml::setMaxDepth_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::DTrees>* me = (Ptr<cv::ml::DTrees>*) self; //TODO: check for NULL
        (*me)->setMaxDepth( (int)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setMinSampleCount(int val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_DTrees_setMinSampleCount_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_DTrees_setMinSampleCount_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    static const char method_name[] = "ml::setMinSampleCount_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::DTrees>* me = (Ptr<cv::ml::DTrees>*) self; //TODO: check for NULL
        (*me)->setMinSampleCount( (int)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setPriors(Mat val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_DTrees_setPriors_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_DTrees_setPriors_10
  (JNIEnv* env, jclass , jlong self, jlong val_nativeObj)
{
    static const char method_name[] = "ml::setPriors_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::DTrees>* me = (Ptr<cv::ml::DTrees>*) self; //TODO: check for NULL
        Mat& val = *((Mat*)val_nativeObj);
        (*me)->setPriors( val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setRegressionAccuracy(float val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_DTrees_setRegressionAccuracy_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_ml_DTrees_setRegressionAccuracy_10
  (JNIEnv* env, jclass , jlong self, jfloat val)
{
    static const char method_name[] = "ml::setRegressionAccuracy_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::DTrees>* me = (Ptr<cv::ml::DTrees>*) self; //TODO: check for NULL
        (*me)->setRegressionAccuracy( (float)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setTruncatePrunedTree(bool val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_DTrees_setTruncatePrunedTree_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_ml_DTrees_setTruncatePrunedTree_10
  (JNIEnv* env, jclass , jlong self, jboolean val)
{
    static const char method_name[] = "ml::setTruncatePrunedTree_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::DTrees>* me = (Ptr<cv::ml::DTrees>*) self; //TODO: check for NULL
        (*me)->setTruncatePrunedTree( (bool)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setUse1SERule(bool val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_DTrees_setUse1SERule_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_ml_DTrees_setUse1SERule_10
  (JNIEnv* env, jclass , jlong self, jboolean val)
{
    static const char method_name[] = "ml::setUse1SERule_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::DTrees>* me = (Ptr<cv::ml::DTrees>*) self; //TODO: check for NULL
        (*me)->setUse1SERule( (bool)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setUseSurrogates(bool val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_DTrees_setUseSurrogates_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_ml_DTrees_setUseSurrogates_10
  (JNIEnv* env, jclass , jlong self, jboolean val)
{
    static const char method_name[] = "ml::setUseSurrogates_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::DTrees>* me = (Ptr<cv::ml::DTrees>*) self; //TODO: check for NULL
        (*me)->setUseSurrogates( (bool)val );
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
//  static void Ptr<cv::ml::DTrees>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ml_DTrees_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_DTrees_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ml::DTrees>*) self;
}


//
//  Mat getLayerSizes()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_ANN_1MLP_getLayerSizes_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_ANN_1MLP_getLayerSizes_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getLayerSizes_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::ANN_MLP>* me = (Ptr<cv::ml::ANN_MLP>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getLayerSizes(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat getWeights(int layerIdx)
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_ANN_1MLP_getWeights_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_ANN_1MLP_getWeights_10
  (JNIEnv* env, jclass , jlong self, jint layerIdx)
{
    static const char method_name[] = "ml::getWeights_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::ANN_MLP>* me = (Ptr<cv::ml::ANN_MLP>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getWeights( (int)layerIdx );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Ptr_ANN_MLP create()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_ANN_1MLP_create_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_ANN_1MLP_create_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "ml::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ml::ANN_MLP> Ptr_ANN_MLP;
        Ptr_ANN_MLP _retval_ = cv::ml::ANN_MLP::create(  );
        return (jlong)(new Ptr_ANN_MLP(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Ptr_ANN_MLP load(String filepath)
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_ANN_1MLP_load_10 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_ANN_1MLP_load_10
  (JNIEnv* env, jclass , jstring filepath)
{
    static const char method_name[] = "ml::load_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ml::ANN_MLP> Ptr_ANN_MLP;
        const char* utf_filepath = env->GetStringUTFChars(filepath, 0); String n_filepath( utf_filepath ? utf_filepath : "" ); env->ReleaseStringUTFChars(filepath, utf_filepath);
        Ptr_ANN_MLP _retval_ = cv::ml::ANN_MLP::load( n_filepath );
        return (jlong)(new Ptr_ANN_MLP(_retval_));
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

using namespace cv::ml;

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_ml_ANN_1MLP_getTermCriteria_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_ml_ANN_1MLP_getTermCriteria_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getTermCriteria_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::ANN_MLP>* me = (Ptr<cv::ml::ANN_MLP>*) self; //TODO: check for NULL
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
//  double getBackpropMomentumScale()
//

using namespace cv::ml;

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_ANN_1MLP_getBackpropMomentumScale_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_ANN_1MLP_getBackpropMomentumScale_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getBackpropMomentumScale_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::ANN_MLP>* me = (Ptr<cv::ml::ANN_MLP>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getBackpropMomentumScale(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getBackpropWeightScale()
//

using namespace cv::ml;

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_ANN_1MLP_getBackpropWeightScale_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_ANN_1MLP_getBackpropWeightScale_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getBackpropWeightScale_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::ANN_MLP>* me = (Ptr<cv::ml::ANN_MLP>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getBackpropWeightScale(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getRpropDW0()
//

using namespace cv::ml;

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_ANN_1MLP_getRpropDW0_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_ANN_1MLP_getRpropDW0_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getRpropDW0_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::ANN_MLP>* me = (Ptr<cv::ml::ANN_MLP>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getRpropDW0(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getRpropDWMax()
//

using namespace cv::ml;

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_ANN_1MLP_getRpropDWMax_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_ANN_1MLP_getRpropDWMax_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getRpropDWMax_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::ANN_MLP>* me = (Ptr<cv::ml::ANN_MLP>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getRpropDWMax(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getRpropDWMin()
//

using namespace cv::ml;

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_ANN_1MLP_getRpropDWMin_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_ANN_1MLP_getRpropDWMin_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getRpropDWMin_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::ANN_MLP>* me = (Ptr<cv::ml::ANN_MLP>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getRpropDWMin(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getRpropDWMinus()
//

using namespace cv::ml;

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_ANN_1MLP_getRpropDWMinus_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_ANN_1MLP_getRpropDWMinus_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getRpropDWMinus_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::ANN_MLP>* me = (Ptr<cv::ml::ANN_MLP>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getRpropDWMinus(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getRpropDWPlus()
//

using namespace cv::ml;

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_ANN_1MLP_getRpropDWPlus_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_ml_ANN_1MLP_getRpropDWPlus_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getRpropDWPlus_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::ANN_MLP>* me = (Ptr<cv::ml::ANN_MLP>*) self; //TODO: check for NULL
        double _retval_ = (*me)->getRpropDWPlus(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getTrainMethod()
//

using namespace cv::ml;

JNIEXPORT jint JNICALL Java_org_opencv_ml_ANN_1MLP_getTrainMethod_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_ANN_1MLP_getTrainMethod_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getTrainMethod_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::ANN_MLP>* me = (Ptr<cv::ml::ANN_MLP>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getTrainMethod(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void setActivationFunction(int type, double param1 = 0, double param2 = 0)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_ANN_1MLP_setActivationFunction_10 (JNIEnv*, jclass, jlong, jint, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_ANN_1MLP_setActivationFunction_10
  (JNIEnv* env, jclass , jlong self, jint type, jdouble param1, jdouble param2)
{
    static const char method_name[] = "ml::setActivationFunction_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::ANN_MLP>* me = (Ptr<cv::ml::ANN_MLP>*) self; //TODO: check for NULL
        (*me)->setActivationFunction( (int)type, (double)param1, (double)param2 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_ANN_1MLP_setActivationFunction_11 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_ANN_1MLP_setActivationFunction_11
  (JNIEnv* env, jclass , jlong self, jint type)
{
    static const char method_name[] = "ml::setActivationFunction_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::ANN_MLP>* me = (Ptr<cv::ml::ANN_MLP>*) self; //TODO: check for NULL
        (*me)->setActivationFunction( (int)type );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setBackpropMomentumScale(double val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_ANN_1MLP_setBackpropMomentumScale_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_ANN_1MLP_setBackpropMomentumScale_10
  (JNIEnv* env, jclass , jlong self, jdouble val)
{
    static const char method_name[] = "ml::setBackpropMomentumScale_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::ANN_MLP>* me = (Ptr<cv::ml::ANN_MLP>*) self; //TODO: check for NULL
        (*me)->setBackpropMomentumScale( (double)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setBackpropWeightScale(double val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_ANN_1MLP_setBackpropWeightScale_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_ANN_1MLP_setBackpropWeightScale_10
  (JNIEnv* env, jclass , jlong self, jdouble val)
{
    static const char method_name[] = "ml::setBackpropWeightScale_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::ANN_MLP>* me = (Ptr<cv::ml::ANN_MLP>*) self; //TODO: check for NULL
        (*me)->setBackpropWeightScale( (double)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setLayerSizes(Mat _layer_sizes)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_ANN_1MLP_setLayerSizes_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_ANN_1MLP_setLayerSizes_10
  (JNIEnv* env, jclass , jlong self, jlong _layer_sizes_nativeObj)
{
    static const char method_name[] = "ml::setLayerSizes_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::ANN_MLP>* me = (Ptr<cv::ml::ANN_MLP>*) self; //TODO: check for NULL
        Mat& _layer_sizes = *((Mat*)_layer_sizes_nativeObj);
        (*me)->setLayerSizes( _layer_sizes );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setRpropDW0(double val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_ANN_1MLP_setRpropDW0_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_ANN_1MLP_setRpropDW0_10
  (JNIEnv* env, jclass , jlong self, jdouble val)
{
    static const char method_name[] = "ml::setRpropDW0_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::ANN_MLP>* me = (Ptr<cv::ml::ANN_MLP>*) self; //TODO: check for NULL
        (*me)->setRpropDW0( (double)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setRpropDWMax(double val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_ANN_1MLP_setRpropDWMax_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_ANN_1MLP_setRpropDWMax_10
  (JNIEnv* env, jclass , jlong self, jdouble val)
{
    static const char method_name[] = "ml::setRpropDWMax_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::ANN_MLP>* me = (Ptr<cv::ml::ANN_MLP>*) self; //TODO: check for NULL
        (*me)->setRpropDWMax( (double)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setRpropDWMin(double val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_ANN_1MLP_setRpropDWMin_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_ANN_1MLP_setRpropDWMin_10
  (JNIEnv* env, jclass , jlong self, jdouble val)
{
    static const char method_name[] = "ml::setRpropDWMin_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::ANN_MLP>* me = (Ptr<cv::ml::ANN_MLP>*) self; //TODO: check for NULL
        (*me)->setRpropDWMin( (double)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setRpropDWMinus(double val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_ANN_1MLP_setRpropDWMinus_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_ANN_1MLP_setRpropDWMinus_10
  (JNIEnv* env, jclass , jlong self, jdouble val)
{
    static const char method_name[] = "ml::setRpropDWMinus_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::ANN_MLP>* me = (Ptr<cv::ml::ANN_MLP>*) self; //TODO: check for NULL
        (*me)->setRpropDWMinus( (double)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setRpropDWPlus(double val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_ANN_1MLP_setRpropDWPlus_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_ANN_1MLP_setRpropDWPlus_10
  (JNIEnv* env, jclass , jlong self, jdouble val)
{
    static const char method_name[] = "ml::setRpropDWPlus_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::ANN_MLP>* me = (Ptr<cv::ml::ANN_MLP>*) self; //TODO: check for NULL
        (*me)->setRpropDWPlus( (double)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setTermCriteria(TermCriteria val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_ANN_1MLP_setTermCriteria_10 (JNIEnv*, jclass, jlong, jint, jint, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_ANN_1MLP_setTermCriteria_10
  (JNIEnv* env, jclass , jlong self, jint val_type, jint val_maxCount, jdouble val_epsilon)
{
    static const char method_name[] = "ml::setTermCriteria_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::ANN_MLP>* me = (Ptr<cv::ml::ANN_MLP>*) self; //TODO: check for NULL
        TermCriteria val(val_type, val_maxCount, val_epsilon);
        (*me)->setTermCriteria( val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setTrainMethod(int method, double param1 = 0, double param2 = 0)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_ANN_1MLP_setTrainMethod_10 (JNIEnv*, jclass, jlong, jint, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_ANN_1MLP_setTrainMethod_10
  (JNIEnv* env, jclass , jlong self, jint method, jdouble param1, jdouble param2)
{
    static const char method_name[] = "ml::setTrainMethod_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::ANN_MLP>* me = (Ptr<cv::ml::ANN_MLP>*) self; //TODO: check for NULL
        (*me)->setTrainMethod( (int)method, (double)param1, (double)param2 );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_ANN_1MLP_setTrainMethod_11 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_ANN_1MLP_setTrainMethod_11
  (JNIEnv* env, jclass , jlong self, jint method)
{
    static const char method_name[] = "ml::setTrainMethod_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::ANN_MLP>* me = (Ptr<cv::ml::ANN_MLP>*) self; //TODO: check for NULL
        (*me)->setTrainMethod( (int)method );
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
//  static void Ptr<cv::ml::ANN_MLP>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ml_ANN_1MLP_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_ANN_1MLP_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ml::ANN_MLP>*) self;
}


//
//  bool empty()
//

using namespace cv::ml;

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_StatModel_empty_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_StatModel_empty_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::empty_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::StatModel>* me = (Ptr<cv::ml::StatModel>*) self; //TODO: check for NULL
        bool _retval_ = (*me)->empty(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool isClassifier()
//

using namespace cv::ml;

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_StatModel_isClassifier_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_StatModel_isClassifier_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::isClassifier_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::StatModel>* me = (Ptr<cv::ml::StatModel>*) self; //TODO: check for NULL
        bool _retval_ = (*me)->isClassifier(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool isTrained()
//

using namespace cv::ml;

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_StatModel_isTrained_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_StatModel_isTrained_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::isTrained_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::StatModel>* me = (Ptr<cv::ml::StatModel>*) self; //TODO: check for NULL
        bool _retval_ = (*me)->isTrained(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool train(Mat samples, int layout, Mat responses)
//

using namespace cv::ml;

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_StatModel_train_10 (JNIEnv*, jclass, jlong, jlong, jint, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_StatModel_train_10
  (JNIEnv* env, jclass , jlong self, jlong samples_nativeObj, jint layout, jlong responses_nativeObj)
{
    static const char method_name[] = "ml::train_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::StatModel>* me = (Ptr<cv::ml::StatModel>*) self; //TODO: check for NULL
        Mat& samples = *((Mat*)samples_nativeObj);
        Mat& responses = *((Mat*)responses_nativeObj);
        bool _retval_ = (*me)->train( samples, (int)layout, responses );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool train(Ptr_TrainData trainData, int flags = 0)
//

using namespace cv::ml;

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_StatModel_train_11 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_StatModel_train_11
  (JNIEnv* env, jclass , jlong self, jlong trainData_nativeObj, jint flags)
{
    static const char method_name[] = "ml::train_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::StatModel>* me = (Ptr<cv::ml::StatModel>*) self; //TODO: check for NULL
        bool _retval_ = (*me)->train( *((Ptr<cv::ml::TrainData>*)trainData_nativeObj), (int)flags );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::ml;

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_StatModel_train_12 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_StatModel_train_12
  (JNIEnv* env, jclass , jlong self, jlong trainData_nativeObj)
{
    static const char method_name[] = "ml::train_12()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::StatModel>* me = (Ptr<cv::ml::StatModel>*) self; //TODO: check for NULL
        bool _retval_ = (*me)->train( *((Ptr<cv::ml::TrainData>*)trainData_nativeObj) );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float calcError(Ptr_TrainData data, bool test, Mat& resp)
//

using namespace cv::ml;

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_StatModel_calcError_10 (JNIEnv*, jclass, jlong, jlong, jboolean, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_StatModel_calcError_10
  (JNIEnv* env, jclass , jlong self, jlong data_nativeObj, jboolean test, jlong resp_nativeObj)
{
    static const char method_name[] = "ml::calcError_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::StatModel>* me = (Ptr<cv::ml::StatModel>*) self; //TODO: check for NULL
        Mat& resp = *((Mat*)resp_nativeObj);
        float _retval_ = (*me)->calcError( *((Ptr<cv::ml::TrainData>*)data_nativeObj), (bool)test, resp );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float predict(Mat samples, Mat& results = Mat(), int flags = 0)
//

using namespace cv::ml;

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_StatModel_predict_10 (JNIEnv*, jclass, jlong, jlong, jlong, jint);

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_StatModel_predict_10
  (JNIEnv* env, jclass , jlong self, jlong samples_nativeObj, jlong results_nativeObj, jint flags)
{
    static const char method_name[] = "ml::predict_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::StatModel>* me = (Ptr<cv::ml::StatModel>*) self; //TODO: check for NULL
        Mat& samples = *((Mat*)samples_nativeObj);
        Mat& results = *((Mat*)results_nativeObj);
        float _retval_ = (*me)->predict( samples, results, (int)flags );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::ml;

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_StatModel_predict_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_ml_StatModel_predict_11
  (JNIEnv* env, jclass , jlong self, jlong samples_nativeObj)
{
    static const char method_name[] = "ml::predict_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::StatModel>* me = (Ptr<cv::ml::StatModel>*) self; //TODO: check for NULL
        Mat& samples = *((Mat*)samples_nativeObj);
        float _retval_ = (*me)->predict( samples );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getVarCount()
//

using namespace cv::ml;

JNIEXPORT jint JNICALL Java_org_opencv_ml_StatModel_getVarCount_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_StatModel_getVarCount_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getVarCount_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::StatModel>* me = (Ptr<cv::ml::StatModel>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getVarCount(  );
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
//  static void Ptr<cv::ml::StatModel>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ml_StatModel_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_StatModel_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ml::StatModel>*) self;
}


//
//  Mat getVarImportance()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_RTrees_getVarImportance_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_RTrees_getVarImportance_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getVarImportance_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::RTrees>* me = (Ptr<cv::ml::RTrees>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getVarImportance(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Ptr_RTrees create()
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_RTrees_create_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_RTrees_create_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "ml::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ml::RTrees> Ptr_RTrees;
        Ptr_RTrees _retval_ = cv::ml::RTrees::create(  );
        return (jlong)(new Ptr_RTrees(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Ptr_RTrees load(String filepath, String nodeName = String())
//

using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_RTrees_load_10 (JNIEnv*, jclass, jstring, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_RTrees_load_10
  (JNIEnv* env, jclass , jstring filepath, jstring nodeName)
{
    static const char method_name[] = "ml::load_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ml::RTrees> Ptr_RTrees;
        const char* utf_filepath = env->GetStringUTFChars(filepath, 0); String n_filepath( utf_filepath ? utf_filepath : "" ); env->ReleaseStringUTFChars(filepath, utf_filepath);
        const char* utf_nodeName = env->GetStringUTFChars(nodeName, 0); String n_nodeName( utf_nodeName ? utf_nodeName : "" ); env->ReleaseStringUTFChars(nodeName, utf_nodeName);
        Ptr_RTrees _retval_ = cv::ml::RTrees::load( n_filepath, n_nodeName );
        return (jlong)(new Ptr_RTrees(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::ml;

JNIEXPORT jlong JNICALL Java_org_opencv_ml_RTrees_load_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_ml_RTrees_load_11
  (JNIEnv* env, jclass , jstring filepath)
{
    static const char method_name[] = "ml::load_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::ml::RTrees> Ptr_RTrees;
        const char* utf_filepath = env->GetStringUTFChars(filepath, 0); String n_filepath( utf_filepath ? utf_filepath : "" ); env->ReleaseStringUTFChars(filepath, utf_filepath);
        Ptr_RTrees _retval_ = cv::ml::RTrees::load( n_filepath );
        return (jlong)(new Ptr_RTrees(_retval_));
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

using namespace cv::ml;

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_ml_RTrees_getTermCriteria_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_ml_RTrees_getTermCriteria_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getTermCriteria_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::RTrees>* me = (Ptr<cv::ml::RTrees>*) self; //TODO: check for NULL
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
//  bool getCalculateVarImportance()
//

using namespace cv::ml;

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_RTrees_getCalculateVarImportance_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_ml_RTrees_getCalculateVarImportance_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getCalculateVarImportance_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::RTrees>* me = (Ptr<cv::ml::RTrees>*) self; //TODO: check for NULL
        bool _retval_ = (*me)->getCalculateVarImportance(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getActiveVarCount()
//

using namespace cv::ml;

JNIEXPORT jint JNICALL Java_org_opencv_ml_RTrees_getActiveVarCount_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_ml_RTrees_getActiveVarCount_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "ml::getActiveVarCount_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::RTrees>* me = (Ptr<cv::ml::RTrees>*) self; //TODO: check for NULL
        int _retval_ = (*me)->getActiveVarCount(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void getVotes(Mat samples, Mat& results, int flags)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_RTrees_getVotes_10 (JNIEnv*, jclass, jlong, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_RTrees_getVotes_10
  (JNIEnv* env, jclass , jlong self, jlong samples_nativeObj, jlong results_nativeObj, jint flags)
{
    static const char method_name[] = "ml::getVotes_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::RTrees>* me = (Ptr<cv::ml::RTrees>*) self; //TODO: check for NULL
        Mat& samples = *((Mat*)samples_nativeObj);
        Mat& results = *((Mat*)results_nativeObj);
        (*me)->getVotes( samples, results, (int)flags );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setActiveVarCount(int val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_RTrees_setActiveVarCount_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_ml_RTrees_setActiveVarCount_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    static const char method_name[] = "ml::setActiveVarCount_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::RTrees>* me = (Ptr<cv::ml::RTrees>*) self; //TODO: check for NULL
        (*me)->setActiveVarCount( (int)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setCalculateVarImportance(bool val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_RTrees_setCalculateVarImportance_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_ml_RTrees_setCalculateVarImportance_10
  (JNIEnv* env, jclass , jlong self, jboolean val)
{
    static const char method_name[] = "ml::setCalculateVarImportance_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::RTrees>* me = (Ptr<cv::ml::RTrees>*) self; //TODO: check for NULL
        (*me)->setCalculateVarImportance( (bool)val );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setTermCriteria(TermCriteria val)
//

using namespace cv::ml;

JNIEXPORT void JNICALL Java_org_opencv_ml_RTrees_setTermCriteria_10 (JNIEnv*, jclass, jlong, jint, jint, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_ml_RTrees_setTermCriteria_10
  (JNIEnv* env, jclass , jlong self, jint val_type, jint val_maxCount, jdouble val_epsilon)
{
    static const char method_name[] = "ml::setTermCriteria_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::ml::RTrees>* me = (Ptr<cv::ml::RTrees>*) self; //TODO: check for NULL
        TermCriteria val(val_type, val_maxCount, val_epsilon);
        (*me)->setTermCriteria( val );
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
//  static void Ptr<cv::ml::RTrees>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_ml_RTrees_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_ml_RTrees_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::ml::RTrees>*) self;
}



} // extern "C"

#endif // HAVE_OPENCV_ML
