/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DVTKit/DVTBorderedView.h>

#import "DVTDynamicTableRowViewSupport-Protocol.h"
#import "DVTInvalidation-Protocol.h"

@class DVTComparisonSplitView, DVTStackBacktrace, NSView, NSViewAnimation;

@interface DVTDynamicTableRowView : DVTBorderedView <DVTDynamicTableRowViewSupport, DVTInvalidation>
{
    DVTComparisonSplitView *_splitView;
    NSView *_leftContentView;
    NSView *_rightContentView;
    NSViewAnimation *_viewAnimation;
    id _populationBlock;
    struct dispatch_queue_s *_popQ;
    BOOL _removed;
}

+ (void)initialize;
+ (id)dynamicTableRowViewUsingSplitViewStyle:(int)arg1;
+ (id)keyPathsForValuesAffectingSelected;
@property(getter=isRemoved) BOOL removed; // @synthesize removed=_removed;
@property struct dispatch_queue_s *popQ; // @synthesize popQ=_popQ;
@property(copy) id populationBlock; // @synthesize populationBlock=_populationBlock;
@property(retain) NSViewAnimation *viewAnimation; // @synthesize viewAnimation=_viewAnimation;
@property(retain) NSView *rightContentView; // @synthesize rightContentView=_rightContentView;
@property(retain) NSView *leftContentView; // @synthesize leftContentView=_leftContentView;
@property(retain) DVTComparisonSplitView *splitView; // @synthesize splitView=_splitView;
- (void).cxx_destruct;
- (void)populateLeftContentSubview:(id)arg1 rightContentSubview:(id)arg2 withAnimation:(BOOL)arg3;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)showPlaceholderWithPopulationBlock:(id)arg1 usingQueue:(void)arg2;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

