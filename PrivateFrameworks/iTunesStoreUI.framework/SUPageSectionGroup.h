/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray;

@interface SUPageSectionGroup : NSObject <NSCopying> {
    int _defaultSectionIndex;
    NSArray *_sections;
    int _style;
}

@property int defaultSectionIndex;
@property(retain) NSArray * sections;
@property int style;


- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)sections;
- (void)setSections:(id)arg1;
- (int)style;
- (void)setStyle:(int)arg1;
- (int)_sectionStyleForString:(id)arg1;
- (int)defaultSectionIndex;
- (void)setDefaultSectionIndex:(int)arg1;
- (id)initWithSectionsDictionary:(id)arg1;
- (BOOL)loadFromDictionary:(id)arg1;

@end