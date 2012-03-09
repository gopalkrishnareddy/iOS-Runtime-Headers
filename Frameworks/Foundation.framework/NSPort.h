/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPort : NSObject <NSCopying, NSCoding> {
}

+ (id)portWithMachPort:(unsigned int)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)port;

- (BOOL)sendBeforeDate:(id)arg1 msgid:(unsigned int)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned int)arg5;
- (Class)classForPortCoder;
- (unsigned int)reservedSpaceLength;
- (unsigned int)machPort;
- (BOOL)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned int)arg4;
- (id)initWithMachPort:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (Class)classForCoder;
- (BOOL)isValid;
- (void)invalidate;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;

@end