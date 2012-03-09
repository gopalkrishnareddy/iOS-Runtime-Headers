/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
 */

@class UILabel;

@interface STTwoPartLabel : UIView  {
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
}

@property(readonly) UILabel * primaryLabel;
@property(readonly) UILabel * secondaryLabel;

+ (BOOL)shouldFlipLabels;
+ (id)defaultTextForSecondaryLabel;
+ (id)defaultTextForPrimaryLabel;
+ (id)defaultFormatForSecondaryLabel;

- (id)primaryLabel;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 primaryFont:(id)arg2 secondaryFont:(id)arg3 inset:(struct CGSize { float x1; float x2; })arg4;
- (id)secondaryLabel;

@end