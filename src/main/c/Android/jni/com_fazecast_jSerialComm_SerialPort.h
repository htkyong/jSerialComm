/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_fazecast_jSerialComm_SerialPort */

#ifndef _Included_com_fazecast_jSerialComm_SerialPort
#define _Included_com_fazecast_jSerialComm_SerialPort
#ifdef __cplusplus
extern "C" {
#endif
#undef com_fazecast_jSerialComm_SerialPort_NO_PARITY
#define com_fazecast_jSerialComm_SerialPort_NO_PARITY 0L
#undef com_fazecast_jSerialComm_SerialPort_ODD_PARITY
#define com_fazecast_jSerialComm_SerialPort_ODD_PARITY 1L
#undef com_fazecast_jSerialComm_SerialPort_EVEN_PARITY
#define com_fazecast_jSerialComm_SerialPort_EVEN_PARITY 2L
#undef com_fazecast_jSerialComm_SerialPort_MARK_PARITY
#define com_fazecast_jSerialComm_SerialPort_MARK_PARITY 3L
#undef com_fazecast_jSerialComm_SerialPort_SPACE_PARITY
#define com_fazecast_jSerialComm_SerialPort_SPACE_PARITY 4L
#undef com_fazecast_jSerialComm_SerialPort_ONE_STOP_BIT
#define com_fazecast_jSerialComm_SerialPort_ONE_STOP_BIT 1L
#undef com_fazecast_jSerialComm_SerialPort_ONE_POINT_FIVE_STOP_BITS
#define com_fazecast_jSerialComm_SerialPort_ONE_POINT_FIVE_STOP_BITS 2L
#undef com_fazecast_jSerialComm_SerialPort_TWO_STOP_BITS
#define com_fazecast_jSerialComm_SerialPort_TWO_STOP_BITS 3L
#undef com_fazecast_jSerialComm_SerialPort_FLOW_CONTROL_DISABLED
#define com_fazecast_jSerialComm_SerialPort_FLOW_CONTROL_DISABLED 0L
#undef com_fazecast_jSerialComm_SerialPort_FLOW_CONTROL_RTS_ENABLED
#define com_fazecast_jSerialComm_SerialPort_FLOW_CONTROL_RTS_ENABLED 1L
#undef com_fazecast_jSerialComm_SerialPort_FLOW_CONTROL_CTS_ENABLED
#define com_fazecast_jSerialComm_SerialPort_FLOW_CONTROL_CTS_ENABLED 16L
#undef com_fazecast_jSerialComm_SerialPort_FLOW_CONTROL_DSR_ENABLED
#define com_fazecast_jSerialComm_SerialPort_FLOW_CONTROL_DSR_ENABLED 256L
#undef com_fazecast_jSerialComm_SerialPort_FLOW_CONTROL_DTR_ENABLED
#define com_fazecast_jSerialComm_SerialPort_FLOW_CONTROL_DTR_ENABLED 4096L
#undef com_fazecast_jSerialComm_SerialPort_FLOW_CONTROL_XONXOFF_IN_ENABLED
#define com_fazecast_jSerialComm_SerialPort_FLOW_CONTROL_XONXOFF_IN_ENABLED 65536L
#undef com_fazecast_jSerialComm_SerialPort_FLOW_CONTROL_XONXOFF_OUT_ENABLED
#define com_fazecast_jSerialComm_SerialPort_FLOW_CONTROL_XONXOFF_OUT_ENABLED 1048576L
#undef com_fazecast_jSerialComm_SerialPort_TIMEOUT_NONBLOCKING
#define com_fazecast_jSerialComm_SerialPort_TIMEOUT_NONBLOCKING 0L
#undef com_fazecast_jSerialComm_SerialPort_TIMEOUT_READ_SEMI_BLOCKING
#define com_fazecast_jSerialComm_SerialPort_TIMEOUT_READ_SEMI_BLOCKING 1L
#undef com_fazecast_jSerialComm_SerialPort_TIMEOUT_WRITE_SEMI_BLOCKING
#define com_fazecast_jSerialComm_SerialPort_TIMEOUT_WRITE_SEMI_BLOCKING 16L
#undef com_fazecast_jSerialComm_SerialPort_TIMEOUT_READ_BLOCKING
#define com_fazecast_jSerialComm_SerialPort_TIMEOUT_READ_BLOCKING 256L
#undef com_fazecast_jSerialComm_SerialPort_TIMEOUT_WRITE_BLOCKING
#define com_fazecast_jSerialComm_SerialPort_TIMEOUT_WRITE_BLOCKING 4096L
#undef com_fazecast_jSerialComm_SerialPort_TIMEOUT_SCANNER
#define com_fazecast_jSerialComm_SerialPort_TIMEOUT_SCANNER 65536L
#undef com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_DATA_AVAILABLE
#define com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_DATA_AVAILABLE 1L
#undef com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_DATA_RECEIVED
#define com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_DATA_RECEIVED 16L
#undef com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_DATA_WRITTEN
#define com_fazecast_jSerialComm_SerialPort_LISTENING_EVENT_DATA_WRITTEN 256L
/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    getCommPorts
 * Signature: ()[Lcom/fazecast/jSerialComm/SerialPort;
 */
JNIEXPORT jobjectArray JNICALL Java_com_fazecast_jSerialComm_SerialPort_getCommPorts
  (JNIEnv *, jclass);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    initializeLibrary
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_fazecast_jSerialComm_SerialPort_initializeLibrary
  (JNIEnv *, jclass);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    uninitializeLibrary
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_fazecast_jSerialComm_SerialPort_uninitializeLibrary
  (JNIEnv *, jclass);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    openPortNative
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_fazecast_jSerialComm_SerialPort_openPortNative
  (JNIEnv *, jobject);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    associateNativeHandle
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_fazecast_jSerialComm_SerialPort_associateNativeHandle
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    closePortNative
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_fazecast_jSerialComm_SerialPort_closePortNative
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    configPort
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_fazecast_jSerialComm_SerialPort_configPort
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    configFlowControl
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_fazecast_jSerialComm_SerialPort_configFlowControl
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    configTimeouts
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_fazecast_jSerialComm_SerialPort_configTimeouts
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    configEventFlags
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_fazecast_jSerialComm_SerialPort_configEventFlags
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    waitForEvent
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_fazecast_jSerialComm_SerialPort_waitForEvent
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    bytesAvailable
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_fazecast_jSerialComm_SerialPort_bytesAvailable
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    readBytes
 * Signature: (J[BJ)I
 */
JNIEXPORT jint JNICALL Java_com_fazecast_jSerialComm_SerialPort_readBytes
  (JNIEnv *, jobject, jlong, jbyteArray, jlong);

/*
 * Class:     com_fazecast_jSerialComm_SerialPort
 * Method:    writeBytes
 * Signature: (J[BJ)I
 */
JNIEXPORT jint JNICALL Java_com_fazecast_jSerialComm_SerialPort_writeBytes
  (JNIEnv *, jobject, jlong, jbyteArray, jlong);

#ifdef __cplusplus
}
#endif
#endif
