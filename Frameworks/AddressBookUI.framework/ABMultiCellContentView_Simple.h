/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABMultiCellContentView_Simple : ABMultiCellContentView <UITextFieldDelegate> {
    NSString * _previousValue;
    ABHighlightingTextField * _textField;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *text;

+ (struct CGSize { float x1; float x2; })layoutSubviewsForView:(id)arg1 usingSize:(struct CGSize { float x1; float x2; })arg2 propertyGroup:(id)arg3 info:(id)arg4 styleProvider:(id)arg5 whenEditing:(BOOL)arg6;

- (BOOL)canHandleProperty:(int)arg1;
- (void)dealloc;
- (id)hitTestForTouches:(id)arg1 withEvent:(id)arg2;
- (BOOL)isValidValue:(id)arg1;
- (id)pickerView;
- (void)reload;
- (void)reloadFromModel;
- (void)setAbCellStyle:(int)arg1;
- (void)setPropertyGroup:(id)arg1 andInfo:(id)arg2;
- (BOOL)shouldSendTouchesToSuperviewForHitView:(id)arg1;
- (struct { id x1; })suggestionsForString:(id)arg1 inputIndex:(unsigned int)arg2;
- (BOOL)tabToNextResponder:(BOOL)arg1 fromView:(id)arg2;
- (id)text;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;
- (void)updateSubviewsForNewStateAnimated:(BOOL)arg1;
- (id)viewForFirstResponder;
- (BOOL)wantsLabelDivider;

@end
