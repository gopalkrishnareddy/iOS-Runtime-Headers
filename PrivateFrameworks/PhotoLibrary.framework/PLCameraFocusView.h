/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class CAKeyframeAnimation, NSArray;

@interface PLCameraFocusView : UIView  {
    NSArray *_images;
    CAKeyframeAnimation *_contentsAnimation;
    CAKeyframeAnimation *_boundsAnimation;
    double _animationStartTime;
    BOOL _fadingOut;
}


- (id)init;
- (void)dealloc;
- (void)_fadeOut;
- (void)startAnimating;
- (void)stopAnimating;
- (void)focusDidEnd;
- (void)scaleFrame:(float)arg1 reposition:(BOOL)arg2;
- (void)_fadeOutDidFinish;
- (double)fadeOutDuration;
- (double)fadeInDuration;
- (id)_createBoundsAnimation;
- (id)_createContentsAnimation;
- (id)nameForDarkImage;
- (id)nameForLightImage;
- (void)_loadImagesWithImageSize:(struct CGSize { float x1; float x2; }*)arg1;

@end