/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class MKMapView, NSArray, NSMutableArray, NSString, PLPlace;

@interface PLPlaces : NSObject <PLAlbumContainer> {
    NSMutableArray *_addedAnnotations;
    NSMutableArray *_animationOnlyAnnotations;
    NSMutableArray *_annotationsToRemoveWhenAddAnimationEnds;
    NSMutableArray *_annotationsToRemoveWhenAddAnimationStarts;
    NSMutableArray *_deletedAnnotations;
    NSArray *_locationAssets;
    MKMapView *_mapView;
    NSMutableArray *_newlyVisibleAnnotations;
    PLPlace *_nullPlace;
    NSMutableArray *_photosWithLocationInformation;
    NSMutableArray *_places;
    NSMutableArray *_unaffectedAnnotations;
}

@property(readonly) NSString * _prettyDescription;
@property(readonly) NSString * _typeDescription;
@property(readonly) unsigned int albumsCount;
@property(readonly) id albumsSortingComparator;
@property(readonly) unsigned int containersCount;
@property(readonly) int filter;
@property(readonly) unsigned int unreadAlbumsCount;

- (void)_assetsWereAdded:(id)arg1 deleted:(id)arg2 updated:(id)arg3;
- (void)_createMapAnnotationsFromChanges:(id)arg1 toChanges:(id)arg2 intoPlaces:(id)arg3;
- (void)_createPlacesWithNewPhotos:(id)arg1 newPlaces:(id)arg2 intoFromChanges:(id)arg3 toChanges:(id)arg4;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_defaultRegionForNoPlacesData;
- (id)_findVisiblePhotosInRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 notInRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_findVisiblePhotosInRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_loadPlacesData;
- (void)_loadPlacesDataFromLocationAssets:(id)arg1;
- (void)_logPhotos:(id)arg1;
- (id)_newAnimationAnnotationWithLongitude:(double)arg1 latitude:(double)arg2;
- (id)_newPlaceForRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_partitionPhotos:(id)arg1 intoPlaces:(id)arg2 inRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)_placeForPhoto:(id)arg1 inPlaces:(id)arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_placeRegionForPhoto:(id)arg1 isValidRegion:(BOOL*)arg2;
- (id)_prettyDescription;
- (void)_resetAnnotationBuckets;
- (void)_splitCurrentPlaces:(id)arg1 newPlaces:(id)arg2 intoFromChanges:(id)arg3 toChanges:(id)arg4 forNewRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (id)_typeDescription;
- (void)_updateCurrentPlaces:(id)arg1 newPlaces:(id)arg2 intoFromChanges:(id)arg3 toChanges:(id)arg4 fromOriginalRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg5 forNewRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg6;
- (id)addedAnnotations;
- (BOOL)albumHasFixedOrder:(struct NSObject { Class x1; }*)arg1;
- (int)albumListType;
- (id)albums;
- (unsigned int)albumsCount;
- (id)albumsSortingComparator;
- (id)animationOnlyAnnotations;
- (id)annotationsToRemoveWhenAddAnimationEnds;
- (id)annotationsToRemoveWhenAddAnimationStarts;
- (BOOL)canEditAlbums;
- (BOOL)canEditContainers;
- (id)containers;
- (unsigned int)containersCount;
- (id)containersRelationshipName;
- (void)dealloc;
- (id)deletedAnnotations;
- (int)filter;
- (void)fullReset;
- (BOOL)hasAtLeastOneAlbum;
- (id)identifier;
- (id)initWithMapView:(id)arg1 fixedLocationAssets:(id)arg2;
- (BOOL)isEmpty;
- (id)managedObjectContext;
- (BOOL)needsReordering;
- (id)newlyVIsibleAnnotations;
- (id)photoLibrary;
- (id)places;
- (void)setMapView:(id)arg1;
- (void)setNeedsReordering;
- (void)setupPlacesForRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)unaffectedAnnotations;
- (unsigned int)unreadAlbumsCount;
- (void)updateAlbumsOrderIfNeeded;
- (void)updatePlacesFromRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 toRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2 viaZoom:(BOOL)arg3;
- (void)updatePlacesWithAddedAssets:(id)arg1 deletedAssets:(id)arg2 updatedAssets:(id)arg3;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })visibleMapRectangleForZoomedOutPins;

@end
