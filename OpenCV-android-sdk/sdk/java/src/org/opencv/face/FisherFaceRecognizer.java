
//
// This file is auto-generated. Please don't modify it!
//
package org.opencv.face;



// C++: class FisherFaceRecognizer
//javadoc: FisherFaceRecognizer

public class FisherFaceRecognizer extends BasicFaceRecognizer {

    protected FisherFaceRecognizer(long addr) { super(addr); }


    //
    // C++: static Ptr_FisherFaceRecognizer create(int num_components = 0, double threshold = DBL_MAX)
    //

    //javadoc: FisherFaceRecognizer::create(num_components, threshold)
    public static FisherFaceRecognizer create(int num_components, double threshold)
    {
        
        FisherFaceRecognizer retVal = new FisherFaceRecognizer(create_0(num_components, threshold));
        
        return retVal;
    }

    //javadoc: FisherFaceRecognizer::create()
    public static FisherFaceRecognizer create()
    {
        
        FisherFaceRecognizer retVal = new FisherFaceRecognizer(create_1());
        
        return retVal;
    }


    @Override
    protected void finalize() throws Throwable {
        delete(nativeObj);
    }



    // C++: static Ptr_FisherFaceRecognizer create(int num_components = 0, double threshold = DBL_MAX)
    private static native long create_0(int num_components, double threshold);
    private static native long create_1();

    // native support for java finalize()
    private static native void delete(long nativeObj);

}
