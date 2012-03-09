/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class CAShapeLayer, CALayer;

@interface UIPDFMagnifiedView : UIView  {
    struct CGPoint { 
        float x; 
        float y; 
    } _position;
    struct CGSize { 
        float width; 
        float height; 
    } _imageSize;
    CALayer *_glassLayer;
    CAShapeLayer *_selectionLayer;
    CAShapeLayer *_leftBar;
    CALayer *_leftGrabber;
    struct CGSize { 
        float width; 
        float height; 
    } _controlPointSize;
    CAShapeLayer *_rightBar;
    CALayer *_rightGrabber;
    CALayer *_imageLayer;
    struct CGPoint { 
        float x; 
        float y; 
    } _touchPoint;
    unsigned int _pageRotation;
    struct CGImage { } *_image;
}

@property unsigned int pageRotation;
@property struct CGPoint { float x; float y; } touchPoint;
@property struct CGImage { }* image;


- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 loupe:(BOOL)arg2;
- (void)setTouchPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setGrabbersAt:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 and:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (unsigned int)pageRotation;
- (void)setPageRotation:(unsigned int)arg1;
- (struct CGPoint { float x1; float x2; })touchPoint;
- (void)createGrabbers;
- (void)setSelection:(struct CGPath { }*)arg1;
- (struct CGImage { }*)image;
- (void)setImage:(struct CGImage { }*)arg1;

@end