/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXRelatedWidget : NSObject <PXChangeObserver, PXRelatedDataSourceManagerObserver, PXRelatedTilingLayoutDelegate, PXTileSource, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate, PXWidget> {
    PXRelatedDataSource * __anchorDataSource;
    struct PXSimpleIndexPath { 
        unsigned int dataSourceIdentifier; 
        int section; 
        int item; 
        int subitem; 
    }  __anchorIndexPath;
    struct CGPoint { 
        float x; 
        float y; 
    }  __anchorOffset;
    int  __availableNumberOfRows;
    BOOL  __canExpand;
    PXRelatedDataSourceManager * __dataSourceManager;
    BOOL  __expanded;
    PXRelatedTilingLayout * __layout;
    int  __maximumNumberOfRowsToDisplay;
    NSDictionary * __prefetchedDataSourceByRelatedEntry;
    BOOL  __shouldLoadContentData;
    PXRelatedSpecManager * __specManager;
    PXBasicTileAnimator * __tileAnimator;
    PXTilingController * __tilingController;
    PXPhotosDetailsContext * _context;
    PXSectionedObjectReference * _focusedObjectReference;
    BOOL  _hasLoadedContentData;
    PXSectionedObjectReference * _highlightedObjectReference;
    BOOL  _isPerformingChanges;
    BOOL  _isPerformingUpdates;
    struct { 
        BOOL dataSourceManager; 
        BOOL layout; 
        BOOL availableNumberOfRows; 
        BOOL maximumNumberOfRowsToDisplay; 
        BOOL canExpand; 
        BOOL hasLoadedContentData; 
        BOOL prefetchedDataSources; 
    }  _needsUpdateFlags;
    <PXWidgetDelegate> * _widgetDelegate;
}

@property (setter=_setAnchorDataSource:, nonatomic, retain) PXRelatedDataSource *_anchorDataSource;
@property (setter=_setAnchorIndexPath:, nonatomic) struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; } _anchorIndexPath;
@property (setter=_setAnchorOffset:, nonatomic) struct CGPoint { float x1; float x2; } _anchorOffset;
@property (setter=_setAvailableNumberOfRows:, nonatomic) int _availableNumberOfRows;
@property (setter=_setCanExpand:, nonatomic) BOOL _canExpand;
@property (nonatomic, readonly) PXRelatedDataSourceManager *_dataSourceManager;
@property (getter=_isExpanded, setter=_setExpanded:, nonatomic) BOOL _expanded;
@property (nonatomic, readonly) PXRelatedTilingLayout *_layout;
@property (setter=_setMaximumNumberOfRowsToDisplay:, nonatomic) int _maximumNumberOfRowsToDisplay;
@property (setter=_setPrefetchedDataSourceByRelatedEntry:, nonatomic, retain) NSDictionary *_prefetchedDataSourceByRelatedEntry;
@property (setter=_setShouldLoadContentData:, nonatomic) BOOL _shouldLoadContentData;
@property (nonatomic, readonly) PXRelatedSpecManager *_specManager;
@property (nonatomic, readonly) PXBasicTileAnimator *_tileAnimator;
@property (nonatomic, readonly) PXTilingController *_tilingController;
@property (nonatomic, readonly) BOOL allowUserInteractionWithSubtitle;
@property (nonatomic, readonly) int contentLayoutStyle;
@property (nonatomic, readonly) PXTilingController *contentTilingController;
@property (nonatomic, readonly) NSObject<PXAnonymousView> *contentView;
@property (nonatomic, readonly) int contentViewAnchoringType;
@property (nonatomic, retain) PXPhotosDetailsContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFaceModeEnabled, nonatomic) BOOL faceModeEnabled;
@property (nonatomic, retain) PXSectionedObjectReference *focusedObjectReference;
@property (nonatomic, readonly) BOOL hasContentForCurrentInput;
@property (setter=_setHasLoadedContentData:, nonatomic) BOOL hasLoadedContentData;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) PXSectionedObjectReference *highlightedObjectReference;
@property (nonatomic, readonly) NSString *localizedCaption;
@property (nonatomic, readonly) NSString *localizedDisclosureTitle;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (getter=isSelecting, nonatomic) BOOL selecting;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (nonatomic, retain) PXWidgetSpec *spec;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BOOL supportsFaceMode;
@property (nonatomic, readonly) BOOL supportsSelection;
@property (getter=isUserInteractionEnabled, nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) <PXWidgetDelegate> *widgetDelegate;

- (void).cxx_destruct;
- (id)_anchorDataSource;
- (struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })_anchorIndexPath;
- (struct CGPoint { float x1; float x2; })_anchorOffset;
- (struct CGPoint { float x1; float x2; })_anchorPointForLayoutContentBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)_availableNumberOfRows;
- (BOOL)_canExpand;
- (id)_createPhotosDataSourceForRelatedEntry:(id)arg1;
- (id)_dataSourceManager;
- (void)_invalidateAvailableNumberOfRows;
- (void)_invalidateCanExpand;
- (void)_invalidateDataSourceManager;
- (void)_invalidateHasLoadedContentData;
- (void)_invalidateLayout;
- (void)_invalidateMaximumNumberOfRowsToDisplay;
- (void)_invalidatePrefetchedDataSources;
- (BOOL)_isExpanded;
- (id)_layout;
- (void)_loadContentDataIfNeeded;
- (void)_loadTilingController;
- (int)_maximumNumberOfRowsToDisplay;
- (BOOL)_needsUpdate;
- (void)_performChanges:(id /* block */)arg1;
- (id)_prefetchedDataSourceByRelatedEntry;
- (void)_saveAnchoring;
- (void)_setAnchorDataSource:(id)arg1;
- (void)_setAnchorIndexPath:(struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })arg1;
- (void)_setAnchorOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setAvailableNumberOfRows:(int)arg1;
- (void)_setCanExpand:(BOOL)arg1;
- (void)_setExpanded:(BOOL)arg1;
- (void)_setHasLoadedContentData:(BOOL)arg1;
- (void)_setMaximumNumberOfRowsToDisplay:(int)arg1;
- (void)_setNeedsUpdate;
- (void)_setPrefetchedDataSourceByRelatedEntry:(id)arg1;
- (void)_setShouldLoadContentData:(BOOL)arg1;
- (BOOL)_shouldLoadContentData;
- (id)_specManager;
- (id)_tileAnimator;
- (id)_tilingController;
- (void)_updateAvailableNumberOfRowsIfNeeded;
- (void)_updateCanExpandIfNeeded;
- (void)_updateDataSourceManagerIfNeeded;
- (void)_updateHasLoadedContentDataIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateLayoutIfNeeded;
- (void)_updateMaximumNumberOfRowsToDisplayIfNeeded;
- (void)_updatePrefetchedDataSources;
- (id)allRelatedEntries;
- (void)checkInTile:(void*)arg1 withIdentifier:(struct PXTileIdentifier { unsigned int x1; unsigned int x2[10]; })arg2;
- (void*)checkOutTileForIdentifier:(struct PXTileIdentifier { unsigned int x1; unsigned int x2[10]; })arg1 layout:(id)arg2;
- (id)contentTilingController;
- (id)context;
- (id)createTileAnimator;
- (id)entryObjectReferenceAtPoint:(struct CGPoint { float x1; float x2; })arg1 inCoordinateSpaceWithIdentifier:(void*)arg2;
- (id)extendedTraitCollection;
- (id)focusedObjectReference;
- (BOOL)hasContentForCurrentInput;
- (BOOL)hasLoadedContentData;
- (id)highlightedObjectReference;
- (struct PXTileIdentifier { unsigned int x1; unsigned int x2[10]; })identifierForTileWithKind:(int)arg1 relatedEntry:(id)arg2;
- (struct PXTileIdentifier { unsigned int x1; unsigned int x2[10]; })identifierForTileWithKind:(int)arg1 relatedEntry:(id)arg2 layout:(id)arg3;
- (id)init;
- (void)installGestureRecognizers;
- (void)loadContentData;
- (id)localizedDisclosureTitle;
- (id)localizedTitle;
- (void)observable:(id)arg1 didChange:(unsigned int)arg2 context:(void*)arg3;
- (id)photosDataSourceForRelatedEntry:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectOfInterestForRelatedEntry:(id)arg1 inCoordinateSpaceWithIdentifier:(void*)arg2;
- (id)relatedEntryAtPoint:(struct CGPoint { float x1; float x2; })arg1 inCoordinateSpaceWithIdentifier:(void*)arg2;
- (id)relatedEntryForPhotosDataSource:(id)arg1;
- (id)relatedEntryForTileIdentifier:(struct PXTileIdentifier { unsigned int x1; unsigned int x2[10]; })arg1 layout:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })relatedTilingLayout:(id)arg1 contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })arg2 forAspectRatio:(double)arg3;
- (BOOL)relatedTilingLayout:(id)arg1 isPlaceholderEntryAtIndexPath:(struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })arg2;
- (id)relatedTilingLayout:(id)arg1 titleFontNameForEntryAtIndexPath:(struct PXSimpleIndexPath { unsigned int x1; int x2; int x3; int x4; })arg2;
- (id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFocusedObjectReference:(id)arg1;
- (void)setHighlightedObjectReference:(id)arg1;
- (void)setWidgetDelegate:(id)arg1;
- (struct CGPoint { float x1; float x2; })tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2;
- (void)tilingController:(id)arg1 prepareForChange:(id)arg2;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;
- (void)unloadContentData;
- (void)userDidSelectDisclosureControl;
- (id)widgetDelegate;

@end
