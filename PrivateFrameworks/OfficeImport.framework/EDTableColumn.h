/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDString, EDResources;

@interface EDTableColumn : NSObject  {
    EDResources *mResources;
    unsigned int mHeaderRowDxfIndex;
    unsigned int mTotalsRowDxfIndex;
    unsigned int mDataAreaDxfIndex;
    EDString *mName;
    EDString *mUniqueName;
    EDString *mTotalsRowLabel;
}

+ (id)tableColumnWithResources:(id)arg1;

- (void)setName:(id)arg1;
- (void)dealloc;
- (id)uniqueName;
- (id)name;
- (void)setUniqueName:(id)arg1;
- (id)totalsRowLabel;
- (void)setTotalsRowLabel:(id)arg1;
- (unsigned int)headerRowDxfIndex;
- (void)setHeaderRowDxfIndex:(unsigned int)arg1;
- (unsigned int)totalsRowDxfIndex;
- (void)setTotalsRowDxfIndex:(unsigned int)arg1;
- (unsigned int)dataAreaDxfIndex;
- (void)setDataAreaDxfIndex:(unsigned int)arg1;
- (id)headerRowDxf;
- (void)setHeaderRowDxf:(id)arg1;
- (id)totalsRowDxf;
- (void)setTotalsRowDxf:(id)arg1;
- (id)dataAreaDxf;
- (void)setDataAreaDxf:(id)arg1;
- (id)initWithResources:(id)arg1;

@end