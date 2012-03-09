/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@interface WebCache : NSObject  {
}

+ (BOOL)isDisabled;
+ (id)statistics;
+ (void)emptyInMemoryResources;
+ (void)sizeOfDeadResources:(int*)arg1;
+ (void)clearCachedCredentials;
+ (void)setDisabled:(BOOL)arg1;
+ (void)initialize;
+ (bool)addImageToCache:(struct CGImage { }*)arg1 forURL:(id)arg2;
+ (void)removeImageFromCacheForURL:(id)arg1;
+ (void)empty;


@end