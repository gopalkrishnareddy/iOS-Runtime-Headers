/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADDrawable, WDCharacterProperties;

@interface WDOfficeArt : WDRun  {
    WDCharacterProperties *mProperties;
    OADDrawable *mDrawable;
    boolmFloating;
}

+ (int)textBoxTextTypeForRegularTextType:(int)arg1;

- (void)setProperties:(id)arg1;
- (void)dealloc;
- (id)properties;
- (id)overrideDrawable;
- (void)clearDrawable;
- (id)imageBlipRef;
- (void)setImageBlipRef:(id)arg1;
- (id)imageData;
- (id)imageName;
- (void)setTextType:(int)arg1 recursivelyToDrawable:(id)arg2;
- (void)clearProperties;
- (BOOL)isDrawableOverridden;
- (void)propagateTextTypeToDrawables;
- (void)setFloating:(bool)arg1;
- (id)initWithParagraph:(id)arg1;
- (void)checkForFloating:(id)arg1;
- (bool)isFloating;
- (int)runType;
- (void)setDrawable:(id)arg1;
- (id)drawable;

@end