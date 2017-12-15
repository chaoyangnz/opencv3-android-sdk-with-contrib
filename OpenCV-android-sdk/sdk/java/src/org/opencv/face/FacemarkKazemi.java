
//
// This file is auto-generated. Please don't modify it!
//
package org.opencv.face;

import org.opencv.core.Algorithm;

// C++: class FacemarkKazemi
//javadoc: FacemarkKazemi

public class FacemarkKazemi extends Algorithm {

    protected FacemarkKazemi(long addr) { super(addr); }


    @Override
    protected void finalize() throws Throwable {
        delete(nativeObj);
    }



    // native support for java finalize()
    private static native void delete(long nativeObj);

}
