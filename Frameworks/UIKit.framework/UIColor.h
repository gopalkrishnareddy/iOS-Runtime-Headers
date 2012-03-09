/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class CIColor, NSString;

@interface UIColor : NSObject <NSCoding> {
    NSString *_systemColorName;
}

@property(readonly) struct CGColor { }* CGColor;
@property(readonly) CIColor * CIColor;
@property(getter=_systemColorName,setter=_setSystemColorName:,retain) NSString * systemColorName;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)_translucentPaperTextureColor;
+ (id)noContentDarkGradientBackgroundColor;
+ (id)noContentLightGradientBackgroundColor;
+ (id)scrollViewTexturedBackgroundColor;
+ (id)underPageBackgroundColor;
+ (id)viewFlipsideBackgroundColor;
+ (id)darkTextColor;
+ (id)lightTextColor;
+ (id)tableCellGrayTextColor;
+ (id)tableCellValue2BlueColor;
+ (id)tableCellValue1BlueColor;
+ (id)sectionHeaderBorderColor;
+ (id)sectionHeaderOpaqueBackgroundColor;
+ (id)sectionHeaderBackgroundColor;
+ (id)sectionListBorderColor;
+ (id)tableGroupedTopShadowColor;
+ (id)tableShadowColor;
+ (id)tableSelectionGradientEndColor;
+ (id)tableSelectionGradientStartColor;
+ (id)tableSelectionColor;
+ (id)tableCellGroupedBackgroundColor;
+ (id)tableCellPlainBackgroundColor;
+ (id)_systemColorForColor:(id)arg1 withName:(id)arg2;
+ (id)colorWithCIColor:(id)arg1;
+ (id)colorWithPatternImage:(id)arg1;
+ (id)colorWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4;
+ (id)tableCellGroupedBackgroundColorLegacyWhite;
+ (id)infoTextOverPinStripeTextColor;
+ (id)tableCellBlueTextColor;
+ (id)pinStripeColor;
+ (id)textFieldAtomPurpleColor;
+ (id)textFieldAtomBlueColor;
+ (id)selectionHighlightColor;
+ (id)insertionPointColor;
+ (id)tableSeparatorDarkColor;
+ (id)tableGroupedSeparatorLightColor;
+ (id)groupTableViewBackgroundColor;
+ (id)tableSeparatorLightColor;
+ (id)tableBackgroundColor;
+ (id)_systemColorWithName:(id)arg1;
+ (id)colorWithCGColor:(struct CGColor { }*)arg1;
+ (void)initialize;
+ (id)colorWithWhite:(float)arg1 alpha:(float)arg2;
+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)clearColor;
+ (id)brownColor;
+ (id)purpleColor;
+ (id)orangeColor;
+ (id)yellowColor;
+ (id)magentaColor;
+ (id)cyanColor;
+ (id)blueColor;
+ (id)greenColor;
+ (id)redColor;
+ (id)darkGrayColor;
+ (id)lightGrayColor;
+ (id)grayColor;
+ (id)whiteColor;
+ (id)blackColor;
+ (id)padFaceTimeShadowedGroupBackgroundColor;
+ (id)padFaceTimeSectionOutlineColor;
+ (id)padFaceTimeDarkSeparatorColor;
+ (id)padFaceTimeLightSeparatorColor;
+ (id)padFaceTimeBabyBlueColor;
+ (id)padFaceTimeLightBabyBlueColor;
+ (id)padFaceTimeShadowedGroupBackgroundColor;
+ (id)padFaceTimeSectionOutlineColor;
+ (id)padFaceTimeDarkSeparatorColor;
+ (id)padFaceTimeLightSeparatorColor;
+ (id)padFaceTimeBabyBlueColor;
+ (id)padFaceTimeLightBabyBlueColor;
+ (id)padFaceTimeShadowedGroupBackgroundColor;
+ (id)padFaceTimeSectionOutlineColor;
+ (id)padFaceTimeDarkSeparatorColor;
+ (id)padFaceTimeLightSeparatorColor;
+ (id)padFaceTimeBabyBlueColor;
+ (id)padFaceTimeLightBabyBlueColor;
+ (id)_mapkit_userLocationAccuracyRingFillColor;
+ (id)_mapkit_userLocationAccuracyRingStrokeColor;
+ (id)tileGridBackgroundColor;
+ (id)tileBackgroundColor;
+ (id)_gkColorFromRGBAHexString:(id)arg1;
+ (id)colorWithStyleString:(id)arg1;
+ (id)texturedTranscriptBackgroundColor;
+ (id)_remoteUI_colorWithString:(id)arg1;
+ (id)_iAd_colorWithRGBA:(unsigned int)arg1;
+ (id)disabledTextColor;

- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (void)_setSystemColorName:(id)arg1;
- (id)initWithPatternImage:(id)arg1;
- (id)CIColor;
- (id)initWithCIColor:(id)arg1;
- (BOOL)getHue:(float*)arg1 saturation:(float*)arg2 brightness:(float*)arg3 alpha:(float*)arg4;
- (id)initWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4;
- (BOOL)isPatternColor;
- (float)alphaComponent;
- (void)setStroke;
- (void)setFill;
- (Class)classForCoder;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (id)colorWithAlphaComponent:(float)arg1;
- (id)styleString;
- (struct CGColor { }*)cgColor;
- (id)initWithWhite:(float)arg1 alpha:(float)arg2;
- (id)_systemColorName;
- (struct CGColor { }*)CGColor;
- (BOOL)getWhite:(float*)arg1 alpha:(float*)arg2;
- (BOOL)getRed:(float*)arg1 green:(float*)arg2 blue:(float*)arg3 alpha:(float*)arg4;
- (void)set;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)burnWithColor:(id)arg1;
- (float)brightnessComponent;
- (float)saturationComponent;
- (float)hueComponent;
- (float)differenceFromColor:(id)arg1;
- (id)overlayWithColor:(id)arg1;
- (BOOL)isGreenOrYellow;
- (id)soverWithColor:(id)arg1;
- (float)luminance;
- (float)redComponent;
- (float)greenComponent;
- (float)blueComponent;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithStyleString:(id)arg1;
- (id)styleString;

@end