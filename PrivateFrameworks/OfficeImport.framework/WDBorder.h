/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSColorStub;

@interface WDBorder : NSObject <NSCopying> {
    int mStyle;
    NSColorStub *mColor;
    unsigned char mWidth;
    unsigned char mSpace;
    BOOL mShadow;
    BOOL mFrame;
}


- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (id)color;
- (void)setColor:(id)arg1;
- (int)style;
- (void)setStyle:(int)arg1;
- (void)setWidth:(unsigned char)arg1;
- (unsigned char)width;
- (void)setFrame:(BOOL)arg1;
- (BOOL)frame;
- (void)setBorder:(id)arg1;
- (void)setNullBorder;
- (void)setSingleBlackBorder;
- (void)setSpace:(unsigned char)arg1;
- (unsigned char)space;
- (BOOL)shadow;
- (void)setShadow:(BOOL)arg1;
- (BOOL)isEqualToBorder:(id)arg1;

@end