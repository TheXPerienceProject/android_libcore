/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class sun_net_spi_DefaultProxySelector */

#ifndef _Included_sun_net_spi_DefaultProxySelector
#define _Included_sun_net_spi_DefaultProxySelector
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     sun_net_spi_DefaultProxySelector
 * Method:    init
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_sun_net_spi_DefaultProxySelector_init
  (JNIEnv *, jclass);

/*
 * Class:     sun_net_spi_DefaultProxySelector
 * Method:    getSystemProxy
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Ljava/net/Proxy;
 */
JNIEXPORT jobject JNICALL Java_sun_net_spi_DefaultProxySelector_getSystemProxy
  (JNIEnv *, jobject, jstring, jstring);

#ifdef __cplusplus
}
#endif
#endif
