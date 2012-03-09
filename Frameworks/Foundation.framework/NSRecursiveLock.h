/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSRecursiveLock : NSObject <NSLocking> {
    void *_priv;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (BOOL)isLocking;
- (BOOL)lockBeforeDate:(id)arg1;
- (void)setName:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)finalize;
- (void)unlock;
- (void)lock;
- (id)name;
- (BOOL)tryLock;

@end