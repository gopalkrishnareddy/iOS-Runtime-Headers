/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString, CALayer, NSMutableArray, UIViewController;

@interface UIView : UIResponder <UITextEffectsOrdering, NSCoding, UIAppearance, UIAppearanceContainer> {
    CALayer *_layer;
    id _tapInfo;
    id _gestureInfo;
    NSMutableArray *_gestureRecognizers;
    NSArray *_subviewCache;
    float _charge;
    int _tag;
    UIViewController *_viewDelegate;
    NSString *_backgroundColorSystemColorName;
    struct { 
        unsigned int userInteractionDisabled : 1; 
        unsigned int implementsDrawRect : 1; 
        unsigned int implementsDidScroll : 1; 
        unsigned int implementsMouseTracking : 1; 
        unsigned int hasBackgroundColor : 1; 
        unsigned int isOpaque : 1; 
        unsigned int becomeFirstResponderWhenCapable : 1; 
        unsigned int interceptMouseEvent : 1; 
        unsigned int deallocating : 1; 
        unsigned int debugFlash : 1; 
        unsigned int debugSkippedSetNeedsDisplay : 1; 
        unsigned int debugScheduledDisplayIsRequired : 1; 
        unsigned int isInAWindow : 1; 
        unsigned int isAncestorOfFirstResponder : 1; 
        unsigned int dontAutoresizeSubviews : 1; 
        unsigned int autoresizeMask : 6; 
        unsigned int patternBackground : 1; 
        unsigned int fixedBackgroundPattern : 1; 
        unsigned int dontAnimate : 1; 
        unsigned int superLayerIsView : 1; 
        unsigned int layerKitPatternDrawing : 1; 
        unsigned int multipleTouchEnabled : 1; 
        unsigned int exclusiveTouch : 1; 
        unsigned int hasViewController : 1; 
        unsigned int needsDidAppearOrDisappear : 1; 
        unsigned int gesturesEnabled : 1; 
        unsigned int deliversTouchesForGesturesToSuperview : 1; 
        unsigned int chargeEnabled : 1; 
        unsigned int skipsSubviewEnumeration : 1; 
        unsigned int needsDisplayOnBoundsChange : 1; 
        unsigned int hasTiledLayer : 1; 
        unsigned int hasLargeContent : 1; 
        unsigned int isInAnimatedVCTransition : 1; 
        unsigned int traversalMark : 1; 
        unsigned int appearanceIsInvalid : 1; 
        unsigned int monitorsSubtree : 1; 
    } _viewFlags;
}

@property struct CGPoint { float x1; float x2; } integralCenter;
@property(getter=_caretRect,readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } caretRect;
@property BOOL gesturesEnabled;
@property BOOL deliversTouchesForGesturesToSuperview;
@property BOOL skipsSubviewEnumeration;
@property BOOL viewTraversalMark;
@property(getter=_viewDelegate,setter=_setViewDelegate:) UIViewController * viewDelegate;
@property(getter=isInAnimatedVCTransition) BOOL inAnimatedVCTransition;
@property(getter=_monitorsSubtree,setter=_setMonitorsSubtree:) BOOL monitorsSubtree;
@property(getter=_backgroundColorSystemColorName,setter=_setBackgroundColorSystemColorName:,retain) NSString * backgroundColorSystemColorName;
@property(getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property int tag;
@property(readonly) CALayer * layer;

+ (id)_tintColorForStyle:(int)arg1;
+ (id)_topMostView:(id)arg1;
+ (void)_endDisablingPromoteDescendantToFirstResponder;
+ (void)_beginDisablingPromoteDescendantToFirstResponder;
+ (void)_transitionFromView:(id)arg1 toView:(id)arg2 duration:(double)arg3 options:(unsigned int)arg4 animations:(id)arg5 completion:(id)arg6;
+ (BOOL)_invalidatesViewUponCreation;
+ (void)_setInvalidatesViewUponCreation:(BOOL)arg1;
+ (void)setAnimationTransition:(int)arg1 forView:(id)arg2;
+ (void)transitionFromView:(id)arg1 toView:(id)arg2 duration:(double)arg3 options:(unsigned int)arg4 completion:(id)arg5;
+ (void)transitionWithView:(id)arg1 duration:(double)arg2 options:(unsigned int)arg3 animations:(id)arg4 completion:(id)arg5;
+ (void)animateWithDuration:(double)arg1 animations:(id)arg2;
+ (void)animateWithDuration:(double)arg1 animations:(id)arg2 completion:(id)arg3;
+ (void)animateWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned int)arg3 animations:(id)arg4 completion:(id)arg5;
+ (void)_animateWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned int)arg3 animations:(id)arg4 start:(id)arg5 completion:(id)arg6;
+ (void)_setupAnimationWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned int)arg4 animations:(id)arg5 start:(id)arg6 completion:(id)arg7;
+ (void)_setAnimationFilterValue:(float)arg1;
+ (void)_setAnimationFilter:(int)arg1 forView:(id)arg2;
+ (void)setAnimationWillStartSelector:(SEL)arg1;
+ (void)setAnimationTransition:(int)arg1 forView:(id)arg2 cache:(BOOL)arg3;
+ (void)setAnimationRoundsToInteger:(BOOL)arg1;
+ (void)setAnimationFromCurrentState:(BOOL)arg1;
+ (void)setAnimationAutoreverses:(BOOL)arg1;
+ (void)setAnimationRepeatCount:(float)arg1;
+ (void)setAnimationStartTime:(double)arg1;
+ (void)setAnimationStartDate:(id)arg1;
+ (void)setAnimationFrameInterval:(double)arg1;
+ (void)_inheritAnimationParameters;
+ (void)enableAnimation;
+ (void)disableAnimation;
+ (void)setAnimationPosition:(struct CGPoint { float x1; float x2; })arg1;
+ (float)_currentAnimationDuration;
+ (void)_setAnimationAttributes:(id)arg1;
+ (BOOL)_isInAnimationBlock;
+ (void)commitAnimations;
+ (void)setAnimationRepeatAutoreverses:(BOOL)arg1;
+ (BOOL)areAnimationsEnabled;
+ (void)throttledFlush;
+ (void)_performCustomizableAppearanceModifications:(id)arg1;
+ (id)appearanceWhenContainedIn:(Class)arg1;
+ (id)appearance;
+ (Class)layerClass;
+ (void)_setIsResponderAncestorOfFirstResponder:(BOOL)arg1 startingAtFirstResponder:(id)arg2;
+ (void)setAnimationDelegate:(id)arg1;
+ (void)setAnimationDidStopSelector:(SEL)arg1;
+ (void)beginAnimations:(id)arg1 context:(void*)arg2;
+ (void)setAnimationDelay:(double)arg1;
+ (void)setAnimationCurve:(int)arg1;
+ (void)setAnimationsEnabled:(BOOL)arg1;
+ (void)endAnimations;
+ (void)setAnimationBeginsFromCurrentState:(BOOL)arg1;
+ (void)setAnimationDuration:(double)arg1;
+ (void)beginAnimations:(id)arg1;
+ (void)flush;
+ (void)_performWithoutAnimation:(id)arg1;

- (id)description;
- (id)init;
- (void)dealloc;
- (id)viewPrintFormatter;
- (Class)_printFormatterClass;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forViewPrintFormatter:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_caretRect;
- (id)_asTextSelection;
- (int)_depthFirstCompare:(id)arg1;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isAccessibilityElementByDefault;
- (int)compareTextEffectsOrdering:(id)arg1;
- (id)_syntheticUIEventWithGSEvent:(struct __GSEvent { }*)arg1 touchPhase:(int)arg2;
- (id)_syntheticTouch;
- (int)textEffectsVisibilityLevelWhenKey;
- (BOOL)needsWebDocumentViewEventsDirectly;
- (void)reduceWidth:(float)arg1;
- (int)textEffectsVisibilityLevel;
- (void)resizeForKeyplaneSize:(struct CGSize { float x1; float x2; })arg1;
- (float)_zoomAnimationProgress;
- (void)_animateZoomFailureToWindowPoint:(struct CGPoint { float x1; float x2; })arg1 scale:(float)arg2 duration:(float)arg3;
- (void)_setZoomScale:(float)arg1 duration:(double)arg2;
- (float)rotationDegrees;
- (void)setRotationDegrees:(float)arg1 duration:(double)arg2;
- (id)valueForGestureAttribute:(int)arg1;
- (int)enabledGestures;
- (id)gestureDelegate;
- (BOOL)canHandleGestures;
- (void)_stopRotationFromEvent:(struct __GSEvent { }*)arg1;
- (void)_stopZoomFromEvent:(struct __GSEvent { }*)arg1;
- (void)_setZoomAnimationProgress:(id)arg1;
- (BOOL)_isRubberBanding;
- (void)_setGestureInfoZoomScale:(float)arg1;
- (void)_rotateFromEvent:(struct __GSEvent { }*)arg1;
- (BOOL)_startRotationFromEvent:(struct __GSEvent { }*)arg1;
- (BOOL)_zoomWithEvent:(struct __GSEvent { }*)arg1;
- (BOOL)_startZoomFromEvent:(struct __GSEvent { }*)arg1;
- (void)_resetZoomingWithEvent:(struct __GSEvent { }*)arg1;
- (BOOL)_canStartRotationFromEvent:(struct __GSEvent { }*)arg1;
- (void)_rotateToDegrees:(float)arg1 duration:(float)arg2 event:(struct __GSEvent { }*)arg3;
- (void)rotateToDegrees:(float)arg1;
- (void)_setRotationAnimationProgress:(id)arg1;
- (void)_animateToScrollPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_rubberbandZoomToEvent:(struct __GSEvent { }*)arg1 scale:(float)arg2;
- (BOOL)_canStartZoomFromEvent:(struct __GSEvent { }*)arg1;
- (void)_zoomToEvent:(struct __GSEvent { }*)arg1 scale:(float)arg2 animate:(BOOL)arg3 constrainScrollPoint:(BOOL)arg4;
- (float)_scaleForInternalScale:(float)arg1;
- (float)_rubberBandScaleForScale:(float)arg1;
- (float)_internalScaleForScale:(float)arg1;
- (float)_minimumZoomScaleDelta;
- (void)_zoomToScale:(float)arg1 event:(struct __GSEvent { }*)arg2;
- (void)_zoomToScrollPoint:(struct CGPoint { float x1; float x2; })arg1 scale:(float)arg2 duration:(float)arg3 event:(struct __GSEvent { }*)arg4;
- (struct CGPoint { float x1; float x2; })_scrollPointForPoint:(struct CGPoint { float x1; float x2; })arg1 scale:(float)arg2 constrain:(BOOL)arg3 snapToEdge:(BOOL)arg4;
- (void)_gestureChanged:(int)arg1 event:(struct __GSEvent { }*)arg2;
- (struct CGPoint { float x1; float x2; })_constrainedScrollPoint:(struct CGPoint { float x1; float x2; })arg1 contentSize:(struct CGSize { float x1; float x2; })arg2;
- (struct CGSize { float x1; float x2; })_scrollerContentSize;
- (void)zoomToScale:(float)arg1;
- (void)_zoomToWindowPoint:(struct CGPoint { float x1; float x2; })arg1 scale:(float)arg2 duration:(float)arg3 constrainScrollPoint:(BOOL)arg4 event:(struct __GSEvent { }*)arg5;
- (void)_stopGesture:(int)arg1 event:(struct __GSEvent { }*)arg2;
- (void)_startGesture:(int)arg1 event:(struct __GSEvent { }*)arg2;
- (void)animator:(id)arg1 startAnimation:(id)arg2;
- (void)animator:(id)arg1 stopAnimation:(id)arg2;
- (BOOL)endEditing:(BOOL)arg1;
- (id)textInputView;
- (int)stateForGestureType:(int)arg1;
- (void)gestureChanged:(struct __GSEvent { }*)arg1;
- (void)gestureStarted:(struct __GSEvent { }*)arg1;
- (float)_zoomScale;
- (float)_zoomAnimationDurationForScale:(float)arg1;
- (void)setValue:(id)arg1 forGestureAttribute:(int)arg2;
- (void)setEnabledGestures:(int)arg1;
- (void)setGestureDelegate:(id)arg1;
- (id)_enclosingScrollableScrollerIncludingSelf;
- (id)_enclosingScrollerIncludingSelf;
- (BOOL)_isScrollingEnabled;
- (id)_containerLayoutViewForFastMode;
- (void)_reconsiderFastModeGivenScrollViewInNotification:(id)arg1;
- (BOOL)_wantsCornerSnapshotsForScrolling;
- (int)_containerStyle;
- (int)_style;
- (id)_scriptingInfo;
- (id)recursiveDescription;
- (id)_superDescription;
- (id)_autoresizingDescription;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)addGestureRecognizer:(id)arg1;
- (void)setDeliversTouchesForGesturesToSuperview:(BOOL)arg1;
- (BOOL)deliversTouchesForGesturesToSuperview;
- (void)setGesturesEnabled:(BOOL)arg1;
- (BOOL)gesturesEnabled;
- (void)setGestureRecognizers:(id)arg1;
- (void)removeGestureRecognizer:(id)arg1;
- (void)_setBackgroundCGColor:(struct CGColor { }*)arg1;
- (void)_setMonitorsSubtree:(BOOL)arg1;
- (BOOL)_monitorsSubtree;
- (id)_containingScrollView;
- (void)_setViewDelegate:(id)arg1;
- (void)setSkipsSubviewEnumeration:(BOOL)arg1;
- (BOOL)skipsSubviewEnumeration;
- (void)_setContentsTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)_setContentImage:(id)arg1;
- (void)_mouseUp:(struct __GSEvent { }*)arg1;
- (void)_mouseDragged:(struct __GSEvent { }*)arg1;
- (void)_mouseDown:(struct __GSEvent { }*)arg1;
- (void)_clearBecomeFirstResponderWhenCapableOnSubtree;
- (BOOL)_isInAWindow;
- (BOOL)_animationIsPaused;
- (BOOL)_alwaysHandleInteractionEvents;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (void)_webCustomViewWasRemovedFromSuperview:(id)arg1;
- (void)_webCustomViewWillBeRemovedFromSuperview;
- (void)_webCustomViewWasAddedAsSubviewOfView:(id)arg1;
- (void)_setInterceptMouseEvent:(BOOL)arg1;
- (void)_invalidateLayerContents;
- (void)_didScroll;
- (id)_scroller;
- (BOOL)_subclassImplementsDrawRect;
- (BOOL)_isInExclusiveTouchSubviewTree;
- (BOOL)_appliesExclusiveTouchToSubviewTree;
- (id)_viewIndexPath;
- (void)_descendent:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (void)_unsubscribeToScrollNotificationsIfNecessary:(id)arg1;
- (void)_descendent:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (BOOL)_isAncestorOfFirstResponder;
- (BOOL)_isRootForKeyResponderCycle;
- (void)_setIsAncestorOfFirstResponder:(BOOL)arg1;
- (void)_subscribeToScrollNotificationsIfNecessary:(id)arg1;
- (BOOL)_controlsOwnScaleFactor;
- (void)_gestureEnded:(struct __GSEvent { }*)arg1;
- (struct CGImage { }*)createSnapshotWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setClipsSubviews:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)_interceptMouseEvent:(struct __GSEvent { }*)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)_isInTransitionBlock;
- (void)_removeAllAnimations:(BOOL)arg1;
- (void*)_createIOSurfaceWithPadding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_enableLayerKitPatternDrawing:(BOOL)arg1;
- (void)forceDisplayIfNeeded;
- (struct CGImage { }*)newSnapshotWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContentsPosition:(int)arg1;
- (BOOL)isHiddenOrHasHiddenAncestor;
- (void)setFixedBackgroundPattern:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleBounds;
- (void)_setShouldRasterize:(BOOL)arg1;
- (void)_setContentStretchInPixels:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forContentSize:(struct CGSize { float x1; float x2; })arg2 shouldTile:(BOOL)arg3;
- (void)_resetContentStretch;
- (void*)_createIOSurfaceFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 padding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2;
- (void)recursivelyForceDisplayIfNeeded;
- (void)_renderSnapshotWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (void)setClearsContext:(BOOL)arg1;
- (void)_updateNeedsDisplayOnBoundsChange;
- (BOOL)needsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)contentScaleFactor;
- (BOOL)needsDisplayOnBoundsChange;
- (BOOL)isDescendantOfView:(id)arg1;
- (void)movedToWindow:(id)arg1;
- (void)movedFromWindow:(id)arg1;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)movedToSuperview:(id)arg1;
- (void)_postMovedFromSuperview:(id)arg1;
- (void)insertSubview:(id)arg1 above:(id)arg2;
- (void)insertSubview:(id)arg1 below:(id)arg2;
- (void)_willMoveToWindow:(id)arg1 withAncestorView:(id)arg2;
- (id)_backgroundColor;
- (void)_setBackgroundColor:(id)arg1;
- (void)_didRemoveSubview:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)insertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)insertSubview:(id)arg1 belowSubview:(id)arg2;
- (void)exchangeSubviewAtIndex:(int)arg1 withSubviewAtIndex:(int)arg2;
- (void)insertSubview:(id)arg1 atIndex:(int)arg2;
- (void)_removeFirstResponderFromSubtree;
- (void)layoutIfNeeded;
- (id)viewWithTag:(int)arg1;
- (void)didMoveToSuperview;
- (void)movedFromSuperview:(id)arg1;
- (BOOL)_shouldTryPromoteDescendantToFirstResponder;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)deferredBecomeFirstResponder;
- (void)_makeSubtreePerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)_makeSubtreePerformSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 copySublayers:(BOOL)arg4;
- (id)_findFirstSubviewWantingToBecomeFirstResponder;
- (void)willMoveToWindow:(id)arg1;
- (void)_willMoveToWindow:(id)arg1;
- (void)setViewTraversalMark:(BOOL)arg1;
- (void)setInAnimatedVCTransition:(BOOL)arg1;
- (BOOL)isInAnimatedVCTransition;
- (BOOL)_associatedViewControllerForwardsAppearanceCallbacks:(id)arg1 performHierarchyCheck:(BOOL)arg2 isRoot:(BOOL)arg3;
- (BOOL)viewTraversalMark;
- (void)_setBackgroundCGColor:(struct CGColor { }*)arg1 withSystemColorName:(id)arg2;
- (id)_viewControllerForAncestor;
- (void)_movedToFront;
- (void)_addSubview:(id)arg1 positioned:(int)arg2 relativeTo:(id)arg3;
- (void)setOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })origin;
- (void)sizeToFit;
- (BOOL)autoresizesSubviews;
- (void)setAutoresizesSubviews:(BOOL)arg1;
- (void)setRotationBy:(float)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forFields:(int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hitRect;
- (struct CGPoint { float x1; float x2; })_convertOffset:(struct CGPoint { float x1; float x2; })arg1 fromView:(id)arg2;
- (struct CGPoint { float x1; float x2; })_convertOffset:(struct CGPoint { float x1; float x2; })arg1 toView:(id)arg2;
- (struct CGSize { float x1; float x2; })convertSize:(struct CGSize { float x1; float x2; })arg1 fromView:(id)arg2;
- (struct CGSize { float x1; float x2; })convertSize:(struct CGSize { float x1; float x2; })arg1 toView:(id)arg2;
- (BOOL)isExclusiveTouch;
- (void)setExclusiveTouch:(BOOL)arg1;
- (void)setMultipleTouchEnabled:(BOOL)arg1;
- (void)setFrameOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)_needsLayoutOnAnimatedBoundsChangeForNewBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_resizeWithOldSuperviewSize_ancient:(struct CGSize { float x1; float x2; })arg1;
- (void)_resizeWithOldSuperviewSize:(struct CGSize { float x1; float x2; })arg1;
- (unsigned int)autoresizingMask;
- (void)resizeWithOldSuperviewSize:(struct CGSize { float x1; float x2; })arg1;
- (id)_interceptEvent:(id)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)layoutBelowIfNeeded;
- (void)resizeSubviewsWithOldSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_needsLayoutOnAnimatedFrameChangeForNewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGPoint { float x1; float x2; })position;
- (id)_gestureRecognizers;
- (id)_gestureInfo;
- (int)tag;
- (void)_setAppearanceIsInvalid:(BOOL)arg1;
- (BOOL)_appearanceIsInvalid;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)_backgroundColorSystemColorName;
- (void)_setBackgroundColorSystemColorName:(id)arg1;
- (BOOL)_hasOpaqueBackground;
- (int)swipe:(int)arg1 withEvent:(struct __GSEvent { }*)arg2;
- (BOOL)canHandleSwipes;
- (void)stopHeartbeat:(SEL)arg1;
- (void)startHeartbeat:(SEL)arg1 inRunLoopMode:(id)arg2;
- (void)_clearBecomeFirstResponderWhenCapable;
- (id)_previousKeyResponder;
- (id)_nextKeyResponder;
- (void)setTapDelegate:(id)arg1;
- (void)_setChargeEnabled:(BOOL)arg1;
- (void)setCharge:(float)arg1;
- (void)_createLayerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_appearanceContainer;
- (void)_invalidateAppearanceForSubviewsOfClass:(Class)arg1;
- (BOOL)_canDrawContent;
- (struct CGColor { }*)_backgroundCGColor;
- (int)_topToBottomLeftToRightViewCompare:(id)arg1;
- (void)_collectKeyViews:(id)arg1;
- (id)_rootForKeyResponderCycle;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromView:(id)arg2;
- (id)tapDelegate;
- (BOOL)isEnabled;
- (void)_promoteDescendantToFirstResponderIfNecessary;
- (BOOL)_shouldResignFirstResponderWithInteractionDisabled;
- (void)_setContainerLayoutViewForFastMode:(id)arg1;
- (void)removeAllGestureRecognizers;
- (void)_invalidateSubviewCache;
- (BOOL)clipsToBounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentStretch;
- (int)contentMode;
- (BOOL)clearsContextBeforeDrawing;
- (void)_encodeBackgroundColorWithCoder:(id)arg1;
- (void)_encodeFrameWithCoder:(id)arg1;
- (void)setClipsToBounds:(BOOL)arg1;
- (void)setContentStretch:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContentMode:(int)arg1;
- (void)setClearsContextBeforeDrawing:(BOOL)arg1;
- (void)setContentScaleFactor:(float)arg1;
- (BOOL)useBlockyMagnificationInClassic;
- (void)_clearAnimationFilters;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (BOOL)_becomeFirstResponderWhenPossible;
- (id)_firstResponder;
- (BOOL)_containedInAbsoluteResponderChain;
- (BOOL)containsView:(id)arg1;
- (BOOL)cancelMouseTracking;
- (BOOL)_cancelTapDelegateTracking;
- (void)gestureEnded:(struct __GSEvent { }*)arg1;
- (BOOL)cancelTouchTracking;
- (BOOL)isOpaque;
- (id)backgroundColor;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setCenter:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;
- (struct CGPoint { float x1; float x2; })center;
- (struct CGPoint { float x1; float x2; })frameOrigin;
- (id)_layer;
- (BOOL)isUserInteractionEnabled;
- (BOOL)_canHandleStatusBarTouchAtLocation:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromView:(id)arg2;
- (BOOL)_isChargeEnabled;
- (void)setPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTag:(int)arg1;
- (id)scriptingInfoWithChildren;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (id)layer;
- (id)_window;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })extent;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toView:(id)arg2;
- (BOOL)_shouldApplyExclusiveTouch;
- (BOOL)isMultipleTouchEnabled;
- (float)charge;
- (id)_gestureTargetHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toView:(id)arg2;
- (BOOL)_usesDifferentHitTestForGestures;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)gestureRecognizers;
- (id)superview;
- (id)nextResponder;
- (id)_viewDelegate;
- (id)subviews;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (void)bringSubviewToFront:(id)arg1;
- (void)sendSubviewToBack:(id)arg1;
- (void)addSubview:(id)arg1;
- (void)removeFromSuperview;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)setAlpha:(float)arg1;
- (void)setHidden:(BOOL)arg1;
- (BOOL)isHidden;
- (float)alpha;
- (id)window;
- (void)setNeedsLayout;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })size;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)setNeedsDisplay;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (void)setNeedsDisplayOnBoundsChange:(BOOL)arg1;
- (void)setAutoresizingMask:(unsigned int)arg1;
- (void)setOpaque:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)abSetLayoutDebuggingColor:(id)arg1;
- (id)abIndexPathOfSubview:(id)arg1;
- (id)abSubviewAtIndexPath:(id)arg1;
- (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })_mapkit_doubleFrame;
- (unsigned int)_mapkit_countOfSet:(id)arg1 minusSubset:(id)arg2;
- (id)_mapKit_mapView;
- (id)_mapkit_currentLayer;
- (void)sbui_drawEagerly;
- (id)mpAncestorViewController;
- (void)mpSetFrameSize:(struct CGSize { float x1; float x2; })arg1;
- (void)mpSetFrameOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (void)mpPerformRecursiveBlock:(id)arg1;
- (id)firstLabelSubview;
- (BOOL)mpIsHiddenOrPendingIsHidden;
- (void)mpSetPendingIsHiddenValue:(id)arg1;
- (id)mpPendingValueOrValueForProperty:(id)arg1;
- (void)mpSetPendingValue:(id)arg1 forProperty:(id)arg2;
- (id)mpPendingValues;
- (void)showActionSheet:(id)arg1 animated:(BOOL)arg2;
- (void)pl_debugSetLayerNames;
- (BOOL)pl_isOnScreen:(id)arg1;
- (void)_gkAddStandardFadeTransition;
- (id)_gkParentCell;
- (id)_gkTileBackgroundImage:(id)arg1 existingTiles:(id)arg2 withBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 offset:(struct CGSize { float x1; float x2; })arg4;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_gkAddFormSheetFrameImagesAtOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })integralCenter;
- (void)setIntegralCenter:(struct CGPoint { float x1; float x2; })arg1;
- (void)_gkDrawDisclosureIndicator;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_gkRectForDisclosureIndicatorInBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_iAd_screenFrame;
- (BOOL)_iAd_isVisible;
- (BOOL)_iAd_isVisibleFast;
- (void)centerSubviewInBounds:(id)arg1;
- (id)superviewOfClass:(Class)arg1;
- (id)firstScrollViewDescendant;
- (id)_firstDescendantOfKind:(Class)arg1;
- (void)fadeToAlpha:(float)arg1 withDuration:(float)arg2;
- (id)_videoSummary_labelForTag:(unsigned int)arg1 font:(id)arg2 emboss:(BOOL)arg3 lineSpacing:(unsigned int)arg4 color:(id)arg5;
- (id)_videoSummary_viewForTag:(unsigned int)arg1 newViewHandler:(id)arg2;
- (id)_videoSummary_viewForTag:(unsigned int)arg1 class:(Class)arg2;
- (id)_videoSummary_contentTextViewForTag:(unsigned int)arg1;
- (id)_videoSummary_contentLabelForTag:(unsigned int)arg1;
- (id)_videoSummary_headerLabelForTag:(unsigned int)arg1;

@end