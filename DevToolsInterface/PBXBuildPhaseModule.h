/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/PBXProjectModule.h>

@class PBXBuildPhase;

@interface PBXBuildPhaseModule : PBXProjectModule
{
    PBXBuildPhase *_buildPhase;
    CDStruct_3d6bd516 _bpmFlags;
}

- (void)setSelectedProjectItems:(id)arg1;
- (id)selectedProjectItems;
- (void)update;
- (id)project;
- (id)label;
- (id)buildPhase;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (id)initWithBuildPhase:(id)arg1;

@end
