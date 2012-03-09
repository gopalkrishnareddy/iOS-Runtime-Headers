/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIKeyboard, UITableView, NSMutableArray, UIActionSheet, UIAlertView, NSString, UIPopoverController, NSMutableDictionary, NSArray;

@interface PSListController : PSViewController <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate, UIAlertViewDelegate, UIPopoverControllerDelegate, PSViewControllerOffsetProtocol> {
    NSMutableDictionary *_cells;
    BOOL _cachesCells;
    BOOL _forceSynchronousIconLoadForCreatedCells;
    UITableView *_table;
    NSArray *_specifiers;
    NSMutableDictionary *_specifiersByID;
    NSMutableArray *_groups;
    NSString *_specifierID;
    NSMutableArray *_bundleControllers;
    BOOL _bundlesLoaded;
    BOOL _showingSetupController;
    UIActionSheet *_actionSheet;
    UIAlertView *_alertView;
    BOOL _swapAlertButtons;
    BOOL _keyboardWasVisible;
    UIKeyboard *_keyboard;
    UIPopoverController *_popupStylePopoverController;
    BOOL _popupStylePopoverShouldRePresent;
    BOOL _popupIsModal;
    BOOL _popupIsDismissing;
    BOOL _hasAppeared;
    float _verticalContentOffset;
    NSString *_offsetItemName;
    struct CGPoint { 
        float x; 
        float y; 
    } _contentOffsetWithKeyboard;
}

@property BOOL forceSynchronousIconLoadForCreatedCells;

+ (BOOL)displaysButtonBar;

- (id)description;
- (id)init;
- (void)dealloc;
- (void)clearCache;
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2;
- (void)setSpecifierID:(id)arg1;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void)formSheetViewWillDisappear;
- (void)reloadSpecifierID:(id)arg1;
- (void)reloadSpecifier:(id)arg1;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2 animated:(BOOL)arg3;
- (int)indexOfSpecifier:(id)arg1;
- (void)insertSpecifier:(id)arg1 atIndex:(int)arg2 animated:(BOOL)arg3;
- (void)removeSpecifier:(id)arg1 animated:(BOOL)arg2;
- (BOOL)getGroup:(int*)arg1 row:(int*)arg2 ofSpecifier:(id)arg3;
- (int)rowsForGroup:(int)arg1;
- (BOOL)shouldSelectResponderOnAppearance;
- (id)specifiers;
- (id)controllerForRowAtIndexPath:(id)arg1;
- (void)pushController:(id)arg1;
- (id)indexPathForIndex:(int)arg1;
- (void)handleURL:(id)arg1;
- (int)indexOfGroup:(int)arg1;
- (void)reloadSpecifiers;
- (void)pushController:(id)arg1 animate:(BOOL)arg2;
- (id)cachedCellForSpecifierID:(id)arg1;
- (id)specifierForID:(id)arg1;
- (BOOL)containsSpecifier:(id)arg1;
- (void)replaceContiguousSpecifiers:(id)arg1 withSpecifiers:(id)arg2 animated:(BOOL)arg3;
- (void)reloadSpecifier:(id)arg1 animated:(BOOL)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 atIndex:(int)arg2 animated:(BOOL)arg3;
- (void)removeContiguousSpecifiers:(id)arg1 animated:(BOOL)arg2;
- (id)cachedCellForSpecifier:(id)arg1;
- (id)specifier;
- (int)indexForIndexPath:(id)arg1;
- (void)popoverController:(id)arg1 animationCompleted:(int)arg2;
- (void)_keyboardDidHide:(id)arg1;
- (id)bundle;
- (id)contentScrollView;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (void)viewDidLoad;
- (id)table;
- (BOOL)popoverControllerShouldDismissPopover:(id)arg1;
- (void)dismissPopoverAnimated:(BOOL)arg1;
- (int)tableView:(id)arg1 titleAlignmentForFooterInSection:(int)arg2;
- (int)tableView:(id)arg1 titleAlignmentForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 detailTextForHeaderInSection:(int)arg2;
- (id)tableBackgroundColor;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)reload;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)setTitle:(id)arg1;
- (void)endUpdates;
- (void)beginUpdates;
- (void)showPINSheet:(id)arg1;
- (id)popupStylePopoverController;
- (void)setCachesCells:(BOOL)arg1;
- (void)setSpecifiers:(id)arg1;
- (int)numberOfGroups;
- (int)indexForRow:(int)arg1 inGroup:(int)arg2;
- (void)insertSpecifier:(id)arg1 atIndex:(int)arg2;
- (void)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2;
- (void)insertSpecifier:(id)arg1 afterSpecifierID:(id)arg2;
- (void)insertSpecifier:(id)arg1 atEndOfGroup:(int)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 atIndex:(int)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifierID:(id)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 atEndOfGroup:(int)arg2;
- (void)addSpecifier:(id)arg1;
- (void)removeSpecifier:(id)arg1;
- (void)removeSpecifierID:(id)arg1;
- (void)removeSpecifierAtIndex:(int)arg1;
- (void)removeLastSpecifier;
- (void)replaceContiguousSpecifiers:(id)arg1 withSpecifiers:(id)arg2;
- (void)updateSpecifiers:(id)arg1 withSpecifiers:(id)arg2;
- (id)initForContentSize:(struct CGSize { float x1; float x2; })arg1;
- (id)specifierID;
- (void)showConfirmationSheetForSpecifier:(id)arg1;
- (void)dismissPopover;
- (void)selectRowForSpecifier:(id)arg1;
- (void)_setNotShowingSetupController;
- (BOOL)forceSynchronousIconLoadForCreatedCells;
- (float)verticalContentOffset;
- (void)prepareSpecifiersMetadata;
- (BOOL)getGroup:(int*)arg1 row:(int*)arg2 ofSpecifierAtIndex:(int)arg3;
- (void)createGroupIndices;
- (void)reloadSpecifierAtIndex:(int)arg1 animated:(BOOL)arg2;
- (void)reloadSpecifierID:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_getGroup:(int*)arg1 row:(int*)arg2 ofSpecifierAtIndex:(int)arg3 groups:(id)arg4;
- (void)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2 animated:(BOOL)arg3;
- (void)insertSpecifier:(id)arg1 atEndOfGroup:(int)arg2 animated:(BOOL)arg3;
- (void)_addIdentifierForSpecifier:(id)arg1;
- (void)_insertContiguousSpecifiers:(id)arg1 atIndex:(int)arg2 animated:(BOOL)arg3;
- (void)addSpecifier:(id)arg1 animated:(BOOL)arg2;
- (void)removeSpecifierID:(id)arg1 animated:(BOOL)arg2;
- (void)removeLastSpecifierAnimated:(BOOL)arg1;
- (void)_removeIdentifierForSpecifier:(id)arg1;
- (void)_removeContiguousSpecifiers:(id)arg1 animated:(BOOL)arg2;
- (void)updateSpecifiersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withSpecifiers:(id)arg2;
- (int)_nextGroupInSpecifiersAfterIndex:(int)arg1 inArray:(id)arg2;
- (void)_unloadBundleControllers;
- (void)_returnKeyPressed:(id)arg1;
- (Class)backgroundViewClass;
- (id)_createGroupIndices:(id)arg1;
- (id)specifierAtIndex:(int)arg1;
- (void)setForceSynchronousIconLoadForCreatedCells:(BOOL)arg1;
- (id)_customViewForSpecifier:(id)arg1 class:(Class)arg2 isHeader:(BOOL)arg3;
- (float)_tableView:(id)arg1 heightForCustomInSection:(int)arg2 isHeader:(BOOL)arg3;
- (id)_tableView:(id)arg1 viewForCustomInSection:(int)arg2 isHeader:(BOOL)arg3;
- (id)findFirstVisibleResponder;
- (void)_loadBundleControllers;
- (float)_getKeyboardIntersectionHeight;
- (void)_setContentInset:(float)arg1;
- (void)popupViewWillDisappear;
- (void)returnPressedAtEnd;
- (void)showConfirmationViewForSpecifier:(id)arg1 useAlert:(BOOL)arg2 swapAlertButtons:(BOOL)arg3;
- (void)showConfirmationViewForSpecifier:(id)arg1;
- (BOOL)performActionForSpecifier:(id)arg1;
- (BOOL)performCancelForSpecifier:(id)arg1;
- (void)confirmationViewAcceptedForSpecifier:(id)arg1;
- (void)confirmationViewCancelledForSpecifier:(id)arg1;
- (void)setDesiredVerticalContentOffset:(float)arg1;
- (void)setDesiredVerticalContentOffsetItemNamed:(id)arg1;
- (void)reloadIconForSpecifierForBundle:(id)arg1;
- (int)tableStyle;
- (Class)tableViewClass;
- (void)addSpecifiersFromArray:(id)arg1;
- (void)addSpecifiersFromArray:(id)arg1 animated:(BOOL)arg2;
- (void)insertContiguousSpecifiers:(id)arg1 atEndOfGroup:(int)arg2 animated:(BOOL)arg3;
- (id)specifiersInGroup:(int)arg1;
- (BOOL)getGroup:(int*)arg1 row:(int*)arg2 ofSpecifierID:(id)arg3;
- (void)removeSpecifierAtIndex:(int)arg1 animated:(BOOL)arg2;
- (void)reloadSpecifierAtIndex:(int)arg1;
- (void)insertSpecifier:(id)arg1 afterSpecifierID:(id)arg2 animated:(BOOL)arg3;
- (void)loseFocus;
- (void)insertContiguousSpecifiers:(id)arg1 afterSpecifierID:(id)arg2 animated:(BOOL)arg3;
- (void)removeContiguousSpecifiers:(id)arg1;
- (int)indexOfSpecifierID:(id)arg1;

@end