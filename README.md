# OpenCV 3.3.1 Android SDK with contrib modules

The official build doesn't provide contrib modules. This build includes all the `opencv-contrib` modules.

## Download

Go to `./OpenCV-android-sdk`, just like the offical SDK, all are there including contrib modules.

~~For someone who are curious about the generated JNI code, go to `./o4a` or other build intermediate directories.~~

## How to build yourself

Please refer to https://chao.yang.to/post/build-opencv-android-sdk/

# How to Use in your Android project

## import into existing project

- In Android Studio, `File -> New -> Import Module..`, select `OpenCV-android-sdk/sdk/java`, then a new library module will be imported.

- Copy the pre-compiled libs in `OpenCV-android-sdk/sdk/native/libs` into `jniLibs` of your Android studio module.

## Avoid installing `OpenCV Manager`

If you don't want to install `OpenCV Manager`, you need to embed openCV library into your App.

New a subclass of `android.app.Application` class, in this class, put this line:

```java
static {
    if (!OpenCVLoader.initDebug()) {
        Log.e(TAG, "Cannot load OpenCV library");
    }
}
```

Don't use `OpenCVLoader.initAsync(..)`. That's it.

## Filter out specific CPU architecture

If you want to keep your release App slim and only support some architectures, add this line into your module's `build.gradle`:

```
externalNativeBuild {
    cmake {
        abiFilters 'armeabi-v7a', 'arm64-v8a' //'x86', 'x86_64', 'armeabi', 'armeabi-v7a', 'arm64-v8a', 'mips', 'mips64'
    }
}
```

# The last

Thanks to OpenCV, recently I developed an App sucessfully.

![](https://i.imgur.com/dmIdwxb.gif)
