
//
// This file is auto-generated. Please don't modify it!
//
package org.opencv.face;



// C++: class FacemarkLBF
//javadoc: FacemarkLBF

public class FacemarkLBF extends Facemark {

    protected FacemarkLBF(long addr) { super(addr); }


    @Override
    protected void finalize() throws Throwable {
        delete(nativeObj);
    }



    // native support for java finalize()
    private static native void delete(long nativeObj);

}
