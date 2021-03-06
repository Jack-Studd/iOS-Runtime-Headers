/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class <VKRoutePreloadSession>, VGLRenderState, VKSkyModel;

@interface VKRealisticMapModel : VKVectorMapModel <VKMapLayer> {
    BOOL _disableRealisticLand;
    BOOL _disableRealisticRoads;
    double _fade;
    VGLRenderState *_renderState;
    <VKRoutePreloadSession> *_routePreloadSession;
    float _sceneAlpha;
    VKSkyModel *_skyModel;
}

@property BOOL disableRealisticLand;
@property BOOL disableRealisticRoads;
@property(retain) <VKRoutePreloadSession> * routePreloadSession;
@property float sceneAlpha;
@property(retain) VKSkyModel * skyModel;

- (double)_calculateZoomLevelWithContext:(id)arg1;
- (void)dealloc;
- (BOOL)disableRealisticLand;
- (BOOL)disableRealisticRoads;
- (void)drawDebugScene:(id)arg1 withContext:(id)arg2;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (id)init;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (unsigned int)mapLayerPosition;
- (BOOL)minimumZoomLevelBoundsCamera;
- (void)preloadNavigationSceneAnimationResourcesForDisplayStyle:(int)arg1 context:(id)arg2;
- (void)preloadRenderingResourcesWithContext:(id)arg1;
- (id)routePreloadSession;
- (float)sceneAlpha;
- (void)setDisableRealisticLand:(BOOL)arg1;
- (void)setDisableRealisticRoads:(BOOL)arg1;
- (void)setRoutePreloadSession:(id)arg1;
- (void)setSceneAlpha:(float)arg1;
- (void)setSkyModel:(id)arg1;
- (id)skyModel;
- (void)stylesheetDidChange;
- (void)stylesheetWillChange;
- (unsigned int)supportedRenderPasses;
- (BOOL)wantsCategorizedSourceTiles;
- (void)willStartDrawingTiles:(id)arg1;

@end
