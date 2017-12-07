
//
// This file is auto-generated, please don't edit!
//

#define LOG_TAG "org.opencv.bioinspired"

#include "common.h"

#include "opencv2/opencv_modules.hpp"
#ifdef HAVE_OPENCV_BIOINSPIRED

#include <string>

#include "opencv2/bioinspired.hpp"

#include "/Users/Chao/opencv_contrib/modules/bioinspired/include/opencv2/bioinspired/retina.hpp"
#include "/Users/Chao/opencv_contrib/modules/bioinspired/include/opencv2/bioinspired/retinafasttonemapping.hpp"
#include "/Users/Chao/opencv_contrib/modules/bioinspired/include/opencv2/bioinspired/transientareassegmentationmodule.hpp"

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
// static Ptr_RetinaFastToneMapping create(Size inputSize)
//

using namespace cv::bioinspired;

JNIEXPORT jlong JNICALL Java_org_opencv_bioinspired_RetinaFastToneMapping_create_10 (JNIEnv*, jclass, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_bioinspired_RetinaFastToneMapping_create_10
  (JNIEnv* env, jclass , jdouble inputSize_width, jdouble inputSize_height)
{
    static const char method_name[] = "bioinspired::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bioinspired::RetinaFastToneMapping> Ptr_RetinaFastToneMapping;
        Size inputSize((int)inputSize_width, (int)inputSize_height);
        Ptr_RetinaFastToneMapping _retval_ = cv::bioinspired::RetinaFastToneMapping::create( inputSize );
        return (jlong)(new Ptr_RetinaFastToneMapping(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void applyFastToneMapping(Mat inputImage, Mat& outputToneMappedImage)
//

using namespace cv::bioinspired;

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_RetinaFastToneMapping_applyFastToneMapping_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_RetinaFastToneMapping_applyFastToneMapping_10
  (JNIEnv* env, jclass , jlong self, jlong inputImage_nativeObj, jlong outputToneMappedImage_nativeObj)
{
    static const char method_name[] = "bioinspired::applyFastToneMapping_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::RetinaFastToneMapping>* me = (Ptr<cv::bioinspired::RetinaFastToneMapping>*) self; //TODO: check for NULL
        Mat& inputImage = *((Mat*)inputImage_nativeObj);
        Mat& outputToneMappedImage = *((Mat*)outputToneMappedImage_nativeObj);
        (*me)->applyFastToneMapping( inputImage, outputToneMappedImage );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setup(float photoreceptorsNeighborhoodRadius = 3.f, float ganglioncellsNeighborhoodRadius = 1.f, float meanLuminanceModulatorK = 1.f)
//

using namespace cv::bioinspired;

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_RetinaFastToneMapping_setup_10 (JNIEnv*, jclass, jlong, jfloat, jfloat, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_RetinaFastToneMapping_setup_10
  (JNIEnv* env, jclass , jlong self, jfloat photoreceptorsNeighborhoodRadius, jfloat ganglioncellsNeighborhoodRadius, jfloat meanLuminanceModulatorK)
{
    static const char method_name[] = "bioinspired::setup_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::RetinaFastToneMapping>* me = (Ptr<cv::bioinspired::RetinaFastToneMapping>*) self; //TODO: check for NULL
        (*me)->setup( (float)photoreceptorsNeighborhoodRadius, (float)ganglioncellsNeighborhoodRadius, (float)meanLuminanceModulatorK );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



using namespace cv::bioinspired;

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_RetinaFastToneMapping_setup_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_RetinaFastToneMapping_setup_11
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "bioinspired::setup_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::RetinaFastToneMapping>* me = (Ptr<cv::bioinspired::RetinaFastToneMapping>*) self; //TODO: check for NULL
        (*me)->setup(  );
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
//  static void Ptr<cv::bioinspired::RetinaFastToneMapping>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_bioinspired_RetinaFastToneMapping_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_RetinaFastToneMapping_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::bioinspired::RetinaFastToneMapping>*) self;
}


//
// static Ptr_TransientAreasSegmentationModule create(Size inputSize)
//

using namespace cv::bioinspired;

JNIEXPORT jlong JNICALL Java_org_opencv_bioinspired_TransientAreasSegmentationModule_create_10 (JNIEnv*, jclass, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_bioinspired_TransientAreasSegmentationModule_create_10
  (JNIEnv* env, jclass , jdouble inputSize_width, jdouble inputSize_height)
{
    static const char method_name[] = "bioinspired::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bioinspired::TransientAreasSegmentationModule> Ptr_TransientAreasSegmentationModule;
        Size inputSize((int)inputSize_width, (int)inputSize_height);
        Ptr_TransientAreasSegmentationModule _retval_ = cv::bioinspired::TransientAreasSegmentationModule::create( inputSize );
        return (jlong)(new Ptr_TransientAreasSegmentationModule(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Size getSize()
//

using namespace cv::bioinspired;

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_bioinspired_TransientAreasSegmentationModule_getSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_bioinspired_TransientAreasSegmentationModule_getSize_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "bioinspired::getSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::TransientAreasSegmentationModule>* me = (Ptr<cv::bioinspired::TransientAreasSegmentationModule>*) self; //TODO: check for NULL
        Size _retval_ = (*me)->getSize(  );
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
//  String printSetup()
//

using namespace cv::bioinspired;

JNIEXPORT jstring JNICALL Java_org_opencv_bioinspired_TransientAreasSegmentationModule_printSetup_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jstring JNICALL Java_org_opencv_bioinspired_TransientAreasSegmentationModule_printSetup_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "bioinspired::printSetup_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::TransientAreasSegmentationModule>* me = (Ptr<cv::bioinspired::TransientAreasSegmentationModule>*) self; //TODO: check for NULL
        cv::String _retval_ = (*me)->printSetup(  );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
//  void clearAllBuffers()
//

using namespace cv::bioinspired;

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_TransientAreasSegmentationModule_clearAllBuffers_10 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_TransientAreasSegmentationModule_clearAllBuffers_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "bioinspired::clearAllBuffers_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::TransientAreasSegmentationModule>* me = (Ptr<cv::bioinspired::TransientAreasSegmentationModule>*) self; //TODO: check for NULL
        (*me)->clearAllBuffers(  );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void getSegmentationPicture(Mat& transientAreas)
//

using namespace cv::bioinspired;

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_TransientAreasSegmentationModule_getSegmentationPicture_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_TransientAreasSegmentationModule_getSegmentationPicture_10
  (JNIEnv* env, jclass , jlong self, jlong transientAreas_nativeObj)
{
    static const char method_name[] = "bioinspired::getSegmentationPicture_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::TransientAreasSegmentationModule>* me = (Ptr<cv::bioinspired::TransientAreasSegmentationModule>*) self; //TODO: check for NULL
        Mat& transientAreas = *((Mat*)transientAreas_nativeObj);
        (*me)->getSegmentationPicture( transientAreas );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void run(Mat inputToSegment, int channelIndex = 0)
//

using namespace cv::bioinspired;

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_TransientAreasSegmentationModule_run_10 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_TransientAreasSegmentationModule_run_10
  (JNIEnv* env, jclass , jlong self, jlong inputToSegment_nativeObj, jint channelIndex)
{
    static const char method_name[] = "bioinspired::run_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::TransientAreasSegmentationModule>* me = (Ptr<cv::bioinspired::TransientAreasSegmentationModule>*) self; //TODO: check for NULL
        Mat& inputToSegment = *((Mat*)inputToSegment_nativeObj);
        (*me)->run( inputToSegment, (int)channelIndex );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



using namespace cv::bioinspired;

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_TransientAreasSegmentationModule_run_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_TransientAreasSegmentationModule_run_11
  (JNIEnv* env, jclass , jlong self, jlong inputToSegment_nativeObj)
{
    static const char method_name[] = "bioinspired::run_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::TransientAreasSegmentationModule>* me = (Ptr<cv::bioinspired::TransientAreasSegmentationModule>*) self; //TODO: check for NULL
        Mat& inputToSegment = *((Mat*)inputToSegment_nativeObj);
        (*me)->run( inputToSegment );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setup(String segmentationParameterFile = "", bool applyDefaultSetupOnFailure = true)
//

using namespace cv::bioinspired;

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_TransientAreasSegmentationModule_setup_10 (JNIEnv*, jclass, jlong, jstring, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_TransientAreasSegmentationModule_setup_10
  (JNIEnv* env, jclass , jlong self, jstring segmentationParameterFile, jboolean applyDefaultSetupOnFailure)
{
    static const char method_name[] = "bioinspired::setup_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::TransientAreasSegmentationModule>* me = (Ptr<cv::bioinspired::TransientAreasSegmentationModule>*) self; //TODO: check for NULL
        const char* utf_segmentationParameterFile = env->GetStringUTFChars(segmentationParameterFile, 0); String n_segmentationParameterFile( utf_segmentationParameterFile ? utf_segmentationParameterFile : "" ); env->ReleaseStringUTFChars(segmentationParameterFile, utf_segmentationParameterFile);
        (*me)->setup( n_segmentationParameterFile, (bool)applyDefaultSetupOnFailure );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



using namespace cv::bioinspired;

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_TransientAreasSegmentationModule_setup_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_TransientAreasSegmentationModule_setup_11
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "bioinspired::setup_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::TransientAreasSegmentationModule>* me = (Ptr<cv::bioinspired::TransientAreasSegmentationModule>*) self; //TODO: check for NULL
        (*me)->setup(  );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void write(String fs)
//

using namespace cv::bioinspired;

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_TransientAreasSegmentationModule_write_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_TransientAreasSegmentationModule_write_10
  (JNIEnv* env, jclass , jlong self, jstring fs)
{
    static const char method_name[] = "bioinspired::write_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::TransientAreasSegmentationModule>* me = (Ptr<cv::bioinspired::TransientAreasSegmentationModule>*) self; //TODO: check for NULL
        const char* utf_fs = env->GetStringUTFChars(fs, 0); String n_fs( utf_fs ? utf_fs : "" ); env->ReleaseStringUTFChars(fs, utf_fs);
        (*me)->write( n_fs );
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
//  static void Ptr<cv::bioinspired::TransientAreasSegmentationModule>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_bioinspired_TransientAreasSegmentationModule_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_TransientAreasSegmentationModule_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::bioinspired::TransientAreasSegmentationModule>*) self;
}


//
//  Mat getMagnoRAW()
//

using namespace cv::bioinspired;

JNIEXPORT jlong JNICALL Java_org_opencv_bioinspired_Retina_getMagnoRAW_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_bioinspired_Retina_getMagnoRAW_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "bioinspired::getMagnoRAW_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::Retina>* me = (Ptr<cv::bioinspired::Retina>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getMagnoRAW(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat getParvoRAW()
//

using namespace cv::bioinspired;

JNIEXPORT jlong JNICALL Java_org_opencv_bioinspired_Retina_getParvoRAW_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_bioinspired_Retina_getParvoRAW_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "bioinspired::getParvoRAW_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::Retina>* me = (Ptr<cv::bioinspired::Retina>*) self; //TODO: check for NULL
        ::Mat _retval_ = (*me)->getParvoRAW(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Ptr_Retina create(Size inputSize, bool colorMode, int colorSamplingMethod = RETINA_COLOR_BAYER, bool useRetinaLogSampling = false, float reductionFactor = 1.0f, float samplingStrenght = 10.0f)
//

using namespace cv::bioinspired;

JNIEXPORT jlong JNICALL Java_org_opencv_bioinspired_Retina_create_10 (JNIEnv*, jclass, jdouble, jdouble, jboolean, jint, jboolean, jfloat, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_bioinspired_Retina_create_10
  (JNIEnv* env, jclass , jdouble inputSize_width, jdouble inputSize_height, jboolean colorMode, jint colorSamplingMethod, jboolean useRetinaLogSampling, jfloat reductionFactor, jfloat samplingStrenght)
{
    static const char method_name[] = "bioinspired::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bioinspired::Retina> Ptr_Retina;
        Size inputSize((int)inputSize_width, (int)inputSize_height);
        Ptr_Retina _retval_ = cv::bioinspired::Retina::create( inputSize, (bool)colorMode, (int)colorSamplingMethod, (bool)useRetinaLogSampling, (float)reductionFactor, (float)samplingStrenght );
        return (jlong)(new Ptr_Retina(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::bioinspired;

JNIEXPORT jlong JNICALL Java_org_opencv_bioinspired_Retina_create_11 (JNIEnv*, jclass, jdouble, jdouble, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_bioinspired_Retina_create_11
  (JNIEnv* env, jclass , jdouble inputSize_width, jdouble inputSize_height, jboolean colorMode)
{
    static const char method_name[] = "bioinspired::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bioinspired::Retina> Ptr_Retina;
        Size inputSize((int)inputSize_width, (int)inputSize_height);
        Ptr_Retina _retval_ = cv::bioinspired::Retina::create( inputSize, (bool)colorMode );
        return (jlong)(new Ptr_Retina(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Ptr_Retina create(Size inputSize)
//

using namespace cv::bioinspired;

JNIEXPORT jlong JNICALL Java_org_opencv_bioinspired_Retina_create_12 (JNIEnv*, jclass, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_bioinspired_Retina_create_12
  (JNIEnv* env, jclass , jdouble inputSize_width, jdouble inputSize_height)
{
    static const char method_name[] = "bioinspired::create_12()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bioinspired::Retina> Ptr_Retina;
        Size inputSize((int)inputSize_width, (int)inputSize_height);
        Ptr_Retina _retval_ = cv::bioinspired::Retina::create( inputSize );
        return (jlong)(new Ptr_Retina(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Size getInputSize()
//

using namespace cv::bioinspired;

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_bioinspired_Retina_getInputSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_bioinspired_Retina_getInputSize_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "bioinspired::getInputSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::Retina>* me = (Ptr<cv::bioinspired::Retina>*) self; //TODO: check for NULL
        Size _retval_ = (*me)->getInputSize(  );
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
//  Size getOutputSize()
//

using namespace cv::bioinspired;

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_bioinspired_Retina_getOutputSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_bioinspired_Retina_getOutputSize_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "bioinspired::getOutputSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::Retina>* me = (Ptr<cv::bioinspired::Retina>*) self; //TODO: check for NULL
        Size _retval_ = (*me)->getOutputSize(  );
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
//  String printSetup()
//

using namespace cv::bioinspired;

JNIEXPORT jstring JNICALL Java_org_opencv_bioinspired_Retina_printSetup_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jstring JNICALL Java_org_opencv_bioinspired_Retina_printSetup_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "bioinspired::printSetup_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::Retina>* me = (Ptr<cv::bioinspired::Retina>*) self; //TODO: check for NULL
        cv::String _retval_ = (*me)->printSetup(  );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
//  void activateContoursProcessing(bool activate)
//

using namespace cv::bioinspired;

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_activateContoursProcessing_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_activateContoursProcessing_10
  (JNIEnv* env, jclass , jlong self, jboolean activate)
{
    static const char method_name[] = "bioinspired::activateContoursProcessing_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::Retina>* me = (Ptr<cv::bioinspired::Retina>*) self; //TODO: check for NULL
        (*me)->activateContoursProcessing( (bool)activate );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void activateMovingContoursProcessing(bool activate)
//

using namespace cv::bioinspired;

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_activateMovingContoursProcessing_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_activateMovingContoursProcessing_10
  (JNIEnv* env, jclass , jlong self, jboolean activate)
{
    static const char method_name[] = "bioinspired::activateMovingContoursProcessing_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::Retina>* me = (Ptr<cv::bioinspired::Retina>*) self; //TODO: check for NULL
        (*me)->activateMovingContoursProcessing( (bool)activate );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void applyFastToneMapping(Mat inputImage, Mat& outputToneMappedImage)
//

using namespace cv::bioinspired;

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_applyFastToneMapping_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_applyFastToneMapping_10
  (JNIEnv* env, jclass , jlong self, jlong inputImage_nativeObj, jlong outputToneMappedImage_nativeObj)
{
    static const char method_name[] = "bioinspired::applyFastToneMapping_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::Retina>* me = (Ptr<cv::bioinspired::Retina>*) self; //TODO: check for NULL
        Mat& inputImage = *((Mat*)inputImage_nativeObj);
        Mat& outputToneMappedImage = *((Mat*)outputToneMappedImage_nativeObj);
        (*me)->applyFastToneMapping( inputImage, outputToneMappedImage );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void clearBuffers()
//

using namespace cv::bioinspired;

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_clearBuffers_10 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_clearBuffers_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "bioinspired::clearBuffers_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::Retina>* me = (Ptr<cv::bioinspired::Retina>*) self; //TODO: check for NULL
        (*me)->clearBuffers(  );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void getMagno(Mat& retinaOutput_magno)
//

using namespace cv::bioinspired;

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_getMagno_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_getMagno_10
  (JNIEnv* env, jclass , jlong self, jlong retinaOutput_magno_nativeObj)
{
    static const char method_name[] = "bioinspired::getMagno_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::Retina>* me = (Ptr<cv::bioinspired::Retina>*) self; //TODO: check for NULL
        Mat& retinaOutput_magno = *((Mat*)retinaOutput_magno_nativeObj);
        (*me)->getMagno( retinaOutput_magno );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void getMagnoRAW(Mat& retinaOutput_magno)
//

using namespace cv::bioinspired;

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_getMagnoRAW_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_getMagnoRAW_11
  (JNIEnv* env, jclass , jlong self, jlong retinaOutput_magno_nativeObj)
{
    static const char method_name[] = "bioinspired::getMagnoRAW_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::Retina>* me = (Ptr<cv::bioinspired::Retina>*) self; //TODO: check for NULL
        Mat& retinaOutput_magno = *((Mat*)retinaOutput_magno_nativeObj);
        (*me)->getMagnoRAW( retinaOutput_magno );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void getParvo(Mat& retinaOutput_parvo)
//

using namespace cv::bioinspired;

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_getParvo_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_getParvo_10
  (JNIEnv* env, jclass , jlong self, jlong retinaOutput_parvo_nativeObj)
{
    static const char method_name[] = "bioinspired::getParvo_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::Retina>* me = (Ptr<cv::bioinspired::Retina>*) self; //TODO: check for NULL
        Mat& retinaOutput_parvo = *((Mat*)retinaOutput_parvo_nativeObj);
        (*me)->getParvo( retinaOutput_parvo );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void getParvoRAW(Mat& retinaOutput_parvo)
//

using namespace cv::bioinspired;

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_getParvoRAW_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_getParvoRAW_11
  (JNIEnv* env, jclass , jlong self, jlong retinaOutput_parvo_nativeObj)
{
    static const char method_name[] = "bioinspired::getParvoRAW_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::Retina>* me = (Ptr<cv::bioinspired::Retina>*) self; //TODO: check for NULL
        Mat& retinaOutput_parvo = *((Mat*)retinaOutput_parvo_nativeObj);
        (*me)->getParvoRAW( retinaOutput_parvo );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void run(Mat inputImage)
//

using namespace cv::bioinspired;

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_run_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_run_10
  (JNIEnv* env, jclass , jlong self, jlong inputImage_nativeObj)
{
    static const char method_name[] = "bioinspired::run_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::Retina>* me = (Ptr<cv::bioinspired::Retina>*) self; //TODO: check for NULL
        Mat& inputImage = *((Mat*)inputImage_nativeObj);
        (*me)->run( inputImage );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setColorSaturation(bool saturateColors = true, float colorSaturationValue = 4.0f)
//

using namespace cv::bioinspired;

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_setColorSaturation_10 (JNIEnv*, jclass, jlong, jboolean, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_setColorSaturation_10
  (JNIEnv* env, jclass , jlong self, jboolean saturateColors, jfloat colorSaturationValue)
{
    static const char method_name[] = "bioinspired::setColorSaturation_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::Retina>* me = (Ptr<cv::bioinspired::Retina>*) self; //TODO: check for NULL
        (*me)->setColorSaturation( (bool)saturateColors, (float)colorSaturationValue );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



using namespace cv::bioinspired;

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_setColorSaturation_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_setColorSaturation_11
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "bioinspired::setColorSaturation_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::Retina>* me = (Ptr<cv::bioinspired::Retina>*) self; //TODO: check for NULL
        (*me)->setColorSaturation(  );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setup(String retinaParameterFile = "", bool applyDefaultSetupOnFailure = true)
//

using namespace cv::bioinspired;

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_setup_10 (JNIEnv*, jclass, jlong, jstring, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_setup_10
  (JNIEnv* env, jclass , jlong self, jstring retinaParameterFile, jboolean applyDefaultSetupOnFailure)
{
    static const char method_name[] = "bioinspired::setup_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::Retina>* me = (Ptr<cv::bioinspired::Retina>*) self; //TODO: check for NULL
        const char* utf_retinaParameterFile = env->GetStringUTFChars(retinaParameterFile, 0); String n_retinaParameterFile( utf_retinaParameterFile ? utf_retinaParameterFile : "" ); env->ReleaseStringUTFChars(retinaParameterFile, utf_retinaParameterFile);
        (*me)->setup( n_retinaParameterFile, (bool)applyDefaultSetupOnFailure );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



using namespace cv::bioinspired;

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_setup_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_setup_11
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "bioinspired::setup_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::Retina>* me = (Ptr<cv::bioinspired::Retina>*) self; //TODO: check for NULL
        (*me)->setup(  );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setupIPLMagnoChannel(bool normaliseOutput = true, float parasolCells_beta = 0.f, float parasolCells_tau = 0.f, float parasolCells_k = 7.f, float amacrinCellsTemporalCutFrequency = 1.2f, float V0CompressionParameter = 0.95f, float localAdaptintegration_tau = 0.f, float localAdaptintegration_k = 7.f)
//

using namespace cv::bioinspired;

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_setupIPLMagnoChannel_10 (JNIEnv*, jclass, jlong, jboolean, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_setupIPLMagnoChannel_10
  (JNIEnv* env, jclass , jlong self, jboolean normaliseOutput, jfloat parasolCells_beta, jfloat parasolCells_tau, jfloat parasolCells_k, jfloat amacrinCellsTemporalCutFrequency, jfloat V0CompressionParameter, jfloat localAdaptintegration_tau, jfloat localAdaptintegration_k)
{
    static const char method_name[] = "bioinspired::setupIPLMagnoChannel_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::Retina>* me = (Ptr<cv::bioinspired::Retina>*) self; //TODO: check for NULL
        (*me)->setupIPLMagnoChannel( (bool)normaliseOutput, (float)parasolCells_beta, (float)parasolCells_tau, (float)parasolCells_k, (float)amacrinCellsTemporalCutFrequency, (float)V0CompressionParameter, (float)localAdaptintegration_tau, (float)localAdaptintegration_k );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



using namespace cv::bioinspired;

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_setupIPLMagnoChannel_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_setupIPLMagnoChannel_11
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "bioinspired::setupIPLMagnoChannel_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::Retina>* me = (Ptr<cv::bioinspired::Retina>*) self; //TODO: check for NULL
        (*me)->setupIPLMagnoChannel(  );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setupOPLandIPLParvoChannel(bool colorMode = true, bool normaliseOutput = true, float photoreceptorsLocalAdaptationSensitivity = 0.7f, float photoreceptorsTemporalConstant = 0.5f, float photoreceptorsSpatialConstant = 0.53f, float horizontalCellsGain = 0.f, float HcellsTemporalConstant = 1.f, float HcellsSpatialConstant = 7.f, float ganglionCellsSensitivity = 0.7f)
//

using namespace cv::bioinspired;

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_setupOPLandIPLParvoChannel_10 (JNIEnv*, jclass, jlong, jboolean, jboolean, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_setupOPLandIPLParvoChannel_10
  (JNIEnv* env, jclass , jlong self, jboolean colorMode, jboolean normaliseOutput, jfloat photoreceptorsLocalAdaptationSensitivity, jfloat photoreceptorsTemporalConstant, jfloat photoreceptorsSpatialConstant, jfloat horizontalCellsGain, jfloat HcellsTemporalConstant, jfloat HcellsSpatialConstant, jfloat ganglionCellsSensitivity)
{
    static const char method_name[] = "bioinspired::setupOPLandIPLParvoChannel_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::Retina>* me = (Ptr<cv::bioinspired::Retina>*) self; //TODO: check for NULL
        (*me)->setupOPLandIPLParvoChannel( (bool)colorMode, (bool)normaliseOutput, (float)photoreceptorsLocalAdaptationSensitivity, (float)photoreceptorsTemporalConstant, (float)photoreceptorsSpatialConstant, (float)horizontalCellsGain, (float)HcellsTemporalConstant, (float)HcellsSpatialConstant, (float)ganglionCellsSensitivity );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



using namespace cv::bioinspired;

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_setupOPLandIPLParvoChannel_11 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_setupOPLandIPLParvoChannel_11
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "bioinspired::setupOPLandIPLParvoChannel_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::Retina>* me = (Ptr<cv::bioinspired::Retina>*) self; //TODO: check for NULL
        (*me)->setupOPLandIPLParvoChannel(  );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void write(String fs)
//

using namespace cv::bioinspired;

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_write_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_write_10
  (JNIEnv* env, jclass , jlong self, jstring fs)
{
    static const char method_name[] = "bioinspired::write_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bioinspired::Retina>* me = (Ptr<cv::bioinspired::Retina>*) self; //TODO: check for NULL
        const char* utf_fs = env->GetStringUTFChars(fs, 0); String n_fs( utf_fs ? utf_fs : "" ); env->ReleaseStringUTFChars(fs, utf_fs);
        (*me)->write( n_fs );
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
//  static void Ptr<cv::bioinspired::Retina>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bioinspired_Retina_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::bioinspired::Retina>*) self;
}



} // extern "C"

#endif // HAVE_OPENCV_BIOINSPIRED
