/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUMachTaskContainer : NSObject  {
    int _pid;
    unsigned int _task;
}

+ (id)machTaskContainerWithTask:(unsigned int)arg1;
+ (id)machTaskContainerWithPid:(int)arg1;
+ (id)machTaskContainerWithPid:(int)arg1 task:(unsigned int)arg2;
+ (id)machTaskContainer;

- (id)description;
- (void)dealloc;
- (int)pid;
- (id)initWithPid:(int)arg1 task:(unsigned int)arg2;
- (unsigned int)task;
- (void)finalize;

@end