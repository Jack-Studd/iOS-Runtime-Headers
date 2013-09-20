/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSUPointerKeyDictionary;

@interface TSDImageProviderPool : NSObject <TSPDataCullingListener> {
    TSUPointerKeyDictionary *mImageDataToImageProviderMap;
    unsigned int mOpenFileDescriptorLimit;
}

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)isValidImageData:(id)arg1;
+ (Class)p_providerClassForData:(id)arg1;
+ (id)sharedPool;

- (void)addInterestInProviderForData:(id)arg1;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)flushImageProviders;
- (id)init;
- (void)p_didReceiveMemoryWarning:(id)arg1;
- (id)p_providerForData:(id)arg1 temporary:(BOOL)arg2 shouldValidate:(BOOL)arg3;
- (void)p_updateFileDescriptorLimit;
- (id)providerForData:(id)arg1 shouldValidate:(BOOL)arg2;
- (oneway void)release;
- (void)removeInterestInProviderForData:(id)arg1;
- (id)retain;
- (unsigned int)retainCount;
- (id)temporaryProviderForData:(id)arg1 shouldValidate:(BOOL)arg2;
- (void)willCloseDocumentContext:(id)arg1;
- (void)willCullData:(id)arg1;

@end