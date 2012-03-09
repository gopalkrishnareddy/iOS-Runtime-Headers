/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLCameraButton, PLCameraOptionsButton, PLCameraToggleButton;

@interface PLCameraButtonBar : UIToolbar  {
    PLCameraOptionsButton *_optionsButton;
    PLCameraButton *_cameraButton;
    PLCameraToggleButton *_toggleButton;
    int _buttonBarStyle;
}

@property(retain) PLCameraOptionsButton * optionsButton;
@property(retain) PLCameraButton * cameraButton;
@property(retain) PLCameraToggleButton * toggleButton;
@property int buttonBarStyle;

+ (float)defaultHeight;
+ (id)backgroundImage;
+ (id)backgroundImageForButtonBarStyle:(int)arg1;

- (void)dealloc;
- (id)initInView:(id)arg1 withItems:(struct { int x1; int x2; id x3; id x4; float x5; int x6; SEL x7; id x8; }*)arg2 withCount:(int)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setButtonBarStyle:(int)arg1;
- (int)buttonBarStyle;
- (void)setToggleButton:(id)arg1;
- (id)toggleButton;
- (void)setCameraButton:(id)arg1;
- (id)cameraButton;
- (void)setOptionsButton:(id)arg1;
- (id)optionsButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 buttonBarStyle:(int)arg2;

@end