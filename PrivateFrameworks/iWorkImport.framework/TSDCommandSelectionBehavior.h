/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSObject<TSDCanvasEditor>, TSKDocumentRoot, TSPObject<TSKArchivedSelection>, TSPObject<TSKModel>;

@interface TSDCommandSelectionBehavior : TSKCommandSelectionBehavior {
    TSPObject<TSKArchivedSelection> *mArchivedNewCanvasSelection;
    TSPObject<TSKArchivedSelection> *mArchivedOldCanvasSelection;
    NSObject<TSDCanvasEditor> *mCanvasEditor;
    TSKDocumentRoot *mDocumentRootForSelection;
    TSPObject<TSKModel> *mModelForSelection;
    int mType;
}

@property(readonly) NSObject<TSDCanvasEditor> * canvasEditor;
@property(readonly) TSPObject<TSKModel> * modelForSelection;

- (id)canvasEditor;
- (void)dealloc;
- (id)destructiveSelectionChangeForSelection:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithCanvasEditor:(id)arg1 type:(int)arg2 canvasSelection:(id)arg3;
- (id)initWithCanvasEditor:(id)arg1 type:(int)arg2 constructedInfos:(id)arg3;
- (id)initWithCanvasEditor:(id)arg1 type:(int)arg2;
- (id)initWithCanvasEditor:(id)arg1;
- (void)loadFromArchive:(const struct CommandSelectionBehaviorArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; struct Reference {} *x4; struct Reference {} *x5; int x6; int x7; unsigned int x8[1]; }*)arg1 unarchiver:(id)arg2;
- (id)modelForSelection;
- (void)p_adjustCommentVisibilityWhenNecessary;
- (void)p_registerSelectionChange:(id)arg1 withSelectionFlags:(unsigned int)arg2;
- (void)p_registerSelectionInvalidation:(id)arg1;
- (void)registerSelectionChangesForCommit;
- (void)registerSelectionChangesForRedo;
- (void)registerSelectionChangesForUndo;
- (void)saveToArchive:(struct CommandSelectionBehaviorArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; struct Reference {} *x4; struct Reference {} *x5; int x6; int x7; unsigned int x8[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;

@end