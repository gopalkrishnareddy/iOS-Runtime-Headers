/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIImage;

@interface MPMediaItemArtwork : NSObject  {
    struct MPMediaItemArtworkInternal { 
        UIImage *image; 
    } _internal;
}

@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } imageCropRect;
@property struct MPMediaItemArtworkInternal { id x1; } _internal;


- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageCropRect;
- (id)albumImageDataWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)albumImageWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)coverFlowImageWithSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)hasArtworkAvailable;
- (id)imageDataWithSize:(struct CGSize { float x1; float x2; })arg1 atPlaybackTime:(double)arg2;
- (id)imageWithSize:(struct CGSize { float x1; float x2; })arg1 atPlaybackTime:(double)arg2;
- (void)set_internal:(struct MPMediaItemArtworkInternal { id x1; })arg1;
- (struct MPMediaItemArtworkInternal { id x1; })_internal;
- (id)initWithImage:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (id)imageWithSize:(struct CGSize { float x1; float x2; })arg1;

@end