/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDPhoneticInfo, NSString, EDRunsCollection;

@interface EDString : NSObject <NSCopying, EDImmutableObject> {
    NSString *mString;
    EDRunsCollection *mRuns;
    EDPhoneticInfo *mPhoneticInfo;
    boolmDoNotModify;
}

+ (id)string;
+ (id)edStringWithString:(id)arg1 runs:(id)arg2;
+ (id)edStringWithString:(id)arg1;

- (id)initWithString:(id)arg1;
- (id)string;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqualToString:(id)arg1;
- (void)setString:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (bool)isEmpty;
- (id)firstRunFont;
- (bool)areThereRuns;
- (void)setRuns:(id)arg1;
- (id)initWithString:(id)arg1 runs:(id)arg2;
- (BOOL)isEqualToEDString:(id)arg1;
- (id)phoneticInfo;
- (void)setPhoneticInfo:(id)arg1;
- (id)runs;
- (void)setDoNotModify:(bool)arg1;

@end