#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_kangear_mtm_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from JNI --->  C++";
    return env->NewStringUTF(hello.c_str());
}