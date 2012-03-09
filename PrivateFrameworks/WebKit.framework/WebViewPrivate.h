/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSURL, WebFixedPositionContent, <WebFormDelegate>, WebVideoFullscreenController, <WebCaretChangeListener>, WebPreferences, WebEvent, WAKWindow, NSMutableSet, <WebGeolocationProvider>, <WebDeviceOrientationProvider>, WebNodeHighlight, WebInspector, NSString, NSTimer;

@interface WebViewPrivate : NSObject  {
    struct Page { } *page;
    id UIDelegate;
    id UIDelegateForwarder;
    id resourceProgressDelegate;
    id downloadDelegate;
    id policyDelegate;
    id policyDelegateForwarder;
    id frameLoadDelegate;
    id frameLoadDelegateForwarder;
    <WebFormDelegate> *formDelegate;
    id editingDelegate;
    id editingDelegateForwarder;
    id scriptDebugDelegate;
    id historyDelegate;
    id resourceProgressDelegateForwarder;
    id formDelegateForwarder;
    WebInspector *inspector;
    WebNodeHighlight *currentNodeHighlight;
    BOOL allowsRemoteInspection;
    BOOL allowsUndo;
    float zoomMultiplier;
    BOOL zoomsTextOnly;
    NSString *applicationNameForUserAgent;
    struct String { 
        struct RefPtr<WTF::StringImpl> { 
            struct StringImpl {} *m_ptr; 
        } m_impl; 
    } userAgent;
    BOOL userAgentOverridden;
    WebPreferences *preferences;
    BOOL useSiteSpecificSpoofing;
    NSURL *userStyleSheetLocation;
    WAKWindow *hostWindow;
    int programmaticFocusCount;
    struct WebResourceDelegateImplementationCache { 
        int (*didCancelAuthenticationChallengeFunc)(); 
        int (*didReceiveAuthenticationChallengeFunc)(); 
        int (*canAuthenticateAgainstProtectionSpaceFunc)(); 
        int (*connectionPropertiesFunc)(); 
        int (*webThreadDidFinishLoadingFromDataSourceFunc)(); 
        int (*webThreadDidFailLoadingWithErrorFromDataSourceFunc)(); 
        int (*webThreadIdentifierForRequestFunc)(); 
        int (*webThreadDidLoadResourceFromMemoryCacheFunc)(); 
        int (*webThreadWillSendRequestFunc)(); 
        int (*webThreadDidReceiveResponseFunc)(); 
        int (*webThreadDidReceiveContentLengthFunc)(); 
        int (*webThreadWillCacheResponseFunc)(); 
        int (*identifierForRequestFunc)(); 
        int (*willSendRequestFunc)(); 
        int (*didReceiveResponseFunc)(); 
        int (*didReceiveContentLengthFunc)(); 
        int (*didFinishLoadingFromDataSourceFunc)(); 
        int (*didFailLoadingWithErrorFromDataSourceFunc)(); 
        int (*didLoadResourceFromMemoryCacheFunc)(); 
        int (*willCacheResponseFunc)(); 
        int (*plugInFailedWithErrorFunc)(); 
        int (*shouldUseCredentialStorageFunc)(); 
        int (*shouldPaintBrokenImageForURLFunc)(); 
    } resourceLoadDelegateImplementations;
    struct WebFrameLoadDelegateImplementationCache { 
        int (*didClearWindowObjectForFrameFunc)(); 
        int (*didClearWindowObjectForFrameInScriptWorldFunc)(); 
        int (*didClearInspectorWindowObjectForFrameFunc)(); 
        int (*windowScriptObjectAvailableFunc)(); 
        int (*didHandleOnloadEventsForFrameFunc)(); 
        int (*didReceiveServerRedirectForProvisionalLoadForFrameFunc)(); 
        int (*didCancelClientRedirectForFrameFunc)(); 
        int (*willPerformClientRedirectToURLDelayFireDateForFrameFunc)(); 
        int (*didChangeLocationWithinPageForFrameFunc)(); 
        int (*didPushStateWithinPageForFrameFunc)(); 
        int (*didReplaceStateWithinPageForFrameFunc)(); 
        int (*didPopStateWithinPageForFrameFunc)(); 
        int (*willCloseFrameFunc)(); 
        int (*didStartProvisionalLoadForFrameFunc)(); 
        int (*didReceiveTitleForFrameFunc)(); 
        int (*didCommitLoadForFrameFunc)(); 
        int (*didFailProvisionalLoadWithErrorForFrameFunc)(); 
        int (*didFailLoadWithErrorForFrameFunc)(); 
        int (*didFinishLoadForFrameFunc)(); 
        int (*didFirstLayoutInFrameFunc)(); 
        int (*didFirstVisuallyNonEmptyLayoutInFrameFunc)(); 
        int (*didFinishDocumentLoadForFrameFunc)(); 
        int (*didDisplayInsecureContentFunc)(); 
        int (*didRunInsecureContentFunc)(); 
    } frameLoadDelegateImplementations;
    struct WebScriptDebugDelegateImplementationCache { 
        BOOL didParseSourceExpectsBaseLineNumber; 
        BOOL exceptionWasRaisedExpectsHasHandlerFlag; 
        int (*didParseSourceFunc)(); 
        int (*failedToParseSourceFunc)(); 
        int (*didEnterCallFrameFunc)(); 
        int (*willExecuteStatementFunc)(); 
        int (*willLeaveCallFrameFunc)(); 
        int (*exceptionWasRaisedFunc)(); 
    } scriptDebugDelegateImplementations;
    struct WebHistoryDelegateImplementationCache { 
        int (*navigatedFunc)(); 
        int (*clientRedirectFunc)(); 
        int (*serverRedirectFunc)(); 
        int (*setTitleFunc)(); 
        int (*populateVisitedLinksFunc)(); 
    } historyDelegateImplementations;
    void *observationInfo;
    BOOL closed;
    BOOL closing;
    BOOL shouldCloseWithWindow;
    BOOL mainFrameDocumentReady;
    BOOL drawsBackground;
    BOOL tabKeyCyclesThroughElementsChanged;
    BOOL becomingFirstResponder;
    BOOL becomingFirstResponderFromOutside;
    BOOL hoverFeedbackSuspended;
    BOOL usesPageCache;
    BOOL catchesDelegateExceptions;
    BOOL cssAnimationsSuspended;
    struct CGColor { } *backgroundColor;
    NSString *mediaStyle;
    BOOL hasSpellCheckerDocumentTag;
    int spellCheckerDocumentTag;
    BOOL smartInsertDeleteEnabled;
    BOOL selectTrailingWhitespaceEnabled;
    BOOL isStopping;
    id UIKitDelegate;
    id UIKitDelegateForwarder;
    id WebMailDelegate;
    BOOL allowsMessaging;
    NSMutableSet *_caretChangeListeners;
    <WebCaretChangeListener> *_caretChangeListener;
    struct CGSize { 
        float width; 
        float height; 
    } fixedLayoutSize;
    BOOL mainViewIsScrollingOrZooming;
    int didDrawTiles;
    struct HashMap<long unsigned int,WTF::RetainPtr<objc_object*>,WTF::IntHash<long unsigned int>,WTF::HashTraits<long unsigned int>,WTF::HashTraits<WTF::RetainPtr<objc_object*> > > { 
        struct HashTable<long unsigned int,std::pair<long unsigned int, WTF::RetainPtr<objc_object*> >,WTF::PairFirstExtractor<std::pair<long unsigned int, WTF::RetainPtr<objc_object*> > >,WTF::IntHash<long unsigned int>,WTF::PairHashTraits<WTF::HashTraits<long unsigned int>, WTF::HashTraits<WTF::RetainPtr<objc_object*> > >,WTF::HashTraits<long unsigned int> > { 
            struct pair<long unsigned int,WTF::RetainPtr<objc_object*> > {} *m_table; 
            int m_tableSize; 
            int m_tableSizeMask; 
            int m_keyCount; 
            int m_deletedCount; 
        } m_impl; 
    } identifierMap;
    BOOL _keyboardUIModeAccessed;
    int _keyboardUIMode;
    BOOL shouldUpdateWhileOffscreen;
    BOOL usesDocumentViews;
    BOOL includesFlattenedCompositingLayersWhenDrawingToBitmap;
    BOOL needsOneShotDrawingSynchronization;
    BOOL postsAcceleratedCompositingNotifications;
    struct __CFRunLoopObserver { } *layerSyncRunLoopObserver;
    struct CGSize { 
        float width; 
        float height; 
    } lastLayoutSize;
    BOOL ignoringMouseDraggedEvents;
    WebEvent *mouseDownEvent;
    BOOL handlingMouseDownEvent;
    WebEvent *keyDownEvent;
    NSTimer *autoscrollTimer;
    WebEvent *autoscrollTriggerEvent;
    WebVideoFullscreenController *fullscreenController;
    <WebGeolocationProvider> *_geolocationProvider;
    <WebDeviceOrientationProvider> *m_deviceOrientationProvider;
    struct RefPtr<WebCore::HistoryItem> { 
        struct HistoryItem {} *m_ptr; 
    } _globalHistoryItem;
    BOOL interactiveFormValidationEnabled;
    int validationMessageTimerMagnification;
    WebFixedPositionContent *_fixedPositionContent;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)finalize;
- (void).cxx_destruct;

@end