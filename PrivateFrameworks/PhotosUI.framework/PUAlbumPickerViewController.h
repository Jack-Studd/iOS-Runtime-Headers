/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<PLAlbumContainer>, PUAbstractAlbumListViewController, PUAlbumPickerSessionInfo, PUAlbumPickerViewControllerSpec, UINavigationController;

@interface PUAlbumPickerViewController : UIViewController <PLAssetContainerListChangeObserver, PUSessionInfoObserver, UINavigationControllerDelegate> {
    PUAbstractAlbumListViewController *__albumListViewController;
    struct NSObject { Class x1; } *_albumList;
    PUAlbumPickerSessionInfo *_albumPickerSessionInfo;
    id _completionHandler;
    UINavigationController *_contentNavigationController;
    PUAlbumPickerViewControllerSpec *_spec;
}

@property(setter=_setAlbumListViewController:,retain) PUAbstractAlbumListViewController * _albumListViewController;
@property(retain) NSObject<PLAlbumContainer> * albumList;
@property(retain) PUAlbumPickerSessionInfo * albumPickerSessionInfo;
@property(copy) id completionHandler;
@property(retain) UINavigationController * contentNavigationController;
@property(retain) PUAlbumPickerViewControllerSpec * spec;

- (void).cxx_destruct;
- (id)_albumListViewController;
- (void)_setAlbumListViewController:(id)arg1;
- (void)_setContentNavigationController:(id)arg1;
- (void)_setSessionInfo:(id)arg1;
- (void)_setSpec:(id)arg1;
- (struct NSObject { Class x1; }*)albumList;
- (id)albumPickerSessionInfo;
- (void)assetContainerListDidChange:(id)arg1;
- (id)completionHandler;
- (id)contentNavigationController;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)initWithSpec:(id)arg1 sessionInfo:(id)arg2;
- (void)loadView;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)sessionInfoStatusDidChange:(id)arg1;
- (void)setAlbumList:(struct NSObject { Class x1; }*)arg1;
- (void)setCompletionHandler:(id)arg1;
- (BOOL)shouldAutorotate;
- (id)spec;
- (unsigned int)supportedInterfaceOrientations;

@end
