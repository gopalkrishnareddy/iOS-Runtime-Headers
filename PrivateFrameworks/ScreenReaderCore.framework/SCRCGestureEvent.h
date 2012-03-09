/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@class SCRCGestureFinger;

@interface SCRCGestureEvent : NSObject  {
    unsigned int _deviceIdentifier;
    SCRCGestureFinger *_finger[5];
    unsigned int _fingerCount;
    double _time;
    struct CGPoint { 
        float x; 
        float y; 
    } _averageLocation;
}


- (id)description;
- (void)dealloc;
- (double)time;
- (void)addFingerWithIdentifier:(unsigned int)arg1 location:(struct CGPoint { float x1; float x2; })arg2;
- (void)removeFingerWithIdentifier:(unsigned int)arg1;
- (unsigned int)fingerCount;
- (id)fingerAtIndex:(unsigned int)arg1;
- (id)fingerWithIdentifier:(unsigned int)arg1;
- (id)fingerWithoutIdentifier:(unsigned int)arg1;
- (id)fingers;
- (struct CGPoint { float x1; float x2; })averageLocation;
- (struct CGPoint { float x1; float x2; })balancedLocation;
- (BOOL)isCancelEvent;
- (struct CGPoint { float x1; float x2; })magneticLocation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fingerFrame;
- (unsigned int)deviceIdentifier;
- (id)initWithDeviceIdentifier:(unsigned int)arg1;

@end