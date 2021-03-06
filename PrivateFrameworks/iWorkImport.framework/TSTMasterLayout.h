/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSTLayoutDynamicColumnSwapProtocol>, <TSTLayoutDynamicContentProtocol>, <TSTLayoutDynamicRowSwapProtocol>, NSIndexSet, NSLock, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_semaphore>, NSRecursiveLock, TSDFill, TSDInfoGeometry, TSDLayoutGeometry, TSKChangeNotifier, TSTCellRegion, TSTDupContentCache, TSTHiddenRowsColumnsCache, TSTLayout, TSTLayoutDynamicResizeInfo, TSTLayoutTask, TSTMergeRangeSortedSet, TSTTableInfo, TSTTableModel, TSTWPColumnCache, TSTWidthHeightCache, TSUColor, TSUReadWriteQueue, TSURetainedPointerKeyDictionary, TSWPEditingController;

@interface TSTMasterLayout : NSObject <TSKChangeSourceObserver> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    struct { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    struct { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    struct { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    struct { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    struct { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    struct { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    struct CGSize { 
        float width; 
        float height; 
    TSKChangeNotifier *_changeNotifier;
    BOOL mBandedFillIsValid;
    TSDFill *mBandedFillObject;
    NSMutableArray *mBottomRowStrokes;
    unsigned int mCachedMaxNumberOfColumns;
    unsigned int mCachedMaxNumberOfRows;
    unsigned short mCachedNumberOfFooterRows;
    unsigned short mCachedNumberOfHeaderColumns;
    unsigned short mCachedNumberOfHeaderRows;
    float mCachedTableNameHeight;
    TSTWPColumnCache *mCellIDToWPColumnCache;
    NSMutableArray *mChangeDescriptors;
    TSKChangeNotifier *mChangeNotifier;
    TSWPEditingController *mContainedTextEditor;
    TSTLayoutTask *mCurrentLayoutTask;
    struct TSTTableStrokeDefaults { } *mDefaultStrokes;
    TSTDupContentCache *mDupContentCache;
    float mDynamicAddOrRemoveColumnElementSize;
    float mDynamicAddOrRemoveRowElementSize;
    BOOL mDynamicBandedFill;
    BOOL mDynamicBandedFillSetting;
    int mDynamicColumnAdjustment;
    <TSTLayoutDynamicColumnSwapProtocol> *mDynamicColumnSwapDelegate;
    float mDynamicColumnTabSize;
    <TSTLayoutDynamicContentProtocol> *mDynamicContentDelegate;
    TSUColor *mDynamicFontColor;
    } mDynamicFontColorCellRange;
    float mDynamicHeightResize;
    } mDynamicHidingContent;
    } mDynamicHidingRowsCols;
    int mDynamicHidingRowsColsDirection;
    } mDynamicHidingText;
    TSDInfoGeometry *mDynamicInfoGeometry;
    NSMutableSet *mDynamicLayouts;
    BOOL mDynamicRepResize;
    BOOL mDynamicRepressFrozenHeader;
    TSTLayoutDynamicResizeInfo *mDynamicResizeInfo;
    float mDynamicResizingColumnAdjustment;
    } mDynamicResizingColumnRange;
    BOOL mDynamicResizingColumns;
    float mDynamicResizingRowAdjustment;
    } mDynamicResizingRowRange;
    BOOL mDynamicResizingRows;
    } mDynamicRevealingRowsCols;
    int mDynamicRevealingRowsColsDirection;
    int mDynamicRowAdjustment;
    <TSTLayoutDynamicRowSwapProtocol> *mDynamicRowSwapDelegate;
    float mDynamicRowTabSize;
    TSDLayoutGeometry *mDynamicSavedLayoutGeometry;
    TSTCellRegion *mDynamicSelectionRegion;
    } mDynamicSuppressingConditionalStylesCellID;
    float mDynamicTableNameResize;
    float mDynamicWidthResize;
    BOOL mEmptyFilteredTable;
    BOOL mHeaderColumnsFrozen;
    BOOL mHeaderColumnsRepeat;
    BOOL mHeaderRowsFrozen;
    BOOL mHeaderRowsRepeat;
    TSTHiddenRowsColumnsCache *mHiddenRowsColumnsCache;
    BOOL mInDynamicLayoutMode;
    NSObject<OS_dispatch_group> *mLayoutInFlight;
    NSObject<OS_dispatch_semaphore> *mLayoutSemaphore;
    NSMutableArray *mLeftColumnStrokes;
    NSLock *mLock;
    unsigned int mMaxConcurrentTasks;
    } mMaximumPartitionSize;
    TSTMergeRangeSortedSet *mMergeRanges;
    unsigned int mNumCellsPerTask;
    TSURetainedPointerKeyDictionary *mParaStyleToHeightCache;
    BOOL mProcessHiddenRowsForExport;
    int mReferenceCount;
    NSMutableArray *mRightColumnStrokes;
    NSRecursiveLock *mStrokesLock;
    float mTableDefaultFontHeightForArea[4];
    BOOL mTableDefaultFontHeightsAreValid;
    int mTableEnvironment;
    TSTTableInfo *mTableInfo;
    } mTableNameBounds;
    BOOL mTableNameEnabled;
    int mTableRowsBehavior;
    TSTWPColumnCache *mTempWPColumnCache;
    NSMutableArray *mTopRowStrokes;
    BOOL mUseBandedFill;
    TSUReadWriteQueue *mWHCacheQueue;
    TSTWidthHeightCache *mWidthHeightCache;
}

@property(readonly) TSDFill * bandedFillObject;
@property(readonly) TSTWPColumnCache * cellIDToWPColumnCache;
@property(readonly) NSMutableArray * changeDescriptors;
@property TSKChangeNotifier * changeNotifier;
@property TSWPEditingController * containedTextEditor;
@property(readonly) TSTDupContentCache * dupContentCache;
@property(readonly) float dynamicAddOrRemoveColumnElementSize;
@property(readonly) float dynamicAddOrRemoveRowElementSize;
@property(readonly) BOOL dynamicBandedFill;
@property(readonly) BOOL dynamicBandedFillSetting;
@property(readonly) int dynamicColumnAdjustment;
@property(readonly) <TSTLayoutDynamicColumnSwapProtocol> * dynamicColumnSwapDelegate;
@property(readonly) float dynamicColumnTabSize;
@property(readonly) <TSTLayoutDynamicContentProtocol> * dynamicContentDelegate;
@property(readonly) TSUColor * dynamicFontColor;
@property(readonly) struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } dynamicFontColorCellRange;
@property float dynamicHeightResize;
@property(readonly) TSDInfoGeometry * dynamicInfoGeometry;
@property(readonly) TSTLayout * dynamicLayout;
@property(readonly) NSMutableSet * dynamicLayouts;
@property BOOL dynamicRepResize;
@property(readonly) float dynamicResizingColumnAdjustment;
@property(readonly) struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } dynamicResizingColumnRange;
@property(readonly) BOOL dynamicResizingColumns;
@property(readonly) float dynamicResizingRowAdjustment;
@property(readonly) struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; } dynamicResizingRowRange;
@property(readonly) BOOL dynamicResizingRows;
@property(readonly) int dynamicRowAdjustment;
@property(readonly) <TSTLayoutDynamicRowSwapProtocol> * dynamicRowSwapDelegate;
@property(readonly) float dynamicRowTabSize;
@property(copy) TSDLayoutGeometry * dynamicSavedLayoutGeometry;
@property(readonly) TSTCellRegion * dynamicSelectionRegion;
@property(readonly) struct { unsigned short x1; unsigned char x2; unsigned char x3; } dynamicSuppressingConditionalStylesCellID;
@property(readonly) float dynamicTableNameResize;
@property float dynamicWidthResize;
@property(readonly) BOOL emptyFilteredTable;
@property(readonly) TSTHiddenRowsColumnsCache * hiddenRowsColumnsCache;
@property(readonly) BOOL inDynamicLayoutMode;
@property(readonly) BOOL isGrouped;
@property unsigned int maxConcurrentTasks;
@property struct CGSize { float x1; float x2; } maximumPartitionSize;
@property TSTMergeRangeSortedSet * mergeRanges;
@property unsigned int numCellsPerTask;
@property BOOL processHiddenRowsForExport;
@property int tableEnvironment;
@property TSTTableInfo * tableInfo;
@property(readonly) TSTTableModel * tableModel;
@property(readonly) int tableRowsBehavior;
@property(readonly) TSTWPColumnCache * tempWPColumnCache;
@property(readonly) BOOL useBandedFill;
@property(readonly) NSIndexSet * visibleColumnIndices;
@property(readonly) NSIndexSet * visibleRowIndices;
@property(readonly) TSUReadWriteQueue * whCacheQueue;
@property(readonly) TSTWidthHeightCache * widthHeightCache;

+ (float)effectiveTableNameHeightForModel:(id)arg1;
+ (id)tableNameTextEngine:(id)arg1;
+ (struct CGSize { float x1; float x2; })tableNameTextSize:(id)arg1;

- (id).cxx_construct;
- (id)accountingParagraphStylePropertyMapForCell:(id)arg1 atCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (void)addChangeDescriptor:(id)arg1;
- (void)addChangeDescriptorWithType:(int)arg1 andCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2 andStrokeRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg3;
- (void)addChangeDescriptorWithType:(int)arg1 andCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
- (void)addDynamicLayoutBeginIfNecessary:(id)arg1;
- (id)adjustedDynamicSavedLayoutGeometry;
- (id)bandedFillObject;
- (void)beginDynamicMode:(id)arg1;
- (void)calculateRawTableSize:(struct CGSize { float x1; float x2; }*)arg1 andStrokeDelta:(struct CGSize { float x1; float x2; }*)arg2;
- (float)calculatedTableNameHeight;
- (float)calculatedTableNameHeightIncludingDynamicResize:(BOOL)arg1;
- (void)cancelDynamicModeChanges;
- (void)captureDynamicResizeInfo;
- (BOOL)cell:(id*)arg1 forCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (id)cellIDToWPColumnCache;
- (id)changeDescriptors;
- (id)changeNotifier;
- (void)clearModelHeightWidthCacheForCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)containedTextEditor;
- (void)dealloc;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })defaultPaddingForCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (id)description;
- (id)dupContentCache;
- (float)dynamicAddOrRemoveColumnElementSize;
- (float)dynamicAddOrRemoveRowElementSize;
- (BOOL)dynamicBandedFill;
- (BOOL)dynamicBandedFillSetting;
- (int)dynamicColumnAdjustment;
- (id)dynamicColumnSwapDelegate;
- (float)dynamicColumnTabSize;
- (id)dynamicContentDelegate;
- (id)dynamicFontColor;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })dynamicFontColorCellRange;
- (float)dynamicHeightResize;
- (id)dynamicInfoGeometry;
- (id)dynamicLayout;
- (id)dynamicLayouts;
- (BOOL)dynamicRepResize;
- (float)dynamicResizingColumnAdjustment;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })dynamicResizingColumnRange;
- (BOOL)dynamicResizingColumns;
- (float)dynamicResizingRowAdjustment;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })dynamicResizingRowRange;
- (BOOL)dynamicResizingRows;
- (int)dynamicRowAdjustment;
- (id)dynamicRowSwapDelegate;
- (float)dynamicRowTabSize;
- (id)dynamicSavedLayoutGeometry;
- (id)dynamicSelectionRegion;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })dynamicSuppressingConditionalStylesCellID;
- (float)dynamicTableNameResize;
- (float)dynamicWidthResize;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsetsFromPadding:(id)arg1;
- (BOOL)emptyFilteredTable;
- (void)endDynamicMode;
- (float)fontHeightOfParagraphStyle:(id)arg1;
- (id)hiddenRowsColumnsCache;
- (BOOL)hintIsValid:(id)arg1;
- (BOOL)inDynamicLayoutMode;
- (id)initWithInfo:(id)arg1;
- (void)invalidateBandedFill;
- (void)invalidateDefaultFontHeights;
- (void)invalidateDynamicResizeInfo;
- (void)invalidateTableNameHeight;
- (BOOL)isDynamicallyChangingContent;
- (BOOL)isDynamicallyChangingFontColorOfCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (BOOL)isDynamicallyChangingInfoGeometry;
- (BOOL)isDynamicallyChangingRowOrColumnCount;
- (BOOL)isDynamicallyChangingSelection;
- (BOOL)isDynamicallyColumnTabResizing;
- (BOOL)isDynamicallyHidingContentOfCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (BOOL)isDynamicallyHidingRowsCols:(int)arg1 rowColIndex:(unsigned short)arg2;
- (BOOL)isDynamicallyHidingRowsCols;
- (BOOL)isDynamicallyHidingRowsColsCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (BOOL)isDynamicallyHidingTextOfCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (BOOL)isDynamicallyRepressingFrozenHeaders;
- (BOOL)isDynamicallyResizing:(int)arg1 rowColIndex:(unsigned short)arg2;
- (BOOL)isDynamicallyResizing:(int)arg1;
- (BOOL)isDynamicallyResizingCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (BOOL)isDynamicallyResizingTableName;
- (BOOL)isDynamicallyRevealingRowsCols:(int)arg1 rowColIndex:(unsigned short)arg2;
- (BOOL)isDynamicallyRevealingRowsCols;
- (BOOL)isDynamicallyRowTabResizing;
- (BOOL)isDynamicallySettingBandedFill;
- (BOOL)isDynamicallySwappingColumns;
- (BOOL)isDynamicallySwappingRows;
- (BOOL)isGrouped;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })layoutCellIDForModelCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (unsigned int)maxConcurrentTasks;
- (struct CGSize { float x1; float x2; })maximumPartitionSize;
- (void)measureTextForLayoutState:(id)arg1;
- (id)mergeRanges;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })modelCellIDForLayoutCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (id)newLayoutHint;
- (id)newTextEngineForCell:(id)arg1 atCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (unsigned int)numCellsPerTask;
- (void)p_cancelDynamicRowColCountChanges;
- (void)p_processChange:(id)arg1 forChangeSource:(id)arg2;
- (void)p_validateFittingInfoForCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 inMergeRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })p_validateFittingInfoForEmptyCellsBetween:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 andCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 inRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg3;
- (void)p_validateFittingInfoForEmptyCellsOnSingleRowBetween:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 andEndCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })paddingForCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (BOOL)processHiddenRowsForExport;
- (void)processLayoutTask:(id)arg1;
- (void)queueCellForValidation:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 cell:(id)arg2 mergeRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg3 wrap:(BOOL)arg4 verticalAlignment:(int)arg5 padding:(id)arg6 prop:(BOOL)arg7 layoutCacheFlags:(int)arg8;
- (id)regionForStrokeValidationFromChangeDescriptors:(id)arg1;
- (void)removeDynamicLayoutEndIfNecessary:(id)arg1;
- (void)resetModelHeightWidthCache;
- (void)setChangeNotifier:(id)arg1;
- (void)setContainedTextEditor:(id)arg1;
- (void)setDynamicHeightResize:(float)arg1;
- (void)setDynamicRepResize:(BOOL)arg1;
- (void)setDynamicSavedLayoutGeometry:(id)arg1;
- (void)setDynamicWidthResize:(float)arg1;
- (void)setMaxConcurrentTasks:(unsigned int)arg1;
- (void)setMaximumPartitionSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setMergeRanges:(id)arg1;
- (void)setNumCellsPerTask:(unsigned int)arg1;
- (void)setProcessHiddenRowsForExport:(BOOL)arg1;
- (void)setTableEnvironment:(int)arg1;
- (void)setTableInfo:(id)arg1;
- (BOOL)shouldRowUseBandedFill:(unsigned short)arg1;
- (void)syncProcessChanges:(id)arg1 forChangeSource:(id)arg2;
- (int)tableAreaForCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (int)tableEnvironment;
- (id)tableInfo;
- (id)tableModel;
- (float)tableNameHeight;
- (id)tableNameTextEngine;
- (struct CGSize { float x1; float x2; })tableNameTextSize;
- (int)tableRowsBehavior;
- (id)tempWPColumnCache;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformForTargetSize:(struct CGSize { float x1; float x2; })arg1 withRawTableSize:(struct CGSize { float x1; float x2; })arg2 andStrokeDelta:(struct CGSize { float x1; float x2; })arg3;
- (void)updateDynamicBandedFill:(BOOL)arg1 setting:(BOOL)arg2;
- (BOOL)updateDynamicChangeRowOrColumnCount:(int)arg1 count:(int)arg2 newlyAddedElementSize:(float)arg3;
- (void)updateDynamicColumnSwapDelegate:(id)arg1;
- (void)updateDynamicColumnTabSize:(float)arg1;
- (void)updateDynamicContentDelegate:(id)arg1;
- (void)updateDynamicFontColor:(id)arg1 andRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
- (void)updateDynamicHidingContent:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)updateDynamicHidingRowsCols:(int)arg1 hidingCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
- (void)updateDynamicHidingText:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)updateDynamicInfoGeometry:(id)arg1;
- (void)updateDynamicRepressFrozenHeader;
- (void)updateDynamicResize:(int)arg1 resizingRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2 resizeAdjustment:(float)arg3;
- (void)updateDynamicResizeInfo:(id)arg1;
- (void)updateDynamicRevealingRowsCols:(int)arg1 revealingCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
- (void)updateDynamicRowSwapDelegate:(id)arg1;
- (void)updateDynamicRowTabSize:(float)arg1;
- (void)updateDynamicSelectionRegion:(id)arg1;
- (void)updateDynamicSuppressingConditionalStylesCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)updateDynamicTableNameSize:(float)arg1;
- (void)updateWHCForMergeRanges;
- (BOOL)useBandedFill;
- (void)validate;
- (void)validateBandedFill;
- (id)validateCellForDrawing:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1 cell:(id)arg2 contents:(id)arg3 wrap:(BOOL)arg4 verticalAlignment:(int)arg5 padding:(id)arg6 layoutCacheFlags:(int)arg7 pageNumber:(unsigned int)arg8 pageCount:(unsigned int)arg9;
- (void)validateChangeDescriptorQueue;
- (void)validateDefaultFontHeights;
- (void)validateDynamicResizeInfo;
- (void)validateFittingInfoForCell:(id)arg1 cellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 mergeRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg3 setFitting:(BOOL)arg4;
- (id)validateFittingInfoForChangeDescriptors:(id)arg1 rowsNeedingFittingInfo:(id)arg2;
- (void)validateFittingInfoWithCellRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)validateFittingWidthsForRegion:(id)arg1;
- (void)validateLayoutHint:(id)arg1;
- (void)validateMasterLayoutForChangeDescriptors:(id)arg1;
- (void)validateRowVisibility:(id)arg1;
- (void)validateStrokesForRegion:(id)arg1 regionAlreadyValidated:(id)arg2;
- (void)validateTableRowsBehavior;
- (id)visibleColumnIndices;
- (id)visibleRowIndices;
- (void)waitForLayoutToComplete;
- (id)whCacheQueue;
- (id)widthHeightCache;

@end
