/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@class <CRCodeRedeemerControllerDelegate>, NSString;

@interface CRCodeRedeemerController : CRCameraReader <CRCameraReaderDelegate> {
    <CRCodeRedeemerControllerDelegate> *_delegate;
}

@property(copy) NSString * cameraMode;
@property int cameraPosition;
@property unsigned int captureCount;
@property(getter=isCaptureMode) BOOL captureMode;
@property(copy,readonly) NSString * debugDescription;
@property <CRCodeRedeemerControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property int exposureMode;
@property int focusMode;
@property(readonly) unsigned int hash;
@property double sessionTimeout;
@property BOOL showDiagnosticHUD;
@property(readonly) Class superclass;
@property int torchMode;
@property int whiteBalanceMode;

+ (id)findCodeInImage:(struct vImage_Buffer { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1 maxStage:(unsigned int)arg2 roi:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
+ (id)findCodeInImage:(struct vImage_Buffer { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1 maxStage:(unsigned int)arg2;
+ (unsigned int)isCRCodeRedeemerAvailable;

- (void).cxx_destruct;
- (void)cameraReader:(id)arg1 didFailWithError:(id)arg2;
- (void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2;
- (void)cameraReaderDidCancel:(id)arg1;
- (void)cameraReaderDidDisplayMessage:(id)arg1;
- (void)cameraReaderDidEnd:(id)arg1;
- (void)cameraReaderDidFindTarget:(id)arg1;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)showMessage:(id)arg1 color:(id)arg2 style:(unsigned int)arg3 duration:(double)arg4;

@end