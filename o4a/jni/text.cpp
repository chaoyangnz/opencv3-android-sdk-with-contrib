
//
// This file is auto-generated, please don't edit!
//

#define LOG_TAG "org.opencv.text"

#include "common.h"

#include "opencv2/opencv_modules.hpp"
#ifdef HAVE_OPENCV_TEXT

#include <string>

#include "opencv2/text.hpp"

#include "/Users/Chao/opencv/modules/dnn/misc/java/src/cpp/dnn_converters.hpp"
#include "/Users/Chao/opencv/modules/features2d/misc/java/src/cpp/features2d_converters.hpp"
#include "/Users/Chao/opencv_contrib/modules/text/include/opencv2/text/erfilter.hpp"
#include "/Users/Chao/opencv_contrib/modules/text/include/opencv2/text/ocr.hpp"
#include "/Users/Chao/opencv_contrib/modules/text/include/opencv2/text/textDetector.hpp"

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
//  native support for java finalize()
//  static void cv::text::OCRHMMDecoder::ClassifierCallback::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_text_ClassifierCallback_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_text_ClassifierCallback_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::text::OCRHMMDecoder::ClassifierCallback*) self;
}


//
//  native support for java finalize()
//  static void cv::text::BaseOCR::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_text_BaseOCR_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_text_BaseOCR_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::text::BaseOCR*) self;
}


//
//  native support for java finalize()
//  static void Ptr<cv::text::ERFilter>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_text_ERFilter_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_text_ERFilter_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::text::ERFilter>*) self;
}


//
//  Mat createOCRHMMTransitionsTable(String vocabulary, vector_String lexicon)
//



JNIEXPORT jlong JNICALL Java_org_opencv_text_Text_createOCRHMMTransitionsTable_10 (JNIEnv*, jclass, jstring, jobject);

JNIEXPORT jlong JNICALL Java_org_opencv_text_Text_createOCRHMMTransitionsTable_10
  (JNIEnv* env, jclass , jstring vocabulary, jobject lexicon_list)
{
    static const char method_name[] = "text::createOCRHMMTransitionsTable_10()";
    try {
        LOGD("%s", method_name);
        std::vector< String > lexicon;
        lexicon = List_to_vector_String(env, lexicon_list);
        const char* utf_vocabulary = env->GetStringUTFChars(vocabulary, 0); String n_vocabulary( utf_vocabulary ? utf_vocabulary : "" ); env->ReleaseStringUTFChars(vocabulary, utf_vocabulary);
        ::Mat _retval_ = cv::text::createOCRHMMTransitionsTable( n_vocabulary, lexicon );
        return (jlong) new ::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_ERFilter createERFilterNM1(String filename, int thresholdDelta = 1, float minArea = (float)0.00025, float maxArea = (float)0.13, float minProbability = (float)0.4, bool nonMaxSuppression = true, float minProbabilityDiff = (float)0.1)
//



JNIEXPORT jlong JNICALL Java_org_opencv_text_Text_createERFilterNM1_10 (JNIEnv*, jclass, jstring, jint, jfloat, jfloat, jfloat, jboolean, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_text_Text_createERFilterNM1_10
  (JNIEnv* env, jclass , jstring filename, jint thresholdDelta, jfloat minArea, jfloat maxArea, jfloat minProbability, jboolean nonMaxSuppression, jfloat minProbabilityDiff)
{
    static const char method_name[] = "text::createERFilterNM1_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::text::ERFilter> Ptr_ERFilter;
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Ptr_ERFilter _retval_ = cv::text::createERFilterNM1( n_filename, (int)thresholdDelta, (float)minArea, (float)maxArea, (float)minProbability, (bool)nonMaxSuppression, (float)minProbabilityDiff );
        return (jlong)(new Ptr_ERFilter(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_text_Text_createERFilterNM1_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_text_Text_createERFilterNM1_11
  (JNIEnv* env, jclass , jstring filename)
{
    static const char method_name[] = "text::createERFilterNM1_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::text::ERFilter> Ptr_ERFilter;
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Ptr_ERFilter _retval_ = cv::text::createERFilterNM1( n_filename );
        return (jlong)(new Ptr_ERFilter(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_ERFilter createERFilterNM2(String filename, float minProbability = (float)0.3)
//



JNIEXPORT jlong JNICALL Java_org_opencv_text_Text_createERFilterNM2_10 (JNIEnv*, jclass, jstring, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_text_Text_createERFilterNM2_10
  (JNIEnv* env, jclass , jstring filename, jfloat minProbability)
{
    static const char method_name[] = "text::createERFilterNM2_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::text::ERFilter> Ptr_ERFilter;
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Ptr_ERFilter _retval_ = cv::text::createERFilterNM2( n_filename, (float)minProbability );
        return (jlong)(new Ptr_ERFilter(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_text_Text_createERFilterNM2_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_text_Text_createERFilterNM2_11
  (JNIEnv* env, jclass , jstring filename)
{
    static const char method_name[] = "text::createERFilterNM2_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::text::ERFilter> Ptr_ERFilter;
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Ptr_ERFilter _retval_ = cv::text::createERFilterNM2( n_filename );
        return (jlong)(new Ptr_ERFilter(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void computeNMChannels(Mat _src, vector_Mat& _channels, int _mode = ERFILTER_NM_RGBLGrad)
//



JNIEXPORT void JNICALL Java_org_opencv_text_Text_computeNMChannels_10 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_text_Text_computeNMChannels_10
  (JNIEnv* env, jclass , jlong _src_nativeObj, jlong _channels_mat_nativeObj, jint _mode)
{
    static const char method_name[] = "text::computeNMChannels_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> _channels;
        Mat& _channels_mat = *((Mat*)_channels_mat_nativeObj);
        Mat& _src = *((Mat*)_src_nativeObj);
        cv::text::computeNMChannels( _src, _channels, (int)_mode );
        vector_Mat_to_Mat( _channels, _channels_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_opencv_text_Text_computeNMChannels_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_text_Text_computeNMChannels_11
  (JNIEnv* env, jclass , jlong _src_nativeObj, jlong _channels_mat_nativeObj)
{
    static const char method_name[] = "text::computeNMChannels_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> _channels;
        Mat& _channels_mat = *((Mat*)_channels_mat_nativeObj);
        Mat& _src = *((Mat*)_src_nativeObj);
        cv::text::computeNMChannels( _src, _channels );
        vector_Mat_to_Mat( _channels, _channels_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void detectRegions(Mat image, Ptr_ERFilter er_filter1, Ptr_ERFilter er_filter2, vector_Rect& groups_rects, int method = ERGROUPING_ORIENTATION_HORIZ, String filename = String(), float minProbability = (float)0.5)
//



JNIEXPORT void JNICALL Java_org_opencv_text_Text_detectRegions_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jint, jstring, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_text_Text_detectRegions_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong er_filter1_nativeObj, jlong er_filter2_nativeObj, jlong groups_rects_mat_nativeObj, jint method, jstring filename, jfloat minProbability)
{
    static const char method_name[] = "text::detectRegions_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> groups_rects;
        Mat& groups_rects_mat = *((Mat*)groups_rects_mat_nativeObj);
        Mat& image = *((Mat*)image_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        cv::text::detectRegions( image, *((Ptr<cv::text::ERFilter>*)er_filter1_nativeObj), *((Ptr<cv::text::ERFilter>*)er_filter2_nativeObj), groups_rects, (int)method, n_filename, (float)minProbability );
        vector_Rect_to_Mat( groups_rects, groups_rects_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_opencv_text_Text_detectRegions_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_text_Text_detectRegions_11
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong er_filter1_nativeObj, jlong er_filter2_nativeObj, jlong groups_rects_mat_nativeObj)
{
    static const char method_name[] = "text::detectRegions_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> groups_rects;
        Mat& groups_rects_mat = *((Mat*)groups_rects_mat_nativeObj);
        Mat& image = *((Mat*)image_nativeObj);
        cv::text::detectRegions( image, *((Ptr<cv::text::ERFilter>*)er_filter1_nativeObj), *((Ptr<cv::text::ERFilter>*)er_filter2_nativeObj), groups_rects );
        vector_Rect_to_Mat( groups_rects, groups_rects_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void detectRegions(Mat image, Ptr_ERFilter er_filter1, Ptr_ERFilter er_filter2, vector_vector_Point& regions)
//



JNIEXPORT void JNICALL Java_org_opencv_text_Text_detectRegions_12 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_text_Text_detectRegions_12
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong er_filter1_nativeObj, jlong er_filter2_nativeObj, jlong regions_mat_nativeObj)
{
    static const char method_name[] = "text::detectRegions_12()";
    try {
        LOGD("%s", method_name);
        std::vector< std::vector<Point> > regions;
        Mat& regions_mat = *((Mat*)regions_mat_nativeObj);
        Mat& image = *((Mat*)image_nativeObj);
        cv::text::detectRegions( image, *((Ptr<cv::text::ERFilter>*)er_filter1_nativeObj), *((Ptr<cv::text::ERFilter>*)er_filter2_nativeObj), regions );
        vector_vector_Point_to_Mat( regions, regions_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
//  void erGrouping(Mat image, Mat channel, vector_vector_Point regions, vector_Rect& groups_rects, int method = ERGROUPING_ORIENTATION_HORIZ, String filename = String(), float minProbablity = (float)0.5)
//



JNIEXPORT void JNICALL Java_org_opencv_text_Text_erGrouping_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jint, jstring, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_text_Text_erGrouping_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong channel_nativeObj, jlong regions_mat_nativeObj, jlong groups_rects_mat_nativeObj, jint method, jstring filename, jfloat minProbablity)
{
    static const char method_name[] = "text::erGrouping_10()";
    try {
        LOGD("%s", method_name);
        std::vector< std::vector<Point> > regions;
        Mat& regions_mat = *((Mat*)regions_mat_nativeObj);
        Mat_to_vector_vector_Point( regions_mat, regions );
        std::vector<Rect> groups_rects;
        Mat& groups_rects_mat = *((Mat*)groups_rects_mat_nativeObj);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& channel = *((Mat*)channel_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        cv::text::erGrouping( image, channel, regions, groups_rects, (int)method, n_filename, (float)minProbablity );
        vector_Rect_to_Mat( groups_rects, groups_rects_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}





JNIEXPORT void JNICALL Java_org_opencv_text_Text_erGrouping_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_text_Text_erGrouping_11
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong channel_nativeObj, jlong regions_mat_nativeObj, jlong groups_rects_mat_nativeObj)
{
    static const char method_name[] = "text::erGrouping_11()";
    try {
        LOGD("%s", method_name);
        std::vector< std::vector<Point> > regions;
        Mat& regions_mat = *((Mat*)regions_mat_nativeObj);
        Mat_to_vector_vector_Point( regions_mat, regions );
        std::vector<Rect> groups_rects;
        Mat& groups_rects_mat = *((Mat*)groups_rects_mat_nativeObj);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& channel = *((Mat*)channel_nativeObj);
        cv::text::erGrouping( image, channel, regions, groups_rects );
        vector_Rect_to_Mat( groups_rects, groups_rects_mat );
        return;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return;
}



//
// static Ptr_OCRBeamSearchDecoder create(String filename, String vocabulary, Mat transition_probabilities_table, Mat emission_probabilities_table, int mode = OCR_DECODER_VITERBI, int beam_size = 500)
//

using namespace cv::text;

JNIEXPORT jlong JNICALL Java_org_opencv_text_OCRBeamSearchDecoder_create_10 (JNIEnv*, jclass, jstring, jstring, jlong, jlong, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_text_OCRBeamSearchDecoder_create_10
  (JNIEnv* env, jclass , jstring filename, jstring vocabulary, jlong transition_probabilities_table_nativeObj, jlong emission_probabilities_table_nativeObj, jint mode, jint beam_size)
{
    static const char method_name[] = "text::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::text::OCRBeamSearchDecoder> Ptr_OCRBeamSearchDecoder;
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        const char* utf_vocabulary = env->GetStringUTFChars(vocabulary, 0); String n_vocabulary( utf_vocabulary ? utf_vocabulary : "" ); env->ReleaseStringUTFChars(vocabulary, utf_vocabulary);
        Mat& transition_probabilities_table = *((Mat*)transition_probabilities_table_nativeObj);
        Mat& emission_probabilities_table = *((Mat*)emission_probabilities_table_nativeObj);
        Ptr_OCRBeamSearchDecoder _retval_ = cv::text::OCRBeamSearchDecoder::create( n_filename, n_vocabulary, transition_probabilities_table, emission_probabilities_table, (int)mode, (int)beam_size );
        return (jlong)(new Ptr_OCRBeamSearchDecoder(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::text;

JNIEXPORT jlong JNICALL Java_org_opencv_text_OCRBeamSearchDecoder_create_11 (JNIEnv*, jclass, jstring, jstring, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_text_OCRBeamSearchDecoder_create_11
  (JNIEnv* env, jclass , jstring filename, jstring vocabulary, jlong transition_probabilities_table_nativeObj, jlong emission_probabilities_table_nativeObj)
{
    static const char method_name[] = "text::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::text::OCRBeamSearchDecoder> Ptr_OCRBeamSearchDecoder;
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        const char* utf_vocabulary = env->GetStringUTFChars(vocabulary, 0); String n_vocabulary( utf_vocabulary ? utf_vocabulary : "" ); env->ReleaseStringUTFChars(vocabulary, utf_vocabulary);
        Mat& transition_probabilities_table = *((Mat*)transition_probabilities_table_nativeObj);
        Mat& emission_probabilities_table = *((Mat*)emission_probabilities_table_nativeObj);
        Ptr_OCRBeamSearchDecoder _retval_ = cv::text::OCRBeamSearchDecoder::create( n_filename, n_vocabulary, transition_probabilities_table, emission_probabilities_table );
        return (jlong)(new Ptr_OCRBeamSearchDecoder(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  String run(Mat image, Mat mask, int min_confidence, int component_level = 0)
//

using namespace cv::text;

JNIEXPORT jstring JNICALL Java_org_opencv_text_OCRBeamSearchDecoder_run_10 (JNIEnv*, jclass, jlong, jlong, jlong, jint, jint);

JNIEXPORT jstring JNICALL Java_org_opencv_text_OCRBeamSearchDecoder_run_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong mask_nativeObj, jint min_confidence, jint component_level)
{
    static const char method_name[] = "text::run_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::text::OCRBeamSearchDecoder>* me = (Ptr<cv::text::OCRBeamSearchDecoder>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        cv::String _retval_ = (*me)->run( image, mask, (int)min_confidence, (int)component_level );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



using namespace cv::text;

JNIEXPORT jstring JNICALL Java_org_opencv_text_OCRBeamSearchDecoder_run_11 (JNIEnv*, jclass, jlong, jlong, jlong, jint);

JNIEXPORT jstring JNICALL Java_org_opencv_text_OCRBeamSearchDecoder_run_11
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong mask_nativeObj, jint min_confidence)
{
    static const char method_name[] = "text::run_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::text::OCRBeamSearchDecoder>* me = (Ptr<cv::text::OCRBeamSearchDecoder>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        cv::String _retval_ = (*me)->run( image, mask, (int)min_confidence );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
//  String run(Mat image, int min_confidence, int component_level = 0)
//

using namespace cv::text;

JNIEXPORT jstring JNICALL Java_org_opencv_text_OCRBeamSearchDecoder_run_12 (JNIEnv*, jclass, jlong, jlong, jint, jint);

JNIEXPORT jstring JNICALL Java_org_opencv_text_OCRBeamSearchDecoder_run_12
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jint min_confidence, jint component_level)
{
    static const char method_name[] = "text::run_12()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::text::OCRBeamSearchDecoder>* me = (Ptr<cv::text::OCRBeamSearchDecoder>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        cv::String _retval_ = (*me)->run( image, (int)min_confidence, (int)component_level );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



using namespace cv::text;

JNIEXPORT jstring JNICALL Java_org_opencv_text_OCRBeamSearchDecoder_run_13 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT jstring JNICALL Java_org_opencv_text_OCRBeamSearchDecoder_run_13
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jint min_confidence)
{
    static const char method_name[] = "text::run_13()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::text::OCRBeamSearchDecoder>* me = (Ptr<cv::text::OCRBeamSearchDecoder>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        cv::String _retval_ = (*me)->run( image, (int)min_confidence );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
//  native support for java finalize()
//  static void Ptr<cv::text::OCRBeamSearchDecoder>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_text_OCRBeamSearchDecoder_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_text_OCRBeamSearchDecoder_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::text::OCRBeamSearchDecoder>*) self;
}


//
//  native support for java finalize()
//  static void cv::text::ERFilter::Callback::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_text_Callback_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_text_Callback_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::text::ERFilter::Callback*) self;
}


//
//  void detect(Mat inputImage, vector_Rect& Bbox, vector_float& confidence)
//

using namespace cv::text;

JNIEXPORT void JNICALL Java_org_opencv_text_TextDetector_detect_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_text_TextDetector_detect_10
  (JNIEnv* env, jclass , jlong self, jlong inputImage_nativeObj, jlong Bbox_mat_nativeObj, jlong confidence_mat_nativeObj)
{
    static const char method_name[] = "text::detect_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> Bbox;
        Mat& Bbox_mat = *((Mat*)Bbox_mat_nativeObj);
        std::vector<float> confidence;
        Mat& confidence_mat = *((Mat*)confidence_mat_nativeObj);
        cv::text::TextDetector* me = (cv::text::TextDetector*) self; //TODO: check for NULL
        Mat& inputImage = *((Mat*)inputImage_nativeObj);
        me->detect( inputImage, Bbox, confidence );
        vector_Rect_to_Mat( Bbox, Bbox_mat );  vector_float_to_Mat( confidence, confidence_mat );
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
//  static void cv::text::TextDetector::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_text_TextDetector_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_text_TextDetector_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::text::TextDetector*) self;
}


//
// static Ptr_OCRTesseract create(c_string datapath = 0, c_string language = 0, c_string char_whitelist = 0, int oem = OEM_DEFAULT, int psmode = PSM_AUTO)
//

using namespace cv::text;

JNIEXPORT jlong JNICALL Java_org_opencv_text_OCRTesseract_create_10 (JNIEnv*, jclass, jstring, jstring, jstring, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_text_OCRTesseract_create_10
  (JNIEnv* env, jclass , jstring datapath, jstring language, jstring char_whitelist, jint oem, jint psmode)
{
    static const char method_name[] = "text::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::text::OCRTesseract> Ptr_OCRTesseract;
        const char* utf_datapath = env->GetStringUTFChars(datapath, 0); String n_datapath( utf_datapath ? utf_datapath : "" ); env->ReleaseStringUTFChars(datapath, utf_datapath);
        const char* utf_language = env->GetStringUTFChars(language, 0); String n_language( utf_language ? utf_language : "" ); env->ReleaseStringUTFChars(language, utf_language);
        const char* utf_char_whitelist = env->GetStringUTFChars(char_whitelist, 0); String n_char_whitelist( utf_char_whitelist ? utf_char_whitelist : "" ); env->ReleaseStringUTFChars(char_whitelist, utf_char_whitelist);
        Ptr_OCRTesseract _retval_ = cv::text::OCRTesseract::create( n_datapath.c_str(), n_language.c_str(), n_char_whitelist.c_str(), (int)oem, (int)psmode );
        return (jlong)(new Ptr_OCRTesseract(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::text;

JNIEXPORT jlong JNICALL Java_org_opencv_text_OCRTesseract_create_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_text_OCRTesseract_create_11
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "text::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::text::OCRTesseract> Ptr_OCRTesseract;
        Ptr_OCRTesseract _retval_ = cv::text::OCRTesseract::create(  );
        return (jlong)(new Ptr_OCRTesseract(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  String run(Mat image, Mat mask, int min_confidence, int component_level = 0)
//

using namespace cv::text;

JNIEXPORT jstring JNICALL Java_org_opencv_text_OCRTesseract_run_10 (JNIEnv*, jclass, jlong, jlong, jlong, jint, jint);

JNIEXPORT jstring JNICALL Java_org_opencv_text_OCRTesseract_run_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong mask_nativeObj, jint min_confidence, jint component_level)
{
    static const char method_name[] = "text::run_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::text::OCRTesseract>* me = (Ptr<cv::text::OCRTesseract>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        cv::String _retval_ = (*me)->run( image, mask, (int)min_confidence, (int)component_level );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



using namespace cv::text;

JNIEXPORT jstring JNICALL Java_org_opencv_text_OCRTesseract_run_11 (JNIEnv*, jclass, jlong, jlong, jlong, jint);

JNIEXPORT jstring JNICALL Java_org_opencv_text_OCRTesseract_run_11
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong mask_nativeObj, jint min_confidence)
{
    static const char method_name[] = "text::run_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::text::OCRTesseract>* me = (Ptr<cv::text::OCRTesseract>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        cv::String _retval_ = (*me)->run( image, mask, (int)min_confidence );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
//  String run(Mat image, int min_confidence, int component_level = 0)
//

using namespace cv::text;

JNIEXPORT jstring JNICALL Java_org_opencv_text_OCRTesseract_run_12 (JNIEnv*, jclass, jlong, jlong, jint, jint);

JNIEXPORT jstring JNICALL Java_org_opencv_text_OCRTesseract_run_12
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jint min_confidence, jint component_level)
{
    static const char method_name[] = "text::run_12()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::text::OCRTesseract>* me = (Ptr<cv::text::OCRTesseract>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        cv::String _retval_ = (*me)->run( image, (int)min_confidence, (int)component_level );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



using namespace cv::text;

JNIEXPORT jstring JNICALL Java_org_opencv_text_OCRTesseract_run_13 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT jstring JNICALL Java_org_opencv_text_OCRTesseract_run_13
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jint min_confidence)
{
    static const char method_name[] = "text::run_13()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::text::OCRTesseract>* me = (Ptr<cv::text::OCRTesseract>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        cv::String _retval_ = (*me)->run( image, (int)min_confidence );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
//  void setWhiteList(String char_whitelist)
//

using namespace cv::text;

JNIEXPORT void JNICALL Java_org_opencv_text_OCRTesseract_setWhiteList_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_text_OCRTesseract_setWhiteList_10
  (JNIEnv* env, jclass , jlong self, jstring char_whitelist)
{
    static const char method_name[] = "text::setWhiteList_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::text::OCRTesseract>* me = (Ptr<cv::text::OCRTesseract>*) self; //TODO: check for NULL
        const char* utf_char_whitelist = env->GetStringUTFChars(char_whitelist, 0); String n_char_whitelist( utf_char_whitelist ? utf_char_whitelist : "" ); env->ReleaseStringUTFChars(char_whitelist, utf_char_whitelist);
        (*me)->setWhiteList( n_char_whitelist );
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
//  static void Ptr<cv::text::OCRTesseract>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_text_OCRTesseract_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_text_OCRTesseract_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::text::OCRTesseract>*) self;
}


//
// static Ptr_OCRHMMDecoder create(String filename, String vocabulary, Mat transition_probabilities_table, Mat emission_probabilities_table, int mode = OCR_DECODER_VITERBI, int classifier = OCR_KNN_CLASSIFIER)
//

using namespace cv::text;

JNIEXPORT jlong JNICALL Java_org_opencv_text_OCRHMMDecoder_create_10 (JNIEnv*, jclass, jstring, jstring, jlong, jlong, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_text_OCRHMMDecoder_create_10
  (JNIEnv* env, jclass , jstring filename, jstring vocabulary, jlong transition_probabilities_table_nativeObj, jlong emission_probabilities_table_nativeObj, jint mode, jint classifier)
{
    static const char method_name[] = "text::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::text::OCRHMMDecoder> Ptr_OCRHMMDecoder;
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        const char* utf_vocabulary = env->GetStringUTFChars(vocabulary, 0); String n_vocabulary( utf_vocabulary ? utf_vocabulary : "" ); env->ReleaseStringUTFChars(vocabulary, utf_vocabulary);
        Mat& transition_probabilities_table = *((Mat*)transition_probabilities_table_nativeObj);
        Mat& emission_probabilities_table = *((Mat*)emission_probabilities_table_nativeObj);
        Ptr_OCRHMMDecoder _retval_ = cv::text::OCRHMMDecoder::create( n_filename, n_vocabulary, transition_probabilities_table, emission_probabilities_table, (int)mode, (int)classifier );
        return (jlong)(new Ptr_OCRHMMDecoder(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



using namespace cv::text;

JNIEXPORT jlong JNICALL Java_org_opencv_text_OCRHMMDecoder_create_11 (JNIEnv*, jclass, jstring, jstring, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_text_OCRHMMDecoder_create_11
  (JNIEnv* env, jclass , jstring filename, jstring vocabulary, jlong transition_probabilities_table_nativeObj, jlong emission_probabilities_table_nativeObj)
{
    static const char method_name[] = "text::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::text::OCRHMMDecoder> Ptr_OCRHMMDecoder;
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        const char* utf_vocabulary = env->GetStringUTFChars(vocabulary, 0); String n_vocabulary( utf_vocabulary ? utf_vocabulary : "" ); env->ReleaseStringUTFChars(vocabulary, utf_vocabulary);
        Mat& transition_probabilities_table = *((Mat*)transition_probabilities_table_nativeObj);
        Mat& emission_probabilities_table = *((Mat*)emission_probabilities_table_nativeObj);
        Ptr_OCRHMMDecoder _retval_ = cv::text::OCRHMMDecoder::create( n_filename, n_vocabulary, transition_probabilities_table, emission_probabilities_table );
        return (jlong)(new Ptr_OCRHMMDecoder(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  String run(Mat image, Mat mask, int min_confidence, int component_level = 0)
//

using namespace cv::text;

JNIEXPORT jstring JNICALL Java_org_opencv_text_OCRHMMDecoder_run_10 (JNIEnv*, jclass, jlong, jlong, jlong, jint, jint);

JNIEXPORT jstring JNICALL Java_org_opencv_text_OCRHMMDecoder_run_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong mask_nativeObj, jint min_confidence, jint component_level)
{
    static const char method_name[] = "text::run_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::text::OCRHMMDecoder>* me = (Ptr<cv::text::OCRHMMDecoder>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        cv::String _retval_ = (*me)->run( image, mask, (int)min_confidence, (int)component_level );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



using namespace cv::text;

JNIEXPORT jstring JNICALL Java_org_opencv_text_OCRHMMDecoder_run_11 (JNIEnv*, jclass, jlong, jlong, jlong, jint);

JNIEXPORT jstring JNICALL Java_org_opencv_text_OCRHMMDecoder_run_11
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong mask_nativeObj, jint min_confidence)
{
    static const char method_name[] = "text::run_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::text::OCRHMMDecoder>* me = (Ptr<cv::text::OCRHMMDecoder>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        cv::String _retval_ = (*me)->run( image, mask, (int)min_confidence );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
//  String run(Mat image, int min_confidence, int component_level = 0)
//

using namespace cv::text;

JNIEXPORT jstring JNICALL Java_org_opencv_text_OCRHMMDecoder_run_12 (JNIEnv*, jclass, jlong, jlong, jint, jint);

JNIEXPORT jstring JNICALL Java_org_opencv_text_OCRHMMDecoder_run_12
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jint min_confidence, jint component_level)
{
    static const char method_name[] = "text::run_12()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::text::OCRHMMDecoder>* me = (Ptr<cv::text::OCRHMMDecoder>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        cv::String _retval_ = (*me)->run( image, (int)min_confidence, (int)component_level );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



using namespace cv::text;

JNIEXPORT jstring JNICALL Java_org_opencv_text_OCRHMMDecoder_run_13 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT jstring JNICALL Java_org_opencv_text_OCRHMMDecoder_run_13
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jint min_confidence)
{
    static const char method_name[] = "text::run_13()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::text::OCRHMMDecoder>* me = (Ptr<cv::text::OCRHMMDecoder>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        cv::String _retval_ = (*me)->run( image, (int)min_confidence );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
//  native support for java finalize()
//  static void Ptr<cv::text::OCRHMMDecoder>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_text_OCRHMMDecoder_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_text_OCRHMMDecoder_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::text::OCRHMMDecoder>*) self;
}


//
// static Ptr_TextDetectorCNN create(String modelArchFilename, String modelWeightsFilename)
//

using namespace cv::text;

JNIEXPORT jlong JNICALL Java_org_opencv_text_TextDetectorCNN_create_10 (JNIEnv*, jclass, jstring, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_text_TextDetectorCNN_create_10
  (JNIEnv* env, jclass , jstring modelArchFilename, jstring modelWeightsFilename)
{
    static const char method_name[] = "text::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::text::TextDetectorCNN> Ptr_TextDetectorCNN;
        const char* utf_modelArchFilename = env->GetStringUTFChars(modelArchFilename, 0); String n_modelArchFilename( utf_modelArchFilename ? utf_modelArchFilename : "" ); env->ReleaseStringUTFChars(modelArchFilename, utf_modelArchFilename);
        const char* utf_modelWeightsFilename = env->GetStringUTFChars(modelWeightsFilename, 0); String n_modelWeightsFilename( utf_modelWeightsFilename ? utf_modelWeightsFilename : "" ); env->ReleaseStringUTFChars(modelWeightsFilename, utf_modelWeightsFilename);
        Ptr_TextDetectorCNN _retval_ = cv::text::TextDetectorCNN::create( n_modelArchFilename, n_modelWeightsFilename );
        return (jlong)(new Ptr_TextDetectorCNN(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void detect(Mat inputImage, vector_Rect& Bbox, vector_float& confidence)
//

using namespace cv::text;

JNIEXPORT void JNICALL Java_org_opencv_text_TextDetectorCNN_detect_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_text_TextDetectorCNN_detect_10
  (JNIEnv* env, jclass , jlong self, jlong inputImage_nativeObj, jlong Bbox_mat_nativeObj, jlong confidence_mat_nativeObj)
{
    static const char method_name[] = "text::detect_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> Bbox;
        Mat& Bbox_mat = *((Mat*)Bbox_mat_nativeObj);
        std::vector<float> confidence;
        Mat& confidence_mat = *((Mat*)confidence_mat_nativeObj);
        Ptr<cv::text::TextDetectorCNN>* me = (Ptr<cv::text::TextDetectorCNN>*) self; //TODO: check for NULL
        Mat& inputImage = *((Mat*)inputImage_nativeObj);
        (*me)->detect( inputImage, Bbox, confidence );
        vector_Rect_to_Mat( Bbox, Bbox_mat );  vector_float_to_Mat( confidence, confidence_mat );
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
//  static void Ptr<cv::text::TextDetectorCNN>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_text_TextDetectorCNN_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_text_TextDetectorCNN_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::text::TextDetectorCNN>*) self;
}



} // extern "C"

#endif // HAVE_OPENCV_TEXT
