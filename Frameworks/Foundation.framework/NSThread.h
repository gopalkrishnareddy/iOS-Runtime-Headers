/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSThread : NSObject  {
    id _private;
    unsigned char _bytes[44];
}

+ (void)exit;
+ (void)sleepForTimeInterval:(double)arg1;
+ (BOOL)isMultiThreaded;
+ (id)mainThread;
+ (BOOL)isDying;
+ (BOOL)setThreadPriority:(double)arg1;
+ (double)threadPriority;
+ (id)callStackReturnAddresses;
+ (void)sleepUntilDate:(id)arg1;
+ (void)detachNewThreadSelector:(SEL)arg1 toTarget:(id)arg2 withObject:(id)arg3;
+ (BOOL)isMainThread;
+ (id)currentThread;
+ (id)callStackSymbols;
+ (void)_im_runBlock:(id)arg1;
+ (void)_mapkit_runThread:(id)arg1;
+ (id)_mapkit_networkIOThread;
+ (id)stackBacktrace;

- (void)_nq:(id)arg1;
- (unsigned int)stackSize;
- (void)setStackSize:(unsigned int)arg1;
- (id)runLoop;
- (BOOL)isDying;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)setThreadPriority:(double)arg1;
- (double)threadPriority;
- (void)setName:(id)arg1;
- (id)description;
- (void)main;
- (void)cancel;
- (BOOL)isCancelled;
- (id)init;
- (void)dealloc;
- (BOOL)isFinished;
- (BOOL)isMainThread;
- (void)start;
- (id)threadDictionary;
- (id)name;
- (BOOL)isExecuting;
- (void)__im_performBlock:(id)arg1 waitUntilDone:(BOOL)arg2;
- (void)__im_performBlock:(id)arg1;
- (void)registerForStopNotification;
- (void)unregisterForStopNotification;
- (BOOL)shouldStop;

@end