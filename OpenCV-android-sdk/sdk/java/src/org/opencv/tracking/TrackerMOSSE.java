
//
// This file is auto-generated. Please don't modify it!
//
package org.opencv.tracking;



// C++: class TrackerMOSSE
//javadoc: TrackerMOSSE

public class TrackerMOSSE extends Tracker {

    protected TrackerMOSSE(long addr) { super(addr); }


    //
    // C++: static Ptr_TrackerMOSSE create()
    //

    //javadoc: TrackerMOSSE::create()
    public static TrackerMOSSE create()
    {
        
        TrackerMOSSE retVal = new TrackerMOSSE(create_0());
        
        return retVal;
    }


    @Override
    protected void finalize() throws Throwable {
        delete(nativeObj);
    }



    // C++: static Ptr_TrackerMOSSE create()
    private static native long create_0();

    // native support for java finalize()
    private static native void delete(long nativeObj);

}
