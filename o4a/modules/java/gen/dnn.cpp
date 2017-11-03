
//
// This file is auto-generated, please don't edit!
//

#define LOG_TAG "org.opencv.dnn"

#include "common.h"

#include "opencv2/opencv_modules.hpp"
#ifdef HAVE_OPENCV_DNN

#include <string>

#include "opencv2/dnn.hpp"

#include "/Users/Chao/opencv/modules/dnn/misc/java/src/cpp/dnn_converters.hpp"
#include "/Users/Chao/opencv/modules/dnn/include/opencv2/dnn/all_layers.hpp"
#include "/Users/Chao/opencv/modules/dnn/include/opencv2/dnn/dict.hpp"
#include "/Users/Chao/opencv/modules/dnn/include/opencv2/dnn/dnn.hpp"

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
//  vector_Mat finalize(vector_Mat inputs)
//

using namespace cv::dnn;

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Layer_finalize_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Layer_finalize_10
  (JNIEnv* env, jclass , jlong self, jlong inputs_mat_nativeObj)
{
    static const char method_name[] = "dnn::finalize_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> inputs;
        Mat& inputs_mat = *((Mat*)inputs_mat_nativeObj);
        Mat_to_vector_Mat( inputs_mat, inputs );
        Ptr<cv::dnn::Layer>* me = (Ptr<cv::dnn::Layer>*) self; //TODO: check for NULL
        std::vector<Mat> _ret_val_vector_ = (*me)->finalize( inputs );
        Mat* _retval_ = new Mat();  vector_Mat_to_Mat(_ret_val_vector_, *_retval_);
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void finalize(vector_Mat inputs, vector_Mat& outputs)
//

using namespace cv::dnn;

JNIEXPORT void JNICALL Java_org_opencv_dnn_Layer_finalize_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Layer_finalize_11
  (JNIEnv* env, jclass , jlong self, jlong inputs_mat_nativeObj, jlong outputs_mat_nativeObj)
{
    static const char method_name[] = "dnn::finalize_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> inputs;
        Mat& inputs_mat = *((Mat*)inputs_mat_nativeObj);
        Mat_to_vector_Mat( inputs_mat, inputs );
        std::vector<Mat> outputs;
        Mat& outputs_mat = *((Mat*)outputs_mat_nativeObj);
        Ptr<cv::dnn::Layer>* me = (Ptr<cv::dnn::Layer>*) self; //TODO: check for NULL
        (*me)->finalize( inputs, outputs );
        vector_Mat_to_Mat( outputs, outputs_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void forward(vector_Mat inputs, vector_Mat& outputs, vector_Mat& internals)
//

using namespace cv::dnn;

JNIEXPORT void JNICALL Java_org_opencv_dnn_Layer_forward_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Layer_forward_10
  (JNIEnv* env, jclass , jlong self, jlong inputs_mat_nativeObj, jlong outputs_mat_nativeObj, jlong internals_mat_nativeObj)
{
    static const char method_name[] = "dnn::forward_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> inputs;
        Mat& inputs_mat = *((Mat*)inputs_mat_nativeObj);
        Mat_to_vector_Mat( inputs_mat, inputs );
        std::vector<Mat> outputs;
        Mat& outputs_mat = *((Mat*)outputs_mat_nativeObj);
        Mat_to_vector_Mat( outputs_mat, outputs );
        std::vector<Mat> internals;
        Mat& internals_mat = *((Mat*)internals_mat_nativeObj);
        Mat_to_vector_Mat( internals_mat, internals );
        Ptr<cv::dnn::Layer>* me = (Ptr<cv::dnn::Layer>*) self; //TODO: check for NULL
        (*me)->forward( inputs, outputs, internals );
        vector_Mat_to_Mat( outputs, outputs_mat );  vector_Mat_to_Mat( internals, internals_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void run(vector_Mat inputs, vector_Mat& outputs, vector_Mat& internals)
//

using namespace cv::dnn;

JNIEXPORT void JNICALL Java_org_opencv_dnn_Layer_run_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Layer_run_10
  (JNIEnv* env, jclass , jlong self, jlong inputs_mat_nativeObj, jlong outputs_mat_nativeObj, jlong internals_mat_nativeObj)
{
    static const char method_name[] = "dnn::run_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> inputs;
        Mat& inputs_mat = *((Mat*)inputs_mat_nativeObj);
        Mat_to_vector_Mat( inputs_mat, inputs );
        std::vector<Mat> outputs;
        Mat& outputs_mat = *((Mat*)outputs_mat_nativeObj);
        std::vector<Mat> internals;
        Mat& internals_mat = *((Mat*)internals_mat_nativeObj);
        Mat_to_vector_Mat( internals_mat, internals );
        Ptr<cv::dnn::Layer>* me = (Ptr<cv::dnn::Layer>*) self; //TODO: check for NULL
        (*me)->run( inputs, outputs, internals );
        vector_Mat_to_Mat( outputs, outputs_mat );  vector_Mat_to_Mat( internals, internals_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// vector_Mat Layer::blobs
//

using namespace cv::dnn;

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Layer_get_1blobs_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Layer_get_1blobs_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "dnn::get_1blobs_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::dnn::Layer>* me = (Ptr<cv::dnn::Layer>*) self; //TODO: check for NULL
        std::vector<Mat> _ret_val_vector_ = (*me)->blobs;//(  );
        Mat* _retval_ = new Mat();  vector_Mat_to_Mat(_ret_val_vector_, *_retval_);
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Layer::blobs
//

using namespace cv::dnn;

JNIEXPORT void JNICALL Java_org_opencv_dnn_Layer_set_1blobs_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Layer_set_1blobs_10
  (JNIEnv* env, jclass , jlong self, jlong blobs_mat_nativeObj)
{
    static const char method_name[] = "dnn::set_1blobs_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> blobs;
        Mat& blobs_mat = *((Mat*)blobs_mat_nativeObj);
        Mat_to_vector_Mat( blobs_mat, blobs );
        Ptr<cv::dnn::Layer>* me = (Ptr<cv::dnn::Layer>*) self; //TODO: check for NULL
        (*me)->blobs = ( blobs );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// String Layer::name
//

using namespace cv::dnn;

JNIEXPORT jstring JNICALL Java_org_opencv_dnn_Layer_get_1name_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jstring JNICALL Java_org_opencv_dnn_Layer_get_1name_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "dnn::get_1name_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::dnn::Layer>* me = (Ptr<cv::dnn::Layer>*) self; //TODO: check for NULL
        cv::String _retval_ = (*me)->name;//(  );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
// String Layer::type
//

using namespace cv::dnn;

JNIEXPORT jstring JNICALL Java_org_opencv_dnn_Layer_get_1type_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jstring JNICALL Java_org_opencv_dnn_Layer_get_1type_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "dnn::get_1type_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::dnn::Layer>* me = (Ptr<cv::dnn::Layer>*) self; //TODO: check for NULL
        cv::String _retval_ = (*me)->type;//(  );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
// int Layer::preferableTarget
//

using namespace cv::dnn;

JNIEXPORT jint JNICALL Java_org_opencv_dnn_Layer_get_1preferableTarget_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_dnn_Layer_get_1preferableTarget_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "dnn::get_1preferableTarget_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::dnn::Layer>* me = (Ptr<cv::dnn::Layer>*) self; //TODO: check for NULL
        int _retval_ = (*me)->preferableTarget;//(  );
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
//  static void Ptr<cv::dnn::Layer>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_dnn_Layer_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Layer_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::dnn::Layer>*) self;
}


//
//  Mat blobFromImage(Mat image, double scalefactor = 1.0, Size size = Size(), Scalar mean = Scalar(), bool swapRB = true, bool crop = true)
//



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImage_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jboolean, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImage_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jdouble scalefactor, jdouble size_width, jdouble size_height, jdouble mean_val0, jdouble mean_val1, jdouble mean_val2, jdouble mean_val3, jboolean swapRB, jboolean crop)
{
    static const char method_name[] = "dnn::blobFromImage_10()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Size size((int)size_width, (int)size_height);
        Scalar mean(mean_val0, mean_val1, mean_val2, mean_val3);
        ::Mat _retval_ = cv::dnn::blobFromImage( image, (double)scalefactor, size, mean, (bool)swapRB, (bool)crop );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImage_11 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImage_11
  (JNIEnv* env, jclass , jlong image_nativeObj)
{
    static const char method_name[] = "dnn::blobFromImage_11()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        ::Mat _retval_ = cv::dnn::blobFromImage( image );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat blobFromImages(vector_Mat images, double scalefactor = 1.0, Size size = Size(), Scalar mean = Scalar(), bool swapRB = true, bool crop = true)
//



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImages_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jboolean, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImages_10
  (JNIEnv* env, jclass , jlong images_mat_nativeObj, jdouble scalefactor, jdouble size_width, jdouble size_height, jdouble mean_val0, jdouble mean_val1, jdouble mean_val2, jdouble mean_val3, jboolean swapRB, jboolean crop)
{
    static const char method_name[] = "dnn::blobFromImages_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> images;
        Mat& images_mat = *((Mat*)images_mat_nativeObj);
        Mat_to_vector_Mat( images_mat, images );
        Size size((int)size_width, (int)size_height);
        Scalar mean(mean_val0, mean_val1, mean_val2, mean_val3);
        ::Mat _retval_ = cv::dnn::blobFromImages( images, (double)scalefactor, size, mean, (bool)swapRB, (bool)crop );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImages_11 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImages_11
  (JNIEnv* env, jclass , jlong images_mat_nativeObj)
{
    static const char method_name[] = "dnn::blobFromImages_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> images;
        Mat& images_mat = *((Mat*)images_mat_nativeObj);
        Mat_to_vector_Mat( images_mat, images );
        ::Mat _retval_ = cv::dnn::blobFromImages( images );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat readTorchBlob(String filename, bool isBinary = true)
//



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readTorchBlob_10 (JNIEnv*, jclass, jstring, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readTorchBlob_10
  (JNIEnv* env, jclass , jstring filename, jboolean isBinary)
{
    static const char method_name[] = "dnn::readTorchBlob_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        ::Mat _retval_ = cv::dnn::readTorchBlob( n_filename, (bool)isBinary );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readTorchBlob_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readTorchBlob_11
  (JNIEnv* env, jclass , jstring filename)
{
    static const char method_name[] = "dnn::readTorchBlob_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        ::Mat _retval_ = cv::dnn::readTorchBlob( n_filename );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Net readNetFromCaffe(String prototxt, String caffeModel = String())
//



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromCaffe_10 (JNIEnv*, jclass, jstring, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromCaffe_10
  (JNIEnv* env, jclass , jstring prototxt, jstring caffeModel)
{
    static const char method_name[] = "dnn::readNetFromCaffe_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_prototxt = env->GetStringUTFChars(prototxt, 0); String n_prototxt( utf_prototxt ? utf_prototxt : "" ); env->ReleaseStringUTFChars(prototxt, utf_prototxt);
        const char* utf_caffeModel = env->GetStringUTFChars(caffeModel, 0); String n_caffeModel( utf_caffeModel ? utf_caffeModel : "" ); env->ReleaseStringUTFChars(caffeModel, utf_caffeModel);
        cv::dnn::Net _retval_ = cv::dnn::readNetFromCaffe( n_prototxt, n_caffeModel );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromCaffe_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromCaffe_11
  (JNIEnv* env, jclass , jstring prototxt)
{
    static const char method_name[] = "dnn::readNetFromCaffe_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_prototxt = env->GetStringUTFChars(prototxt, 0); String n_prototxt( utf_prototxt ? utf_prototxt : "" ); env->ReleaseStringUTFChars(prototxt, utf_prototxt);
        cv::dnn::Net _retval_ = cv::dnn::readNetFromCaffe( n_prototxt );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Net readNetFromDarknet(String cfgFile, String darknetModel = String())
//



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromDarknet_10 (JNIEnv*, jclass, jstring, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromDarknet_10
  (JNIEnv* env, jclass , jstring cfgFile, jstring darknetModel)
{
    static const char method_name[] = "dnn::readNetFromDarknet_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_cfgFile = env->GetStringUTFChars(cfgFile, 0); String n_cfgFile( utf_cfgFile ? utf_cfgFile : "" ); env->ReleaseStringUTFChars(cfgFile, utf_cfgFile);
        const char* utf_darknetModel = env->GetStringUTFChars(darknetModel, 0); String n_darknetModel( utf_darknetModel ? utf_darknetModel : "" ); env->ReleaseStringUTFChars(darknetModel, utf_darknetModel);
        cv::dnn::Net _retval_ = cv::dnn::readNetFromDarknet( n_cfgFile, n_darknetModel );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromDarknet_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromDarknet_11
  (JNIEnv* env, jclass , jstring cfgFile)
{
    static const char method_name[] = "dnn::readNetFromDarknet_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_cfgFile = env->GetStringUTFChars(cfgFile, 0); String n_cfgFile( utf_cfgFile ? utf_cfgFile : "" ); env->ReleaseStringUTFChars(cfgFile, utf_cfgFile);
        cv::dnn::Net _retval_ = cv::dnn::readNetFromDarknet( n_cfgFile );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Net readNetFromTensorflow(String model, String config = String())
//



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromTensorflow_10 (JNIEnv*, jclass, jstring, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromTensorflow_10
  (JNIEnv* env, jclass , jstring model, jstring config)
{
    static const char method_name[] = "dnn::readNetFromTensorflow_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        const char* utf_config = env->GetStringUTFChars(config, 0); String n_config( utf_config ? utf_config : "" ); env->ReleaseStringUTFChars(config, utf_config);
        cv::dnn::Net _retval_ = cv::dnn::readNetFromTensorflow( n_model, n_config );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromTensorflow_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromTensorflow_11
  (JNIEnv* env, jclass , jstring model)
{
    static const char method_name[] = "dnn::readNetFromTensorflow_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        cv::dnn::Net _retval_ = cv::dnn::readNetFromTensorflow( n_model );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Net readNetFromTorch(String model, bool isBinary = true)
//



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromTorch_10 (JNIEnv*, jclass, jstring, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromTorch_10
  (JNIEnv* env, jclass , jstring model, jboolean isBinary)
{
    static const char method_name[] = "dnn::readNetFromTorch_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        cv::dnn::Net _retval_ = cv::dnn::readNetFromTorch( n_model, (bool)isBinary );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromTorch_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromTorch_11
  (JNIEnv* env, jclass , jstring model)
{
    static const char method_name[] = "dnn::readNetFromTorch_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        cv::dnn::Net _retval_ = cv::dnn::readNetFromTorch( n_model );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_Importer createCaffeImporter(String prototxt, String caffeModel = String())
//



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_createCaffeImporter_10 (JNIEnv*, jclass, jstring, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_createCaffeImporter_10
  (JNIEnv* env, jclass , jstring prototxt, jstring caffeModel)
{
    static const char method_name[] = "dnn::createCaffeImporter_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::dnn::Importer> Ptr_Importer;
        const char* utf_prototxt = env->GetStringUTFChars(prototxt, 0); String n_prototxt( utf_prototxt ? utf_prototxt : "" ); env->ReleaseStringUTFChars(prototxt, utf_prototxt);
        const char* utf_caffeModel = env->GetStringUTFChars(caffeModel, 0); String n_caffeModel( utf_caffeModel ? utf_caffeModel : "" ); env->ReleaseStringUTFChars(caffeModel, utf_caffeModel);
        Ptr_Importer _retval_ = cv::dnn::createCaffeImporter( n_prototxt, n_caffeModel );
        return (jlong)(new Ptr_Importer(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_createCaffeImporter_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_createCaffeImporter_11
  (JNIEnv* env, jclass , jstring prototxt)
{
    static const char method_name[] = "dnn::createCaffeImporter_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::dnn::Importer> Ptr_Importer;
        const char* utf_prototxt = env->GetStringUTFChars(prototxt, 0); String n_prototxt( utf_prototxt ? utf_prototxt : "" ); env->ReleaseStringUTFChars(prototxt, utf_prototxt);
        Ptr_Importer _retval_ = cv::dnn::createCaffeImporter( n_prototxt );
        return (jlong)(new Ptr_Importer(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_Importer createTensorflowImporter(String model)
//



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_createTensorflowImporter_10 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_createTensorflowImporter_10
  (JNIEnv* env, jclass , jstring model)
{
    static const char method_name[] = "dnn::createTensorflowImporter_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::dnn::Importer> Ptr_Importer;
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        Ptr_Importer _retval_ = cv::dnn::createTensorflowImporter( n_model );
        return (jlong)(new Ptr_Importer(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_Importer createTorchImporter(String filename, bool isBinary = true)
//



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_createTorchImporter_10 (JNIEnv*, jclass, jstring, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_createTorchImporter_10
  (JNIEnv* env, jclass , jstring filename, jboolean isBinary)
{
    static const char method_name[] = "dnn::createTorchImporter_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::dnn::Importer> Ptr_Importer;
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Ptr_Importer _retval_ = cv::dnn::createTorchImporter( n_filename, (bool)isBinary );
        return (jlong)(new Ptr_Importer(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_createTorchImporter_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_createTorchImporter_11
  (JNIEnv* env, jclass , jstring filename)
{
    static const char method_name[] = "dnn::createTorchImporter_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::dnn::Importer> Ptr_Importer;
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Ptr_Importer _retval_ = cv::dnn::createTorchImporter( n_filename );
        return (jlong)(new Ptr_Importer(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void NMSBoxes(vector_Rect bboxes, vector_float scores, float score_threshold, float nms_threshold, vector_int& indices, float eta = 1.f, int top_k = 0)
//



JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_NMSBoxes_10 (JNIEnv*, jclass, jlong, jlong, jfloat, jfloat, jlong, jfloat, jint);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_NMSBoxes_10
  (JNIEnv* env, jclass , jlong bboxes_mat_nativeObj, jlong scores_mat_nativeObj, jfloat score_threshold, jfloat nms_threshold, jlong indices_mat_nativeObj, jfloat eta, jint top_k)
{
    static const char method_name[] = "dnn::NMSBoxes_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> bboxes;
        Mat& bboxes_mat = *((Mat*)bboxes_mat_nativeObj);
        Mat_to_vector_Rect( bboxes_mat, bboxes );
        std::vector<float> scores;
        Mat& scores_mat = *((Mat*)scores_mat_nativeObj);
        Mat_to_vector_float( scores_mat, scores );
        std::vector<int> indices;
        Mat& indices_mat = *((Mat*)indices_mat_nativeObj);
        cv::dnn::NMSBoxes( bboxes, scores, (float)score_threshold, (float)nms_threshold, indices, (float)eta, (int)top_k );
        vector_int_to_Mat( indices, indices_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_NMSBoxes_11 (JNIEnv*, jclass, jlong, jlong, jfloat, jfloat, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_NMSBoxes_11
  (JNIEnv* env, jclass , jlong bboxes_mat_nativeObj, jlong scores_mat_nativeObj, jfloat score_threshold, jfloat nms_threshold, jlong indices_mat_nativeObj)
{
    static const char method_name[] = "dnn::NMSBoxes_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> bboxes;
        Mat& bboxes_mat = *((Mat*)bboxes_mat_nativeObj);
        Mat_to_vector_Rect( bboxes_mat, bboxes );
        std::vector<float> scores;
        Mat& scores_mat = *((Mat*)scores_mat_nativeObj);
        Mat_to_vector_float( scores_mat, scores );
        std::vector<int> indices;
        Mat& indices_mat = *((Mat*)indices_mat_nativeObj);
        cv::dnn::NMSBoxes( bboxes, scores, (float)score_threshold, (float)nms_threshold, indices );
        vector_int_to_Mat( indices, indices_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void shrinkCaffeModel(String src, String dst, vector_String layersTypes = std::vector<String>())
//



JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_shrinkCaffeModel_10 (JNIEnv*, jclass, jstring, jstring, jobject);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_shrinkCaffeModel_10
  (JNIEnv* env, jclass , jstring src, jstring dst, jobject layersTypes_list)
{
    static const char method_name[] = "dnn::shrinkCaffeModel_10()";
    try {
        LOGD("%s", method_name);
        std::vector< String > layersTypes;
        layersTypes = List_to_vector_String(env, layersTypes_list);
        const char* utf_src = env->GetStringUTFChars(src, 0); String n_src( utf_src ? utf_src : "" ); env->ReleaseStringUTFChars(src, utf_src);
        const char* utf_dst = env->GetStringUTFChars(dst, 0); String n_dst( utf_dst ? utf_dst : "" ); env->ReleaseStringUTFChars(dst, utf_dst);
        cv::dnn::shrinkCaffeModel( n_src, n_dst, layersTypes );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_shrinkCaffeModel_11 (JNIEnv*, jclass, jstring, jstring);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_shrinkCaffeModel_11
  (JNIEnv* env, jclass , jstring src, jstring dst)
{
    static const char method_name[] = "dnn::shrinkCaffeModel_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_src = env->GetStringUTFChars(src, 0); String n_src( utf_src ? utf_src : "" ); env->ReleaseStringUTFChars(src, utf_src);
        const char* utf_dst = env->GetStringUTFChars(dst, 0); String n_dst( utf_dst ? utf_dst : "" ); env->ReleaseStringUTFChars(dst, utf_dst);
        cv::dnn::shrinkCaffeModel( n_src, n_dst );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void populateNet(Net net)
//

using namespace cv::dnn;

JNIEXPORT void JNICALL Java_org_opencv_dnn_Importer_populateNet_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Importer_populateNet_10
  (JNIEnv* env, jclass , jlong self, jlong net_nativeObj)
{
    static const char method_name[] = "dnn::populateNet_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::dnn::Importer>* me = (Ptr<cv::dnn::Importer>*) self; //TODO: check for NULL
        (*me)->populateNet( (*(cv::dnn::Net*)net_nativeObj) );
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
//  static void Ptr<cv::dnn::Importer>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_dnn_Importer_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Importer_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::dnn::Importer>*) self;
}


//
//   DictValue(String s)
//

using namespace cv::dnn;

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_DictValue_DictValue_10 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_DictValue_DictValue_10
  (JNIEnv* env, jclass , jstring s)
{
    static const char method_name[] = "dnn::DictValue_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_s = env->GetStringUTFChars(s, 0); String n_s( utf_s ? utf_s : "" ); env->ReleaseStringUTFChars(s, utf_s);
        cv::dnn::DictValue* _retval_ = new cv::dnn::DictValue( n_s );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   DictValue(double p)
//

using namespace cv::dnn;

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_DictValue_DictValue_11 (JNIEnv*, jclass, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_DictValue_DictValue_11
  (JNIEnv* env, jclass , jdouble p)
{
    static const char method_name[] = "dnn::DictValue_11()";
    try {
        LOGD("%s", method_name);
        
        cv::dnn::DictValue* _retval_ = new cv::dnn::DictValue( (double)p );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   DictValue(int i)
//

using namespace cv::dnn;

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_DictValue_DictValue_12 (JNIEnv*, jclass, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_DictValue_DictValue_12
  (JNIEnv* env, jclass , jint i)
{
    static const char method_name[] = "dnn::DictValue_12()";
    try {
        LOGD("%s", method_name);
        
        cv::dnn::DictValue* _retval_ = new cv::dnn::DictValue( (int)i );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  String getStringValue(int idx = -1)
//

using namespace cv::dnn;

JNIEXPORT jstring JNICALL Java_org_opencv_dnn_DictValue_getStringValue_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jstring JNICALL Java_org_opencv_dnn_DictValue_getStringValue_10
  (JNIEnv* env, jclass , jlong self, jint idx)
{
    static const char method_name[] = "dnn::getStringValue_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::DictValue* me = (cv::dnn::DictValue*) self; //TODO: check for NULL
        cv::String _retval_ = me->getStringValue( (int)idx );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



using namespace cv::dnn;

JNIEXPORT jstring JNICALL Java_org_opencv_dnn_DictValue_getStringValue_11 (JNIEnv*, jclass, jlong);

JNIEXPORT jstring JNICALL Java_org_opencv_dnn_DictValue_getStringValue_11
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "dnn::getStringValue_11()";
    try {
        LOGD("%s", method_name);
        cv::dnn::DictValue* me = (cv::dnn::DictValue*) self; //TODO: check for NULL
        cv::String _retval_ = me->getStringValue(  );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
//  bool isInt()
//

using namespace cv::dnn;

JNIEXPORT jboolean JNICALL Java_org_opencv_dnn_DictValue_isInt_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_dnn_DictValue_isInt_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "dnn::isInt_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::DictValue* me = (cv::dnn::DictValue*) self; //TODO: check for NULL
        bool _retval_ = me->isInt(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool isReal()
//

using namespace cv::dnn;

JNIEXPORT jboolean JNICALL Java_org_opencv_dnn_DictValue_isReal_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_dnn_DictValue_isReal_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "dnn::isReal_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::DictValue* me = (cv::dnn::DictValue*) self; //TODO: check for NULL
        bool _retval_ = me->isReal(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool isString()
//

using namespace cv::dnn;

JNIEXPORT jboolean JNICALL Java_org_opencv_dnn_DictValue_isString_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_dnn_DictValue_isString_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "dnn::isString_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::DictValue* me = (cv::dnn::DictValue*) self; //TODO: check for NULL
        bool _retval_ = me->isString(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double getRealValue(int idx = -1)
//

using namespace cv::dnn;

JNIEXPORT jdouble JNICALL Java_org_opencv_dnn_DictValue_getRealValue_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jdouble JNICALL Java_org_opencv_dnn_DictValue_getRealValue_10
  (JNIEnv* env, jclass , jlong self, jint idx)
{
    static const char method_name[] = "dnn::getRealValue_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::DictValue* me = (cv::dnn::DictValue*) self; //TODO: check for NULL
        double _retval_ = me->getRealValue( (int)idx );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::dnn;

JNIEXPORT jdouble JNICALL Java_org_opencv_dnn_DictValue_getRealValue_11 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_dnn_DictValue_getRealValue_11
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "dnn::getRealValue_11()";
    try {
        LOGD("%s", method_name);
        cv::dnn::DictValue* me = (cv::dnn::DictValue*) self; //TODO: check for NULL
        double _retval_ = me->getRealValue(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getIntValue(int idx = -1)
//

using namespace cv::dnn;

JNIEXPORT jint JNICALL Java_org_opencv_dnn_DictValue_getIntValue_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jint JNICALL Java_org_opencv_dnn_DictValue_getIntValue_10
  (JNIEnv* env, jclass , jlong self, jint idx)
{
    static const char method_name[] = "dnn::getIntValue_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::DictValue* me = (cv::dnn::DictValue*) self; //TODO: check for NULL
        int _retval_ = me->getIntValue( (int)idx );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::dnn;

JNIEXPORT jint JNICALL Java_org_opencv_dnn_DictValue_getIntValue_11 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_dnn_DictValue_getIntValue_11
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "dnn::getIntValue_11()";
    try {
        LOGD("%s", method_name);
        cv::dnn::DictValue* me = (cv::dnn::DictValue*) self; //TODO: check for NULL
        int _retval_ = me->getIntValue(  );
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
//  static void cv::dnn::DictValue::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_dnn_DictValue_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_DictValue_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::dnn::DictValue*) self;
}


//
//   Net()
//

using namespace cv::dnn;

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_Net_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_Net_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "dnn::Net_10()";
    try {
        LOGD("%s", method_name);
        
        cv::dnn::Net* _retval_ = new cv::dnn::Net(  );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat forward(String outputName = String())
//

using namespace cv::dnn;

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_forward_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_forward_10
  (JNIEnv* env, jclass , jlong self, jstring outputName)
{
    static const char method_name[] = "dnn::forward_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        const char* utf_outputName = env->GetStringUTFChars(outputName, 0); String n_outputName( utf_outputName ? utf_outputName : "" ); env->ReleaseStringUTFChars(outputName, utf_outputName);
        ::Mat _retval_ = me->forward( n_outputName );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::dnn;

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_forward_11 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_forward_11
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "dnn::forward_11()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        ::Mat _retval_ = me->forward(  );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat getParam(LayerId layer, int numParam = 0)
//

using namespace cv::dnn;

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getParam_10 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getParam_10
  (JNIEnv* env, jclass , jlong self, jlong layer_nativeObj, jint numParam)
{
    static const char method_name[] = "dnn::getParam_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        ::Mat _retval_ = me->getParam( (*(cv::dnn::DictValue*)layer_nativeObj), (int)numParam );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::dnn;

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getParam_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getParam_11
  (JNIEnv* env, jclass , jlong self, jlong layer_nativeObj)
{
    static const char method_name[] = "dnn::getParam_11()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        ::Mat _retval_ = me->getParam( (*(cv::dnn::DictValue*)layer_nativeObj) );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_Layer getLayer(LayerId layerId)
//

using namespace cv::dnn;

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getLayer_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getLayer_10
  (JNIEnv* env, jclass , jlong self, jlong layerId_nativeObj)
{
    static const char method_name[] = "dnn::getLayer_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::dnn::Layer> Ptr_Layer;
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        Ptr_Layer _retval_ = me->getLayer( (*(cv::dnn::DictValue*)layerId_nativeObj) );
        return (jlong)(new Ptr_Layer(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool empty()
//

using namespace cv::dnn;

JNIEXPORT jboolean JNICALL Java_org_opencv_dnn_Net_empty_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_dnn_Net_empty_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "dnn::empty_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        bool _retval_ = me->empty(  );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getLayerId(String layer)
//

using namespace cv::dnn;

JNIEXPORT jint JNICALL Java_org_opencv_dnn_Net_getLayerId_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT jint JNICALL Java_org_opencv_dnn_Net_getLayerId_10
  (JNIEnv* env, jclass , jlong self, jstring layer)
{
    static const char method_name[] = "dnn::getLayerId_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        const char* utf_layer = env->GetStringUTFChars(layer, 0); String n_layer( utf_layer ? utf_layer : "" ); env->ReleaseStringUTFChars(layer, utf_layer);
        int _retval_ = me->getLayerId( n_layer );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int getLayersCount(String layerType)
//

using namespace cv::dnn;

JNIEXPORT jint JNICALL Java_org_opencv_dnn_Net_getLayersCount_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT jint JNICALL Java_org_opencv_dnn_Net_getLayersCount_10
  (JNIEnv* env, jclass , jlong self, jstring layerType)
{
    static const char method_name[] = "dnn::getLayersCount_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        const char* utf_layerType = env->GetStringUTFChars(layerType, 0); String n_layerType( utf_layerType ? utf_layerType : "" ); env->ReleaseStringUTFChars(layerType, utf_layerType);
        int _retval_ = me->getLayersCount( n_layerType );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int64 getFLOPS(MatShape netInputShape)
//

using namespace cv::dnn;

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getFLOPS_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getFLOPS_10
  (JNIEnv* env, jclass , jlong self, jlong netInputShape_mat_nativeObj)
{
    static const char method_name[] = "dnn::getFLOPS_10()";
    try {
        LOGD("%s", method_name);
        MatShape netInputShape;
        Mat& netInputShape_mat = *((Mat*)netInputShape_mat_nativeObj);
        Mat_to_MatShape( netInputShape_mat, netInputShape );
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        int64 _retval_ = me->getFLOPS( netInputShape );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int64 getFLOPS(int layerId, MatShape netInputShape)
//

using namespace cv::dnn;

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getFLOPS_11 (JNIEnv*, jclass, jlong, jint, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getFLOPS_11
  (JNIEnv* env, jclass , jlong self, jint layerId, jlong netInputShape_mat_nativeObj)
{
    static const char method_name[] = "dnn::getFLOPS_11()";
    try {
        LOGD("%s", method_name);
        MatShape netInputShape;
        Mat& netInputShape_mat = *((Mat*)netInputShape_mat_nativeObj);
        Mat_to_MatShape( netInputShape_mat, netInputShape );
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        int64 _retval_ = me->getFLOPS( (int)layerId, netInputShape );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int64 getFLOPS(int layerId, vector_MatShape netInputShapes)
//

using namespace cv::dnn;

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getFLOPS_12 (JNIEnv*, jclass, jlong, jint, jobject);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getFLOPS_12
  (JNIEnv* env, jclass , jlong self, jint layerId, jobject netInputShapes_list)
{
    static const char method_name[] = "dnn::getFLOPS_12()";
    try {
        LOGD("%s", method_name);
        std::vector< MatShape > netInputShapes;
        netInputShapes = List_to_vector_MatShape(env, netInputShapes_list);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        int64 _retval_ = me->getFLOPS( (int)layerId, netInputShapes );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int64 getFLOPS(vector_MatShape netInputShapes)
//

using namespace cv::dnn;

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getFLOPS_13 (JNIEnv*, jclass, jlong, jobject);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getFLOPS_13
  (JNIEnv* env, jclass , jlong self, jobject netInputShapes_list)
{
    static const char method_name[] = "dnn::getFLOPS_13()";
    try {
        LOGD("%s", method_name);
        std::vector< MatShape > netInputShapes;
        netInputShapes = List_to_vector_MatShape(env, netInputShapes_list);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        int64 _retval_ = me->getFLOPS( netInputShapes );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int64 getPerfProfile(vector_double& timings)
//

using namespace cv::dnn;

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getPerfProfile_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getPerfProfile_10
  (JNIEnv* env, jclass , jlong self, jlong timings_mat_nativeObj)
{
    static const char method_name[] = "dnn::getPerfProfile_10()";
    try {
        LOGD("%s", method_name);
        std::vector<double> timings;
        Mat& timings_mat = *((Mat*)timings_mat_nativeObj);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        int64 _retval_ = me->getPerfProfile( timings );
        vector_double_to_Mat( timings, timings_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  vector_String getLayerNames()
//

using namespace cv::dnn;

JNIEXPORT jobject JNICALL Java_org_opencv_dnn_Net_getLayerNames_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jobject JNICALL Java_org_opencv_dnn_Net_getLayerNames_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "dnn::getLayerNames_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        std::vector< String > _ret_val_vector_ = me->getLayerNames(  );
        jobject _retval_ = vector_String_to_List(env, _ret_val_vector_);
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  vector_int getUnconnectedOutLayers()
//

using namespace cv::dnn;

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getUnconnectedOutLayers_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getUnconnectedOutLayers_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "dnn::getUnconnectedOutLayers_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        std::vector<int> _ret_val_vector_ = me->getUnconnectedOutLayers(  );
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
//  void connect(String outPin, String inpPin)
//

using namespace cv::dnn;

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_connect_10 (JNIEnv*, jclass, jlong, jstring, jstring);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_connect_10
  (JNIEnv* env, jclass , jlong self, jstring outPin, jstring inpPin)
{
    static const char method_name[] = "dnn::connect_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        const char* utf_outPin = env->GetStringUTFChars(outPin, 0); String n_outPin( utf_outPin ? utf_outPin : "" ); env->ReleaseStringUTFChars(outPin, utf_outPin);
        const char* utf_inpPin = env->GetStringUTFChars(inpPin, 0); String n_inpPin( utf_inpPin ? utf_inpPin : "" ); env->ReleaseStringUTFChars(inpPin, utf_inpPin);
        me->connect( n_outPin, n_inpPin );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void deleteLayer(LayerId layer)
//

using namespace cv::dnn;

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_deleteLayer_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_deleteLayer_10
  (JNIEnv* env, jclass , jlong self, jlong layer_nativeObj)
{
    static const char method_name[] = "dnn::deleteLayer_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        me->deleteLayer( (*(cv::dnn::DictValue*)layer_nativeObj) );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void enableFusion(bool fusion)
//

using namespace cv::dnn;

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_enableFusion_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_enableFusion_10
  (JNIEnv* env, jclass , jlong self, jboolean fusion)
{
    static const char method_name[] = "dnn::enableFusion_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        me->enableFusion( (bool)fusion );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void forward(vector_Mat outputBlobs, String outputName = String())
//

using namespace cv::dnn;

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_forward_12 (JNIEnv*, jclass, jlong, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_forward_12
  (JNIEnv* env, jclass , jlong self, jlong outputBlobs_mat_nativeObj, jstring outputName)
{
    static const char method_name[] = "dnn::forward_12()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> outputBlobs;
        Mat& outputBlobs_mat = *((Mat*)outputBlobs_mat_nativeObj);
        Mat_to_vector_Mat( outputBlobs_mat, outputBlobs );
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        const char* utf_outputName = env->GetStringUTFChars(outputName, 0); String n_outputName( utf_outputName ? utf_outputName : "" ); env->ReleaseStringUTFChars(outputName, utf_outputName);
        me->forward( outputBlobs, n_outputName );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



using namespace cv::dnn;

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_forward_13 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_forward_13
  (JNIEnv* env, jclass , jlong self, jlong outputBlobs_mat_nativeObj)
{
    static const char method_name[] = "dnn::forward_13()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> outputBlobs;
        Mat& outputBlobs_mat = *((Mat*)outputBlobs_mat_nativeObj);
        Mat_to_vector_Mat( outputBlobs_mat, outputBlobs );
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        me->forward( outputBlobs );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void forward(vector_Mat outputBlobs, vector_String outBlobNames)
//

using namespace cv::dnn;

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_forward_14 (JNIEnv*, jclass, jlong, jlong, jobject);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_forward_14
  (JNIEnv* env, jclass , jlong self, jlong outputBlobs_mat_nativeObj, jobject outBlobNames_list)
{
    static const char method_name[] = "dnn::forward_14()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> outputBlobs;
        Mat& outputBlobs_mat = *((Mat*)outputBlobs_mat_nativeObj);
        Mat_to_vector_Mat( outputBlobs_mat, outputBlobs );
        std::vector< String > outBlobNames;
        outBlobNames = List_to_vector_String(env, outBlobNames_list);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        me->forward( outputBlobs, outBlobNames );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void getLayerTypes(vector_String& layersTypes)
//

using namespace cv::dnn;

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_getLayerTypes_10 (JNIEnv*, jclass, jlong, jobject);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_getLayerTypes_10
  (JNIEnv* env, jclass , jlong self, jobject layersTypes_list)
{
    static const char method_name[] = "dnn::getLayerTypes_10()";
    try {
        LOGD("%s", method_name);
        std::vector< String > layersTypes;
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        me->getLayerTypes( layersTypes );
        Copy_vector_String_to_List(env,layersTypes,layersTypes_list);
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void getMemoryConsumption(MatShape netInputShape, size_t& weights, size_t& blobs)
//

using namespace cv::dnn;

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_getMemoryConsumption_10 (JNIEnv*, jclass, jlong, jlong, jdoubleArray, jdoubleArray);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_getMemoryConsumption_10
  (JNIEnv* env, jclass , jlong self, jlong netInputShape_mat_nativeObj, jdoubleArray weights_out, jdoubleArray blobs_out)
{
    static const char method_name[] = "dnn::getMemoryConsumption_10()";
    try {
        LOGD("%s", method_name);
        MatShape netInputShape;
        Mat& netInputShape_mat = *((Mat*)netInputShape_mat_nativeObj);
        Mat_to_MatShape( netInputShape_mat, netInputShape );
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        size_t weights;
        size_t blobs;
        me->getMemoryConsumption( netInputShape, weights, blobs );
        jdouble tmp_weights[1] = {(jdouble)weights}; env->SetDoubleArrayRegion(weights_out, 0, 1, tmp_weights);  jdouble tmp_blobs[1] = {(jdouble)blobs}; env->SetDoubleArrayRegion(blobs_out, 0, 1, tmp_blobs);
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void getMemoryConsumption(int layerId, MatShape netInputShape, size_t& weights, size_t& blobs)
//

using namespace cv::dnn;

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_getMemoryConsumption_11 (JNIEnv*, jclass, jlong, jint, jlong, jdoubleArray, jdoubleArray);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_getMemoryConsumption_11
  (JNIEnv* env, jclass , jlong self, jint layerId, jlong netInputShape_mat_nativeObj, jdoubleArray weights_out, jdoubleArray blobs_out)
{
    static const char method_name[] = "dnn::getMemoryConsumption_11()";
    try {
        LOGD("%s", method_name);
        MatShape netInputShape;
        Mat& netInputShape_mat = *((Mat*)netInputShape_mat_nativeObj);
        Mat_to_MatShape( netInputShape_mat, netInputShape );
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        size_t weights;
        size_t blobs;
        me->getMemoryConsumption( (int)layerId, netInputShape, weights, blobs );
        jdouble tmp_weights[1] = {(jdouble)weights}; env->SetDoubleArrayRegion(weights_out, 0, 1, tmp_weights);  jdouble tmp_blobs[1] = {(jdouble)blobs}; env->SetDoubleArrayRegion(blobs_out, 0, 1, tmp_blobs);
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void getMemoryConsumption(int layerId, vector_MatShape netInputShapes, size_t& weights, size_t& blobs)
//

using namespace cv::dnn;

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_getMemoryConsumption_12 (JNIEnv*, jclass, jlong, jint, jobject, jdoubleArray, jdoubleArray);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_getMemoryConsumption_12
  (JNIEnv* env, jclass , jlong self, jint layerId, jobject netInputShapes_list, jdoubleArray weights_out, jdoubleArray blobs_out)
{
    static const char method_name[] = "dnn::getMemoryConsumption_12()";
    try {
        LOGD("%s", method_name);
        std::vector< MatShape > netInputShapes;
        netInputShapes = List_to_vector_MatShape(env, netInputShapes_list);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        size_t weights;
        size_t blobs;
        me->getMemoryConsumption( (int)layerId, netInputShapes, weights, blobs );
        jdouble tmp_weights[1] = {(jdouble)weights}; env->SetDoubleArrayRegion(weights_out, 0, 1, tmp_weights);  jdouble tmp_blobs[1] = {(jdouble)blobs}; env->SetDoubleArrayRegion(blobs_out, 0, 1, tmp_blobs);
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setHalideScheduler(String scheduler)
//

using namespace cv::dnn;

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setHalideScheduler_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setHalideScheduler_10
  (JNIEnv* env, jclass , jlong self, jstring scheduler)
{
    static const char method_name[] = "dnn::setHalideScheduler_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        const char* utf_scheduler = env->GetStringUTFChars(scheduler, 0); String n_scheduler( utf_scheduler ? utf_scheduler : "" ); env->ReleaseStringUTFChars(scheduler, utf_scheduler);
        me->setHalideScheduler( n_scheduler );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setInput(Mat blob, String name = "")
//

using namespace cv::dnn;

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setInput_10 (JNIEnv*, jclass, jlong, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setInput_10
  (JNIEnv* env, jclass , jlong self, jlong blob_nativeObj, jstring name)
{
    static const char method_name[] = "dnn::setInput_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        Mat& blob = *((Mat*)blob_nativeObj);
        const char* utf_name = env->GetStringUTFChars(name, 0); String n_name( utf_name ? utf_name : "" ); env->ReleaseStringUTFChars(name, utf_name);
        me->setInput( blob, n_name );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



using namespace cv::dnn;

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setInput_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setInput_11
  (JNIEnv* env, jclass , jlong self, jlong blob_nativeObj)
{
    static const char method_name[] = "dnn::setInput_11()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        Mat& blob = *((Mat*)blob_nativeObj);
        me->setInput( blob );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setInputsNames(vector_String inputBlobNames)
//

using namespace cv::dnn;

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setInputsNames_10 (JNIEnv*, jclass, jlong, jobject);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setInputsNames_10
  (JNIEnv* env, jclass , jlong self, jobject inputBlobNames_list)
{
    static const char method_name[] = "dnn::setInputsNames_10()";
    try {
        LOGD("%s", method_name);
        std::vector< String > inputBlobNames;
        inputBlobNames = List_to_vector_String(env, inputBlobNames_list);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        me->setInputsNames( inputBlobNames );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setParam(LayerId layer, int numParam, Mat blob)
//

using namespace cv::dnn;

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setParam_10 (JNIEnv*, jclass, jlong, jlong, jint, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setParam_10
  (JNIEnv* env, jclass , jlong self, jlong layer_nativeObj, jint numParam, jlong blob_nativeObj)
{
    static const char method_name[] = "dnn::setParam_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        Mat& blob = *((Mat*)blob_nativeObj);
        me->setParam( (*(cv::dnn::DictValue*)layer_nativeObj), (int)numParam, blob );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setPreferableBackend(int backendId)
//

using namespace cv::dnn;

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setPreferableBackend_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setPreferableBackend_10
  (JNIEnv* env, jclass , jlong self, jint backendId)
{
    static const char method_name[] = "dnn::setPreferableBackend_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        me->setPreferableBackend( (int)backendId );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void setPreferableTarget(int targetId)
//

using namespace cv::dnn;

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setPreferableTarget_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setPreferableTarget_10
  (JNIEnv* env, jclass , jlong self, jint targetId)
{
    static const char method_name[] = "dnn::setPreferableTarget_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        me->setPreferableTarget( (int)targetId );
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
//  static void cv::dnn::Net::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::dnn::Net*) self;
}



} // extern "C"

#endif // HAVE_OPENCV_DNN
