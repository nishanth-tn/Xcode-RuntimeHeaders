/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class NSData, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSOpenGLContext, SKDisplayLink, SKLabelNode, SKScene;

@interface SKView : NSView
{
    unsigned long long _frameInterval;
    SKDisplayLink *_displayLink;
    NSObject<OS_dispatch_queue> *_updateQueue;
    double _timePreviousUpdate;
    SKLabelNode *_statsLabel;
    double _prevViewAspect;
    unsigned int _spritesRendered;
    unsigned int _spritesSubmitted;
    int _frames;
    unsigned int _prevSpritesRendered;
    unsigned int _prevSpritesRenderedSubmitted;
    double _timeBeginFrameCount;
    float _fps;
    NSOpenGLContext *_context;
    unsigned int _colorRenderBuffer;
    unsigned int _depthStencilRenderBuffer;
    unsigned int _frameBuffer;
    NSOpenGLContext *_layerBackedContext;
    BOOL _usesAsyncUpdateQueue;
    BOOL _hasRenderedOnce;
    BOOL _hasRenderedForCurrentUpdate;
    BOOL _isInTransition;
    BOOL _disableInput;
    float _transitionDuration;
    float _transitionTime;
    SKScene *_nextScene;
    SKScene *_scene;
    BOOL _paused;
    NSData *_spriteArrayHint;
    struct SKCRenderer *_renderer;
    NSMutableDictionary *_touchMap;
    float _prevBackingScaleFactor;
    NSObject<OS_dispatch_queue> *_renderQueue;
    BOOL showsFPS;
    BOOL showsNodeCount;
}

- (void).cxx_destruct;
- (void)setFrameSize:(struct CGSize)arg1;
@property(readonly) SKScene *scene;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 updateQueue:(id)arg2;
- (id)init;
- (id)_textureFromNode:(id)arg1;
- (id)textureFromNode:(id)arg1;
@property BOOL showsDrawCount;
@property BOOL showsNodeCount; // @synthesize showsNodeCount;
@property BOOL showsFPS; // @synthesize showsFPS;
- (BOOL)showsSpriteBounds;
- (void)setShowsSpriteBounds:(BOOL)arg1;
@property(readonly) struct CGSize pixelSize;
- (void)writeContentsToPNG:(id)arg1;
@property(getter=isPaused) BOOL paused;
@property long long frameInterval;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)clipViewBoundsDidChange:(id)arg1;
- (void)_renderContent;
- (void)renderContent;
- (void)renderCallback:(double)arg1;
- (void)presentScene:(id)arg1 transition:(id)arg2;
- (void)presentScene:(id)arg1;
- (void)_setupContext;
@property(retain) NSOpenGLContext *_context;
- (void)drawRect:(struct CGRect)arg1;
- (id)makeBackingLayer;
- (void)set_layerBackedContext:(id)arg1;
- (void)remakeFramebuffer:(double)arg1;
- (void)_initialize;
- (void)dealloc;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromScene:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toScene:(id)arg2;
- (BOOL)acceptsFirstResponder;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)stopRenderCallbacks;
- (void)startRenderCallbacks;
- (void)setUpRenderCallback;
- (void)bindOpenGLContext;
@property BOOL _usesAsyncUpdateQueue;
@property BOOL ignoresSiblingOrder;
@property(getter=isAsynchronous) BOOL asynchronous;
@property(readonly) int _spriteSubmitCount;
@property(readonly) int _spriteRenderCount;
@property(readonly) double _fps;
@property(readonly) SKScene *_nextScene;
@property(readonly) SKScene *_scene;
- (void)_update:(double)arg1;
- (void)_showAllStats;
@property BOOL _showsTotalAreaRendered;
@property BOOL _showsCulledNodesInNodeCount;
@property BOOL _showsGPUStats;
@property BOOL _showsCPUStats;
@property BOOL _showsCoreAnimationFPS;
@property BOOL _shouldCenterStats;
@property BOOL _showsSpriteBounds;
- (void)renderToIOSurfaceID:(unsigned int)arg1 withScaleFactor:(double)arg2;
- (void)renderToOpenGLTextureId:(unsigned int)arg1 size:(struct CGSize)arg2 scaleFactor:(double)arg3;
- (id)snapshot;

@end
