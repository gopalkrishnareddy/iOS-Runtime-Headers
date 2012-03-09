/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADColorMap, OADTheme, OADTextListStyle;

@interface PDNotesMaster : PDSlideBase  {
    OADTheme *mTheme;
    OADColorMap *mColorMap;
    OADTextListStyle *mNotesTextStyle;
}


- (id)init;
- (void)dealloc;
- (id)theme;
- (id)parentSlideBase;
- (id)colorMap;
- (id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3;
- (id)parentTextStyleForTables;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2;
- (id)drawingTheme;
- (id)colorScheme;
- (id)fontScheme;
- (id)styleMatrix;
- (id)notesTextStyle;
- (void)doneWithContent;

@end