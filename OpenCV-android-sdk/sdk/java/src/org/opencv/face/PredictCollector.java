
//
// This file is auto-generated. Please don't modify it!
//
package org.opencv.face;



// C++: class PredictCollector
//javadoc: PredictCollector

public class PredictCollector {

    protected final long nativeObj;
    protected PredictCollector(long addr) { nativeObj = addr; }

    public long getNativeObjAddr() { return nativeObj; }

    @Override
    protected void finalize() throws Throwable {
        delete(nativeObj);
    }



    // native support for java finalize()
    private static native void delete(long nativeObj);

}
