/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIBarButtonItem, UISegmentedControl, <UIWebFormAccessoryDelegate>;

@interface UIWebFormAccessory : UIToolbar  {
    UISegmentedControl *_tab;
    UIBarButtonItem *_autofill;
    UIBarButtonItem *_clearButton;
    <UIWebFormAccessoryDelegate> *delegate;
}

@property(retain) UISegmentedControl * _tab;
@property(retain) UIBarButtonItem * _autofill;
@property(retain) UIBarButtonItem * _clearButton;
@property <UIWebFormAccessoryDelegate> * delegate;
@property(getter=isAutoFillEnabled) BOOL autoFillEnabled;
@property(getter=isNextEnabled) BOOL nextEnabled;
@property(getter=isPreviousEnabled) BOOL previousEnabled;


- (id)init;
- (void)dealloc;
- (id)_autofill;
- (id)_tab;
- (BOOL)isPreviousEnabled;
- (void)setPreviousEnabled:(BOOL)arg1;
- (BOOL)isNextEnabled;
- (void)setNextEnabled:(BOOL)arg1;
- (void)setClearVisible:(BOOL)arg1;
- (void)setAutoFillVisible:(BOOL)arg1;
- (BOOL)isAutoFillEnabled;
- (void)setAutoFillEnabled:(BOOL)arg1;
- (void)autoFill:(id)arg1;
- (void)set_clearButton:(id)arg1;
- (void)set_autofill:(id)arg1;
- (void)_orientationDidChange:(id)arg1;
- (void)_updateFrame;
- (void)done:(id)arg1;
- (void)tab:(id)arg1;
- (void)set_tab:(id)arg1;
- (void)clear:(id)arg1;
- (id)_clearButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end