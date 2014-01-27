/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDENavigableItemDomainProvider.h"

@class DVTMapTable, DVTObservingToken, IDEWorkspace, NSArray, NSMutableArray;

@interface DBGDisassemblyItemExecutionEnvironmentWrapper : IDENavigableItemDomainProvider
{
    IDEWorkspace *_workspace;
    NSMutableArray *_processWrappers;
    DVTMapTable *_launchSessionsProcessToObserverTokens;
    DVTObservingToken *_launchSessionObserver;
    DVTObservingToken *_workspacesLaunchSessionsObserver;
    DVTObservingToken *_workspaceValidObserver;
}

+ (id)domainObjectForWorkspace:(id)arg1;
+ (id)modelForWorkspace:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (id)disassemblyItemForStackFrame:(id)arg1;
- (void)_handleProcessRemoved:(id)arg1;
- (void)_handleProcessChanged:(id)arg1;
- (void)_handleLaunchSessionsAdded:(id)arg1;
- (void)_handleLaunchSessionsRemoved:(id)arg1;
- (void)_handleLaunchSessionsChanged:(id)arg1;
- (id)initWithWorkspace:(id)arg1;

// Remaining properties
@property(readonly) NSMutableArray *mutableProcessWrappers; // @dynamic mutableProcessWrappers;
@property(readonly) NSArray *processWrappers; // @dynamic processWrappers;

@end
